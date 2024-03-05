#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include <math.h>

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
	glLineWidth(1);


    // OUTLINE
	glBegin(GL_LINES);            // These vertices form a closed polygon
	glColor3f(0.0f, 0.0f, 0.0f); //BLACK
	glVertex2f(-2.0f, -2.0f);
	glVertex2f(-2.0f, 2.0f);

	glVertex2f(-2.0f, 2.0f);
	glVertex2f(2.0f, 2.0f);

	glVertex2f(2.0f, 2.0f);
	glVertex2f(2.0f, -2.0f);

	glVertex2f(2.0f, -2.0f);
	glVertex2f(-2.0f, -2.0f);
	glEnd();


	// Green
    glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.0f, 0.0f, 0.0f); //BLACK
	glVertex2f(-2.0f, 1.0f);
	glVertex2f(-2.0f, 2.0f);
	glVertex2f(-1.0f, 2.0f);
	glVertex2f(-1.0f, 1.0f);
	glEnd();


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.0f, 0.0f, 0.0f); //BLACK
	glVertex2f(-2.0f, -1.0f);
	glVertex2f(-2.0f, 0.0f);
	glVertex2f(-1.0f, 0.0f);
	glVertex2f(-1.0f, -1.0f);
	glEnd();


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.0f, 0.0f, 0.0f); //BLACK
	glVertex2f(-1.0f, 0.0f);
	glVertex2f(-1.0f, 1.0f);
	glVertex2f(0.0f, 1.0f);
	glVertex2f(0.0f, 0.0f);
	glEnd();


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.0f, 0.0f, 0.0f); //BLACK
	glVertex2f(-1.0f, -2.0f);
	glVertex2f(-1.0f, -1.0f);
	glVertex2f(0.0f, -1.0f);
	glVertex2f(0.0f, -2.0f);
	glEnd();


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.0f, 0.0f, 0.0f); //BLACK
	glVertex2f(0.0f, 1.0f);
	glVertex2f(0.0f, 2.0f);
	glVertex2f(1.0f, 2.0f);
	glVertex2f(1.0f, 1.0f);
	glEnd();


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.0f, 0.0f, 0.0f); //BLACK
	glVertex2f(0.0f, -1.0f);
	glVertex2f(0.0f, 0.0f);
	glVertex2f(1.0f, 0.0f);
	glVertex2f(1.0f, -1.0f);
	glEnd();


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.0f, 0.0f, 0.0f); //BLACK
	glVertex2f(1.0f, 0.0f);
	glVertex2f(1.0f, 1.0f);
	glVertex2f(2.0f, 1.0f);
	glVertex2f(2.0f, 0.0f);
	glEnd();


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.0f, 0.0f, 0.0f); //BLACK
	glVertex2f(1.0f, -2.0f);
	glVertex2f(1.0f, -1.0f);
	glVertex2f(2.0f, -1.0f);
	glVertex2f(2.0f, -2.0f);
	glEnd();


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
	gluOrtho2D(-3,3,-3,3);
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
