#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include <math.h>
/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */

//   22-46013-1
//   MD. SHOHANUR RAHMAN SHOHAN

tree()
{
//  ################################
//  ##                            ##
//  ##   Perpendicular Portion    ##
//  ##                            ##
//  ################################
    glBegin(GL_POLYGON);
    glColor3f(0.35f, 0.0f, 0.0f);
	glVertex2f(-50.0f, -10.0f);
	glVertex2f(-54.0f, -10.0f);
	glVertex2f(-54.0f, 2.0f);
	glVertex2f(-50.0f, 2.0f);
	glEnd();

//  ################################
//  ##                            ##
//  ##      Leaf CIRCLE           ##
//  ##                            ##
//  ################################
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(0.0,1.0,0.0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=8.6659815004197;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-52,y+6);
        }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(0.0,1.0,0.0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=5.830845944313;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-58,y+2);
        }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(0.0,1.0,0.0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=5.4226234335593;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-56,y+10);
        }
    glEnd();


    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(0.0,1.0,0.0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=6.4799888240209;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-52,y+12);
        }
    glEnd();

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(0.0,1.0,0.0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=5.2014196599334;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-48,y+10);
        }
    glEnd();


    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(0.0,1.0,0.0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=5.9123382529913;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-46,y+2);
        }
    glEnd();
}
void display() {
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
	glLineWidth(1);

    tree();
	glFlush();  // Render now
}
/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutInitWindowSize(520, 520);// Set the window's initial width & height
	glutCreateWindow("OpenGL Setup Test");
	//gluOrtho2D(-0.1,0.7,-0.1,0.3); // Create a window with the given title
	//glutInitWindowSize(320, 320);// Set the window's initial width & height
	glutDisplayFunc(display);// Register display callback handler for window re-paint
	gluOrtho2D(-70,-35,-15,20);
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
