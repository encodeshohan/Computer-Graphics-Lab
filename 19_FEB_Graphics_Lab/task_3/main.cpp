#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include <math.h>

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */

//   22-46013-1
//   MD. SHOHANUR RAHMAN SHOHAN

lampPost()
{
//  ################################
//  ##                            ##
//  ##      LOWER PORTION         ##
//  ##                            ##
//  ################################

    glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.5f, 0.5f);
	glVertex2f(3.5f, -10.0f);
	glVertex2f(2.0f, -10.0f);
	glVertex2f(2.3f, -9.5f);
	glVertex2f(3.2f, -9.5f);
	glEnd();

    //  OUTLINE
	glBegin(GL_LINES);
	glColor3f(1.f, 1.0f, 1.0f);
	glVertex2f(3.5f, -10.0f);
	glVertex2f(2.0f, -10.0f);
	glVertex2f(2.0f, -10.0f);
	glVertex2f(2.3f, -9.5f);
	glVertex2f(2.3f, -9.5f);
	glVertex2f(3.2f, -9.5f);
	glVertex2f(3.2f, -9.5f);
	glVertex2f(3.5f, -10.0f);
	glEnd();


    glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.5f, 0.5f);
	glVertex2f(3.1f, -9.5f);
	glVertex2f(2.4f, -9.5f);
	glVertex2f(2.5f, -9.3f);
	glVertex2f(3.0f, -9.3f);
	glEnd();

	//    OUTLINE
	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(3.1f, -9.5f);
	glVertex2f(2.4f, -9.5f);
	glVertex2f(2.4f, -9.5f);
	glVertex2f(2.5f, -9.3f);
	glVertex2f(2.5f, -9.3f);
	glVertex2f(3.0f, -9.3f);
	glVertex2f(3.0f, -9.3f);
	glVertex2f(3.1f, -9.5f);
	glEnd();



//  ################################
//  ##                            ##
//  ##      STAND PORTION         ##
//  ##                            ##
//  ################################

    glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.5f, 0.5f);
	glVertex2f(2.9f, -9.3f);
	glVertex2f(2.6f, -9.3f);
	glVertex2f(2.6f, 0.0f);
	glVertex2f(2.9f, 0.0f);
	glEnd();

    // OUTLINE
	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(2.9f, -9.3f);
	glVertex2f(2.6f, -9.3f);
	glVertex2f(2.6f, -9.3f);
	glVertex2f(2.6f, 0.0f);
	glVertex2f(2.6f, 0.0f);
	glVertex2f(2.9f, 0.0f);
	glVertex2f(2.9f, 0.0f);
	glVertex2f(2.9f, -9.3f);
	glEnd();



//  ################################
//  ##                            ##
//  ##      UPPER PORTION         ##
//  ##                            ##
//  ################################

    glBegin(GL_POLYGON);
	glColor3f(1.0f, 0.0f, 0.0f);   //RED
	glVertex2f(3.0f, 0.0f);
	glVertex2f(2.5f, 0.0f);
	glVertex2f(2.5f, 0.2f);
	glVertex2f(3.0f, 0.2f);
	glEnd();

	//     OUTLINE
	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(3.0f, 0.0f);
	glVertex2f(2.5f, 0.0f);
	glVertex2f(2.5f, 0.0f);
	glVertex2f(2.5f, 0.2f);
	glVertex2f(2.5f, 0.2f);
	glVertex2f(3.0f, 0.2f);
	glVertex2f(3.0f, 0.2f);
	glVertex2f(3.0f, 0.0f);
	glEnd();


	glBegin(GL_POLYGON);
	glColor3f(1.0f, 0.0, 0.0f);   // RED
	glVertex2f(3.2f, 0.2f);
	glVertex2f(2.3f, 0.2f);
	glVertex2f(2.3f, 0.4f);
	glVertex2f(3.2f, 0.4f);
	glEnd();

	//    OUTLINE
	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(3.2f, 0.2f);
	glVertex2f(2.3f, 0.2f);
	glVertex2f(2.3f, 0.2f);
	glVertex2f(2.3f, 0.4f);
	glVertex2f(2.3f, 0.4f);
	glVertex2f(3.2f, 0.4f);
	glVertex2f(3.2f, 0.4f);
	glVertex2f(3.2f, 0.2f);
	glEnd();



//  ################################
//  ##                            ##
//  ##      LAMP PORTION          ##
//  ##                            ##
//  ################################

    glBegin(GL_POLYGON);
	glColor3f(0.5f, 1.0f, 1.0f);
	glVertex2f(3.2f, 0.4f);
	glVertex2f(2.3f, 0.4f);
	glVertex2f(1.7f, 1.8f);
	glVertex2f(3.8f, 1.8f);
	glEnd();

    // TRIANGLE
	glBegin(GL_POLYGON);
	glColor3f(0.8f, 0.0f, 0.0f);
	glVertex2f(4.0f, 1.8f);
	glVertex2f(1.5f, 1.8f);
	glVertex2f(2.75f, 3.0f);
	glEnd();


	//  L1
	glBegin(GL_POLYGON);
	glColor3f(1.f, 1.0f, 0.0f);
	glVertex2f(2.695f, 0.45f);
	glVertex2f(2.32, 0.45f);
	glVertex2f(2.0429f, 1.105f);
	glVertex2f(2.695f, 1.105f);
	glEnd();

	// L2
	glBegin(GL_POLYGON);
	glColor3f(1.f, 1.0f, 0.0f);
	glVertex2f(2.695f, 1.205f);
	glVertex2f(2.0006, 1.205f);
	glVertex2f(1.77f, 1.75f);
	glVertex2f(2.695f, 1.75f);
	glEnd();

	//  L3
	glBegin(GL_POLYGON);
	glColor3f(1.f, 1.0f, 0.0f);
	glVertex2f(3.4778077f, 1.205f);
	glVertex2f(2.795, 1.205f);
	glVertex2f(2.795f, 1.75f);
	glVertex2f(3.7f, 1.75f);
	glEnd();

	//  L4
	glBegin(GL_POLYGON);
	glColor3f(1.f, 1.0f, 0.0f);
	glVertex2f(3.17f, 0.45f);
	glVertex2f(2.795, 0.45f);
	glVertex2f(2.795f, 1.105f);
	glVertex2f(3.437f, 1.105f);
	glEnd();
}
void display() {
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
	glLineWidth(1);

    lampPost();
	glFlush();  // Render now
}
/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutInitWindowSize(520, 720);// Set the window's initial width & height
	glutCreateWindow("OpenGL Setup Test");
	//gluOrtho2D(-0.1,0.7,-0.1,0.3); // Create a window with the given title
	//glutInitWindowSize(320, 320);// Set the window's initial width & height
	glutDisplayFunc(display);// Register display callback handler for window re-paint
	gluOrtho2D(0,6,-14,10);
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
