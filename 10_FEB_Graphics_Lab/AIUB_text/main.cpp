#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display() {
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
	glLineWidth(2.5);
	// Draw a Red 1x1 Square centered at origin
	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.0f, 0.0f); // Red

	//             A

	glVertex2f(-0.65f, 0.0f);    // x, y
	glVertex2f(-0.55f, 0.3f);    // x, y

	glVertex2f(-0.55f, 0.3f);    // x, y
	glVertex2f(-0.45f, 0.0f);    // x, y

	glVertex2f(-0.61f, 0.1f);    // x, y
	glVertex2f(-0.48f, 0.1f);    // x, y
    //             I
	glVertex2f(-0.3f, 0.0f);    // x, y
	glVertex2f(-0.3f, 0.3f);    // x, y
	//             U
	glVertex2f(-0.15f, 0.3f);
	glVertex2f(-0.15f, 0.1f);

	glVertex2f(-0.15f, 0.1f);
	glVertex2f(-0.05f, 0.0f);

	glVertex2f(-0.05f, 0.0f);
	glVertex2f(0.05f, 0.0f);

	glVertex2f(0.05f, 0.0f);
	glVertex2f(0.15f, 0.1f);

	glVertex2f(0.15f, 0.1f);
	glVertex2f(0.15f, 0.3f);
	//               B
	glVertex2f(0.3f, 0.0f);
	glVertex2f(0.4f, 0.0f);

	glVertex2f(0.4f, 0.0f);
	glVertex2f(0.45f, 0.05f);

	glVertex2f(0.45f, 0.05f);
	glVertex2f(0.45f, 0.1f);

	glVertex2f(0.45f, 0.1f);
	glVertex2f(0.4f, 0.15f);

	glVertex2f(0.4f, 0.15f);
	glVertex2f(0.3f, 0.15f);

	glVertex2f(0.3f, 0.15f);
	glVertex2f(0.3f, 0.3f);

	glVertex2f(0.3f, 0.3f);
	glVertex2f(0.4f, 0.3f);

	glVertex2f(0.4f, 0.3f);
	glVertex2f(0.45f, 0.25f);

	glVertex2f(0.45f, 0.25f);
	glVertex2f(0.45f, 0.2f);

	glVertex2f(0.45f, 0.2f);
	glVertex2f(0.4f, 0.15f);

	glVertex2f(0.3f, 0.0f);
	glVertex2f(0.3f, 0.15f);


	glEnd();



	glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutCreateWindow("OpenGL Setup"); // Create a window with the given title
	glutInitWindowSize(320, 320);   // Set the window's initial width & height
	glutDisplayFunc(display); // Register display callback handler for window re-paint
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
