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
void car()
{
    glMatrixMode(GL_MODELVIEW);

    //BODY
    glBegin(GL_POLYGON);
	glColor3f(0.8f,0.8,0.0f);
	glVertex2f(8.8f, 9.0f);
	glVertex2f(9.2f, 9.0f);
	glVertex2f(10.0f, 1.0f);
	glVertex2f(8.0f, 1.0f);
	glEnd();

	circle(0.72111, 9.0, 9.0, 0.65,0.65,0.65);

    glPushMatrix();
    glTranslatef(9.0,9.0,0.0);
    glRotatef(_angle1, 0.0f, 0.0f,1.0f);
    glTranslatef(-9.0,-9.0,0.0);
	glBegin(GL_POLYGON);
	glColor3f(0.75f, 0.75f, 0.75f);
	glVertex2f(9.8, 9.8f);
	glVertex2f(12.0f, 12.0f);
	glVertex2f(11.6f, 12.4f);
	glVertex2f(9.4f, 10.2f);
	glVertex2f(9.4f, 9.8f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.75f, 0.75f, 0.75f);
	glVertex2f(9.8, 9.8f);
	glVertex2f(9.4f, 9.8f);
	glVertex2f(9.0f, 9.0f);
	glEnd();
	glPopMatrix();

///////////////////////////////////
	glPushMatrix();
    glTranslatef(9.0,9.0,0.0);
    glRotatef(_angle1, 0.0f, 0.0f,1.0f);
    glTranslatef(-9.0,-9.0,0.0);
	glBegin(GL_POLYGON);
	glColor3f(0.75f, 0.75f, 0.75f);
	glVertex2f(5.6f, 11.6f);
	glVertex2f(6.0f, 12.0f);
	glVertex2f(8.2f, 9.8f);
	glVertex2f(8.2f, 9.4f);
	glVertex2f(7.8f, 9.4f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.75f, 0.75f, 0.75f);
	glVertex2f(8.2f, 9.8f);
	glVertex2f(9.0f, 9.0f);
	glVertex2f(8.2f, 9.4f);
	glEnd();
	glPopMatrix();
////////////////////////////////

    glPushMatrix();
    glTranslatef(9.0,9.0,0.0);
    glRotatef(_angle1, 0.0f, 0.0f,1.0f);
    glTranslatef(-9.0,-9.0,0.0);
	glBegin(GL_POLYGON);
	glColor3f(0.75f, 0.75f, 0.75f);
	glVertex2f(6.4f, 5.6f);
	glVertex2f(6.0f, 6.0f);
	glVertex2f(8.4f, 8.4f);
	glVertex2f(8.4f, 8.4f);
	glVertex2f(8.6f, 8.2f);
	glVertex2f(8.6f, 7.8f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.75f, 0.75f, 0.75f);
	glVertex2f(8.4f, 8.4f);
	glVertex2f(9.0f, 9.0f);
	glVertex2f(8.6f, 8.2f);
	glEnd();
	glPopMatrix();
///////////////////////////////////////

    glPushMatrix();
    glTranslatef(9.0,9.0,0.0);
    glRotatef(_angle1, 0.0f, 0.0f,1.0f);
    glTranslatef(-9.0,-9.0,0.0);
	glBegin(GL_POLYGON);
	glColor3f(0.75f, 0.75f, 0.75f);
	glVertex2f(9.6f, 8.4f);
	glVertex2f(12.0f, 6.0f);
	glVertex2f(12.4f, 6.4f);
	glVertex2f(10.2f, 8.6f);
	glVertex2f(9.8f, 8.6f);

	glBegin(GL_POLYGON);
	glColor3f(0.75f, 0.75f, 0.75f);
	glVertex2f(9.6f, 8.4f);
	glVertex2f(9.0f, 9.0f);
	glVertex2f(9.8f, 8.6f);
	glEnd();
	glPopMatrix();

	circle(0.5, 9.0, 9.0, 0.35,0.35,0.35);
    glutSwapBuffers();
}
void update(int value){

    _angle1-=1.0f;
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
    gluOrtho2D(2,16,0,14);
    glutTimerFunc(20, update, 0); //Add a timer
    glutMainLoop();
    return 0;
}
