#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include <math.h>

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
	glLineWidth(7.5);


	// Green
    glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(1.0f, 0.0f, 0.0f); //RED
	glVertex2f(-0.7f, -0.5f);
	glVertex2f(0.7f, -0.5f);
	glVertex2f(0.7f, -0.3f);
	glVertex2f(-0.7f, -0.3f);
	glEnd();


	// YELLOW
    glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(1.0f, 1.0f, 0.0f); //RED
	glVertex2f(-0.7f, -0.3f);
	glVertex2f(0.7f, -0.3f);
	glVertex2f(0.7f, -0.1f);
	glVertex2f(-0.7f, -0.1f);
    glEnd();


    // ORANGE
    glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(1.0f, 0.5f, 0.0f); //Orange
	glVertex2f(-0.7f, -0.1f);
	glVertex2f(0.7f, -0.1f);
	glVertex2f(0.7f, 0.1f);
	glVertex2f(-0.7f, 0.1f);
    glEnd();


    // GREEN
    glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.0f, 1.0f, 0.0f); //GREEN
	glVertex2f(-0.7f, 0.1f);
	glVertex2f(0.7f, 0.1f);
	glVertex2f(0.7f, 0.3f);
	glVertex2f(-0.7f, 0.3f);
    glEnd();


    // CYAN
    glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.0f, 1.0f, 1.0f); //CYAN
	glVertex2f(-0.7f, 0.3f);
	glVertex2f(0.7f, 0.3f);
	glVertex2f(0.7f, 0.5f);
	glVertex2f(-0.7f, 0.5f);
    glEnd();

    // BLUE
    glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.0f, 0.0f, 1.0f); //BLUE
	glVertex2f(-0.7f, 0.5f);
	glVertex2f(0.7f, 0.5f);
	glVertex2f(0.7f, 0.7f);
	glVertex2f(-0.7f, 0.7f);
    glEnd();

    // PURPLE
    glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(1.0f, 0.0f, 1.0); //PURPLE
	glVertex2f(-0.7f, 0.7f);
	glVertex2f(0.7f, 0.7f);
	glVertex2f(0.7f, 0.9f);
	glVertex2f(-0.7f, 0.9f);
    glEnd();


	glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutInitWindowSize(720, 520);// Set the window's initial width & height
	glutCreateWindow("OpenGL Setup Test");
	//gluOrtho2D(-0.1,0.7,-0.1,0.3); // Create a window with the given title
	//glutInitWindowSize(320, 320);// Set the window's initial width & height
	glutDisplayFunc(display);// Register display callback handler for window re-paint
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
