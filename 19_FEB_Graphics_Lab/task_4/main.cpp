#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include <math.h>

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */

//   22-46013-1
//   MD. SHOHANUR RAHMAN SHOHAN

bench()
{
//  ################################
//  ##                            ##
//  ##         ALL  BAR           ##
//  ##                            ##
//  ################################

    // BAR1
    glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.5f, 0.5f);
	glVertex2f(8.0f, -10.0f);
	glVertex2f(7.6f, -10.0f);
	glVertex2f(7.6f, -8.2f);
	glVertex2f(8.0f, -8.2f);
	glEnd();

	// BAR2
    glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.5f, 0.5f);
	glVertex2f(9.3f, -10.0f);
	glVertex2f(9.0f, -10.0f);
	glVertex2f(9.0f, -8.2f);
	glVertex2f(9.3f, -8.2f);
	glEnd();

	// BAR3
    glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.5f, 0.5f);
	glVertex2f(15.0f, -10.0f);
	glVertex2f(14.7f, -10.0f);
	glVertex2f(14.7f, -8.2f);
	glVertex2f(15.0f, -8.2f);
	glEnd();

	// BAR4
    glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.5f, 0.5f);
	glVertex2f(16.4f, -10.0f);
	glVertex2f(16.0f, -10.0f);
	glVertex2f(16.0f, -8.2f);
	glVertex2f(16.4f, -8.2f);
	glEnd();

	// BAR5
    glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.5f, 0.5f);
	glVertex2f(9.3f, -6.0f);
	glVertex2f(9.0f, -6.0f);
	glVertex2f(9.0f, -2.5f);
	glVertex2f(9.3f, -2.5f);
	glEnd();

	// BAR6
    glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.5f, 0.5f);
	glVertex2f(15, -6.0f);
	glVertex2f(14.7f, -6.0f);
	glVertex2f(14.7f, -2.5f);
	glVertex2f(15.0f, -2.5f);
	glEnd();



//  ################################
//  ##                            ##
//  ##       SITING AREA          ##
//  ##                            ##
//  ################################

    // small portion
    glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.5f, 0.5f);
	glVertex2f(17.0f, -8.2f);
	glVertex2f(7.0f, -8.2f);
	glVertex2f(7.0f, -8.0f);
	glVertex2f(17.0f, -8.0f);
	glEnd();


	// large portion
    glBegin(GL_POLYGON);
	glColor3f(0.8f, 0.5f, 0.0);
	glVertex2f(17.0f, -8.0f);
	glVertex2f(16.0f, -6.0f);
	glVertex2f(8.0f, -6.0f);
	glVertex2f(7.0f, -8.0f);
	glEnd();



//  ################################
//  ##                            ##
//  ##     BACKREST AREA          ##
//  ##                            ##
//  ################################

    // it's from bottom to top
    glBegin(GL_POLYGON);
	glColor3f(0.8f, 0.5f, 0.0f);
	glVertex2f(8.0f, -5.5f);
	glVertex2f(8.0f, -5.0f);
	glVertex2f(16.0f, -5.0f);
	glVertex2f(16.0f, -5.5f);
	glEnd();
	//
	glBegin(GL_POLYGON);
	glColor3f(0.8f, 0.5f, 0.0f);
	glVertex2f(16.0f, -4.8f);
	glVertex2f(16.0f, -4.3f);
	glVertex2f(8.0f, -4.3f);
	glVertex2f(8.0f, -4.8);
	glEnd();
	//
	glBegin(GL_POLYGON);
	glColor3f(0.8f, 0.5f, 0.0f);
	glVertex2f(8.0f, -4.1f);
	glVertex2f(8.0f, -3.6f);
	glVertex2f(16.0f, -3.6f);
	glVertex2f(16.0f, -4.1f);
	glEnd();
	//
	glBegin(GL_POLYGON);
	glColor3f(0.8f, 0.5f, 0.0f);
	glVertex2f(16.0f, -3.4f);
	glVertex2f(16.0f, -2.9f);
	glVertex2f(8.0f, -2.9f);
	glVertex2f(8.0f, -3.4f);
	glEnd();
}
void display() {
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
	glLineWidth(1);

    bench();
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
	gluOrtho2D(4,20,-14,4);
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
