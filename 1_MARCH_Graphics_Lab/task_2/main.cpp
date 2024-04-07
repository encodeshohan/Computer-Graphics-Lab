#include <iostream>
#include<GL/gl.h>
#include <GL/glut.h>
#include <windows.h>
#include <math.h>
using namespace std;

//   22-46013-1
//   MD. SHOHANUR RAHMAN SHOHAN

float _angle1 = 0.0f;


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
void sky()
{
	glBegin(GL_POLYGON);
	glColor3f(0.5607,0.7412,0.8902);
	glVertex2f(-60.0f, -5.0f);
	glVertex2f(-60.0, 60.0f);
	glVertex2f(95.0f, 60.0f);
	glVertex2f(95.0f, -5.0f);
	glEnd();
}

void road()
{
	glBegin(GL_POLYGON);
	glColor3f(0.35f,0.35f,0.35f);
	glVertex2f(-60.0f, -30.0f);
	glVertex2f(-60.0, -5.0f);
	glVertex2f(95.0f, -5.0f);
	glVertex2f(95.0f, -30.0f);
	glEnd();
}

void mountain()
{
	glBegin(GL_POLYGON);
	glColor3f(0.01f,0.2,0.13f);
	glVertex2f(-60.0f, -5.0f);
	glVertex2f(-60.0, 20.0f);
	glVertex2f(-50.0f, 30.0f);
	glVertex2f(-20.0f, -5.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.01f,0.2,0.13f);
	glVertex2f(-50.0f, -5.0f);
	glVertex2f(-20.0, 40.0f);
	glVertex2f(80.0f, -5.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.01f,0.2,0.13f);
	glVertex2f(-20.0f, -5.0f);
	glVertex2f(30.0, 40.0f);
	glVertex2f(95.0f, -5.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.01f,0.2,0.13f);
	glVertex2f(35.0f, -5.0f);
	glVertex2f(95.0, 40.0f);
	glVertex2f(95.0f, -5.0f);
	glEnd();
}

void car()
{
    glMatrixMode(GL_MODELVIEW);

    //BODY
    glBegin(GL_POLYGON);
	glColor3f(0.8f,0.8,0.0f);
	glVertex2f(50.0f, -10.0f);
	glVertex2f(0.0, -10.0f);
	glVertex2f(-8.0f, -8.0f);
	glVertex2f(-8.0f, -2.0f);
	glVertex2f(6.0f, 0.0f);
	glVertex2f(12.0f, 8.0f);
	glVertex2f(34.0f, 8.0f);
	glVertex2f(38.0f, 0.0f);
	glVertex2f(50.0f, 0.0f);
	glVertex2f(50.0f, -10.0f);
	glEnd();

	// Window
	glBegin(GL_POLYGON);
	glColor3f(0.5f,1.0,1.0f);
	glVertex2f(21.3f, 0.0f);
	glVertex2f(7.4f, 0.0f);
	glVertex2f(12.8f, 7.0f);
	glVertex2f(21.3f, 7.0f);
	glEnd();

	// Window
	glBegin(GL_POLYGON);
	glColor3f(0.5f,1.0,1.0f);
	glVertex2f(36.5f, 0.0f);
	glVertex2f(22.3f, 0.0f);
	glVertex2f(22.3f, 7.0f);
	glVertex2f(32.2f, 7.0f);
	glEnd();



	glPushMatrix();
    glTranslatef(8.0,-10.0,0.0);
    glRotatef(_angle1, 0.0f, 0.0f,1.0f);
    glTranslatef(-8.0,10.0,0.0);

	circle(4.24264, 8.0, -10.0, 0.35,0.35,0.35);  // WHEEL
	circle(3.62243, 8.0, -10.0, 0.0,0.0,0.0);  // WHEEL

	circle(0.55, 8.0, -8.0, 1.0,0.0,0.0);  // WHEEL
	circle(0.55, 8.0, -12.0, 1.0,0.0,0.0);  // WHEEL
	glPopMatrix();

    glPushMatrix();
    glTranslatef(38.0,-10.0,0.0);
    glRotatef(_angle1, 0.0f, 0.0f,1.0f);
    glTranslatef(-38.0,10.0,0.0);
	circle(4.24264, 38.0, -10.0, 0.35,0.35,0.35);  // WHEEL
	circle(3.62243, 38.0, -10.0, 0.0,0.0,0.0);  // WHEEL

	circle(0.55, 38.0, -8.0, 1.0,0.0,0.0);  // WHEEL
	circle(0.55, 38.0, -12.0, 1.0,0.0,0.0);  // WHEEL

    glPopMatrix();
    glutSwapBuffers();
}
void update(int value) {

    _angle1-=2.0f;
    if(_angle1 > 360.0)
    {
        _angle1-=360;
    }
    glutPostRedisplay(); //Notify GLUT that the display has changed

    glutTimerFunc(20, update, 0); //Notify GLUT to call update again in 25 milliseconds
}


void display() {
	glClear(GL_COLOR_BUFFER_BIT);
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glColor3d(1,0,0);
    //glLoadIdentity();
	sky();
	mountain();
	road();
	car();
	glFlush();  // Render now
}
/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(920, 520);
    glutCreateWindow("Moving Wheel");
    glutDisplayFunc(display);
    gluOrtho2D(-60,95,-30,60);
    glutTimerFunc(20, update, 0); //Add a timer
    glutMainLoop();
    return 0;
}
