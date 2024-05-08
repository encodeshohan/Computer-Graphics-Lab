#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include <cstdlib>
#include <ctime>
#include<iostream>
#include <math.h>
using namespace std;

//   22-46013-1
//   MD. SHOHANUR RAHMAN SHOHAN

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
const int numDrops = 70;
int winWidth = 280, winHeight = 160;

struct Raindrop {
    float x, y;
    float speed;
    float length;
};

Raindrop drops[numDrops];

// Define the boundaries of the square area
float minX = -140.0;
float maxX = 140.0;
float minY = -80.0;
float maxY = +80.0;
float r = 28.2842712474619;

void circle(float radius, float xc, float yc, float r, float g, float b)
{
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(r,g,b);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=radius;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+xc,y+yc);
        }
	glEnd();
}

//circle(1.0, -24.0, 0.0, 0.01,0.25,0.13);

void init()
{
  // glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
   // gluOrtho2D(0, winWidth, 0, winHeight);

    // Initialize random seed
    srand(time(NULL));

    // Initialize raindrops within the square area
    for (int i = 0; i < numDrops; ++i) {
        drops[i].x = minX + rand() % (int)(maxX - minX);
        drops[i].y = minY + rand() % (int)(maxY - minY);
        drops[i].speed = 3.0 + (rand() % 10) / 10.0; // Random speed between 2 and 3
        drops[i].length = 5.0 + (rand() % 20); // Random length between 5 and 25
    }
}

void drawRain()
{
    glLineWidth(2.5);
    glBegin(GL_LINES);
    glColor3f(0.7, 0.7, 1.0); // Light blue color
    for (int i = 0; i < numDrops; ++i)
        {
        glVertex2f(drops[i].x, drops[i].y);
        glVertex2f(drops[i].x, drops[i].y - drops[i].length);
        }
    glEnd();
}

void updateRain()
{
    for (int i = 0; i < numDrops; ++i)
        {
            drops[i].y -= drops[i].speed;
            if (drops[i].y < minY)      // Check if the raindrop has reached the lower boundary
            {
                drops[i].y = maxY;     // Reset the raindrop's position to the upper boundary
            }
        }
}


void update(int value)
{
    updateRain();
    glutPostRedisplay();
    glutTimerFunc(20, update, 0);
}

float _move = 1;
float _movey = 0;

void flood(int value)
{
    if (_move < 220)
        _move += 0.3;
    if (_move >= 220)
        _movey += 0.1;

    glutPostRedisplay();

    glutTimerFunc(20, flood, 0);


}

void jungle()
{
    glColor3f(0, 0.7, 0);
    circle(r, 100.0, 0.0, 0.0,0.4,0.0);
    circle(r, 128.0, 0.0, 0.0,0.4,0.0);
    circle(r, 60.0, 0.0, 0.0,0.4,0.0);
    circle(r, 20.0, 0.0, 0.0,0.4,0.0);
    circle(r, -20.0, 0.0, 0.0,0.4,0.0);
    circle(r, -110.0, 0.0, 0.0,0.4,0.0);
}

void greenGround()
{
    glColor3f(0, 1, 0);
    glBegin(GL_POLYGON);
    glVertex2f(-140,-80);
    glVertex2f(-100,-80);
    glVertex2f(-59,-74);
    glVertex2f(-20,-60);
    glVertex2f(50,-50);
    glVertex2f(71,-39);
    glVertex2f(75,-25);
    glVertex2f(75,-25);
    glVertex2f(0,0);
    glVertex2f(-140,0);

    glEnd();
}


void river(){

    glPushMatrix();
    glTranslatef(-_move,_movey, 0);
    glColor3f(0, 0, 1);
    glBegin(GL_POLYGON);

    glVertex2f(-100,-200);
    glVertex2f(500,-200);
    //glVertex2f(140,-80);
    //glVertex2f(140,0);
    glVertex2f(500,0);
    glVertex2f(0,0);
    glVertex2f(75,-25);
    glVertex2f(71,-39);
    glVertex2f(50,-50);
    glVertex2f(20,-60);
    glVertex2f(-59,-74);
    glVertex2f(-100,-80);

    glEnd();

    glPopMatrix();
}

void house()
{
    // body
    glColor3f(0.44, 0.4, 0.24);
    glBegin(GL_POLYGON);
    glVertex2f(-118,-20);
    glVertex2f(-62,-20);
    glVertex2f(-62,20);
    glVertex2f(-118,20);
    glEnd();

    // right window
    glColor3f(0.8, 0.8, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(-75,0);
    glVertex2f(-65,0);
    glVertex2f(-65,10);
    glVertex2f(-75,10);
    glEnd();

    // left window
    glColor3f(0.8, 0.8, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(-115,0);
    glVertex2f(-105,0);
    glVertex2f(-105,10);
    glVertex2f(-115,10);
    glEnd();

    // roof
    glColor3f(0.55, 0.5, 0.24);
    glBegin(GL_POLYGON);
    glVertex2f(-120,20);
    glVertex2f(-60,20);
    glVertex2f(-80,40);
    glVertex2f(-100,40);
    glEnd();
}






void display() {
	glClearColor(0.11, 0.51, 0.88, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)

    jungle();
    greenGround();
    house();

    river();
    drawRain();

	glFlush();  // Render now
    glutSwapBuffers();
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutInitWindowSize(920, 520);   // Set the window's initial width & height
	glutCreateWindow("Rain with Flood Effect"); // Create a window with the given title
	init();
	glutDisplayFunc(display); // Register display callback handler for window re-paint
	gluOrtho2D(-140, +140, -80, +80);
	glutTimerFunc(10, update, 0);
	glutTimerFunc(20, flood, 0);
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
