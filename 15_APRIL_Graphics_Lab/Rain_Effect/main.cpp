#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include <cstdlib>
#include <ctime>
#include<iostream>
using namespace std;

//   22-46013-1
//   MD. SHOHANUR RAHMAN SHOHAN

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
const int numDrops = 100;
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

void init() {
    glMatrixMode(GL_PROJECTION);

    srand(time(NULL));

    // Initialize raindrops within the square area
    for (int i = 0; i < numDrops; ++i)
        {
        drops[i].x = minX + rand() % (int)(maxX - minX);
        drops[i].y = minY + rand() % (int)(maxY - minY);
        drops[i].speed = 3.0 + (rand() % 10) / 10.0; // Random speed between 2 and 3
        drops[i].length = 5.0 + (rand() % 20); // Random length between 5 and 25
        }
}

void drawRain() {
    //glPointSize(2.0);
    glLineWidth(2.5);
    glBegin(GL_LINES);
    glColor3f(0.7, 0.7, 1.0); // Light blue color
    for (int i = 0; i < numDrops; ++i) {
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
        if (drops[i].y < minY)   // Check if the raindrop has reached the lower boundary
        {
            drops[i].y = maxY;  // Reset the raindrop's position to the upper boundary
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

void display()
{
	glClearColor(0.11, 0.52, 0.88, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
    drawRain();
	glFlush();  // Render now
    glutSwapBuffers();
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv)
{
	glutInit(&argc, argv);                 // Initialize GLUT
	glutInitWindowSize(920, 520);   // Set the window's initial width & height
	glutCreateWindow("Rain Effect"); // Create a window with the given title
	init();
	glutDisplayFunc(display); // Register display callback handler for window re-paint
	gluOrtho2D(-140, +140, -80, +80);
	glutTimerFunc(20, update, 0);
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
