#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display() {
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)

    // White
    glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(1.0f, 1.0f, 1.0f); // Yellow
	glVertex2f(-0.6f, -0.5f);
	glVertex2f(-0.3f, -0.5f);

	glVertex2f(-0.3f, -0.5f);
	glVertex2f(-0.3f, 0.5f);

	glVertex2f(-0.3f, 0.5f);
	glVertex2f(-0.6f, 0.5f);

	glVertex2f(-0.6f, 0.5f);
	glVertex2f(-0.6f, -0.5f);

	glEnd();



	// Green
    glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.0f, 0.5f, 0.0f); // Yellow
	glVertex2f(-0.3f, -0.5f);
	glVertex2f(0.6f, -0.5f);

	glVertex2f(0.6f, -0.5f);
	glVertex2f(0.6f, 0.0f);

	glVertex2f(0.6f, 0.0f);
	glVertex2f(-0.3f, 0.0f);

	glVertex2f(-0.3f, 0.0f);
	glVertex2f(-0.3f, -0.5f);


	glEnd();


	// Green
    glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(1.0f, 0.0f, 0.0f); // Yellow
	glVertex2f(-0.3f, 0.0);
	glVertex2f(0.6f, 0.0);

	glVertex2f(0.6f, 0.0);
	glVertex2f(0.6f, 0.5);

	glVertex2f(0.6f, 0.5);
	glVertex2f(-0.3f, 0.5);

	glVertex2f(-0.3f, 0.5);
	glVertex2f(-0.3f, 0.0);


	glEnd();

	glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutCreateWindow("OpenGL Setup Test"); // Create a window with the given title
	glutInitWindowSize(320, 320);   // Set the window's initial width & height
	glutDisplayFunc(display); // Register display callback handler for window re-paint
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
