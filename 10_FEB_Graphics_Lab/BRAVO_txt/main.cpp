#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

/* Initialize OpenGL Graphics */
void initGL() {
	// Set "clearing" or background color
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Black and opaque
}

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display() {
	glClear(GL_COLOR_BUFFER_BIT);   // Clear the color buffer with current clearing color

    //
    //       B
    //
	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(1.0f, 0.0f, 0.0f); // RED
	glVertex2f(-0.9f, 0.0f);
	glVertex2f(-0.75f, 0.0f);

	glVertex2f(-0.75f, 0.0f);
	glVertex2f(-0.7f, 0.05f);

	glVertex2f(-0.7f, 0.05f);
	glVertex2f(-0.7f, 0.15f);

	glVertex2f(-0.7f, 0.15f);
	glVertex2f(-0.75f, 0.2f);

	glVertex2f(-0.75f, 0.2f);
	glVertex2f(-0.9f, 0.2f);

	glVertex2f(-0.9f, 0.2f);
	glVertex2f(-0.9f, 0.0f);
	glEnd();


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(1.0f, 1.0f, 1.0f); // WHITE
	glVertex2f(-0.85f, 0.05f);
	glVertex2f(-0.75f, 0.05f);

	glVertex2f(-0.75f, 0.05f);
	glVertex2f(-0.75f, 0.15f);

	glVertex2f(-0.75f, 0.15f);
	glVertex2f(-0.85f, 0.15f);

	glVertex2f(-0.85f, 0.15f);
	glVertex2f(-0.85f, 0.05f);
	glEnd();


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(1.0f, 0.0f, 0.0f); // RED
	glVertex2f(-0.9f, 0.2f);
	glVertex2f(-0.75f, 0.2f);

	glVertex2f(-0.75f, 0.2f);
	glVertex2f(-0.7f, 0.25f);

	glVertex2f(-0.7f, 0.25f);
	glVertex2f(-0.7f, 0.35f);

	glVertex2f(-0.7f, 0.35f);
	glVertex2f(-0.75f, 0.4f);

	glVertex2f(-0.75f, 0.4f);
	glVertex2f(-0.9f, 0.4f);

	glVertex2f(-0.9f, 0.4f);
	glVertex2f(-0.9f, 0.2f);
	glEnd();


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(1.0f, 1.0f, 1.0f); // WHITE
	glVertex2f(-0.85f, 0.25f);
	glVertex2f(-0.75f, 0.25f);

	glVertex2f(-0.75f, 0.25f);
	glVertex2f(-0.75f, 0.35f);

	glVertex2f(-0.75f, 0.35f);
	glVertex2f(-0.85f, 0.35f);

	glVertex2f(-0.85f, 0.35f);
	glVertex2f(-0.85f, 0.25f);
	glEnd();



	//
	//     R
	//
	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(1.0f, 0.0f, 0.0f); // WHITE
	glVertex2f(-0.6f, 0.0f);
	glVertex2f(-0.55f, 0.0f);

	glVertex2f(-0.55f, 0.0f);
	glVertex2f(-0.55f, 0.4f);

	glVertex2f(-0.55f, 0.4f);
	glVertex2f(-0.6f, 0.4f);

	glVertex2f(-0.6f, 0.4f);
	glVertex2f(-0.6f, 0.0f);
	glEnd();


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(1.0f, 0.0f, 0.0f); // WHITE
	glVertex2f(-0.55f, 0.2f);
	glVertex2f(-0.5f, 0.2f);

	glVertex2f(-0.5f, 0.2f);
	glVertex2f(-0.35f, 0.0f);

	glVertex2f(-0.35f, 0.0f);
	glVertex2f(-0.4f, 0.0f);

	glVertex2f(-0.4f, 0.0f);
	glVertex2f(-0.55f, 0.2f);
	glEnd();


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(1.0f, 0.0f, 0.0f); // WHITE
	glVertex2f(-0.55f, 0.2f);
	glVertex2f(-0.5f, 0.2f);

	glVertex2f(-0.5f, 0.2f);
	glVertex2f(-0.4f, 0.25f);

	glVertex2f(-0.4f, 0.25f);
	glVertex2f(-0.4f, 0.35f);

	glVertex2f(-0.4f, 0.35f);
	glVertex2f(-0.5f, 0.4f);

	glVertex2f(-0.5f, 0.4f);
	glVertex2f(-0.55f, 0.4f);

	glVertex2f(-0.55f, 0.4f);
	glVertex2f(-0.55f, 0.2f);
	glEnd();



	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(1.0f, 1.0f, 1.0f); // WHITE
	glVertex2f(-0.55f, 0.25f);
	glVertex2f(-0.5f, 0.25f);

	glVertex2f(-0.5f, 0.25f);
	glVertex2f(-0.45f, 0.27f);

	glVertex2f(-0.45f, 0.27f);
	glVertex2f(-0.45f, 0.33f);

	glVertex2f(-0.45f, 0.33f);
	glVertex2f(-0.5f, 0.35f);

	glVertex2f(-0.5f, 0.35f);
	glVertex2f(-0.55f, 0.35f);

	glVertex2f(-0.55f, 0.35f);
	glVertex2f(-0.55f, 0.25f);
	glEnd();


	//
	//            A
	//
	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(1.0f, 0.0f, 0.0f); // WHITE
	glVertex2f(-0.3f, 0.0f);
	glVertex2f(-0.2f, 0.4f);

	glVertex2f(-0.2f, 0.4f);
	glVertex2f(-0.16f, 0.34f);

	glVertex2f(-0.16f, 0.34f);
	glVertex2f(-0.25f, 0.0f);

	glVertex2f(-0.25f, 0.0f);
	glVertex2f(-0.3f, 0.0f);
	glEnd();


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(1.0f, 0.0f, 0.0f); // WHITE
	glVertex2f(-0.16f, 0.34f);
	glVertex2f(-0.2f, 0.4f);

	glVertex2f(-0.2f, 0.4f);
	glVertex2f(-0.1f, 0.4f);

	glVertex2f(-0.1f, 0.4f);
	glVertex2f(-0.13f, 0.35f);

	glVertex2f(-0.13f, 0.35f);
	glVertex2f(-0.16f, 0.34f);
	glEnd();


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(1.0f, 0.0f, 0.0f); // WHITE
	glVertex2f(-0.05f, 0.0f);
	glVertex2f(0.0f, 0.0f);

	glVertex2f(0.0f, 0.0f);
	glVertex2f(-0.1f, 0.4f);

	glVertex2f(-0.1f, 0.4f);
	glVertex2f(-0.13f, 0.35f);

	glVertex2f(-0.13f, 0.35f);
	glVertex2f(-0.05f, 0.0f);
	glEnd();


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(1.0f, 0.0f, 0.0f); // WHITE
	glVertex2f(-0.2f, 0.2f);
	glVertex2f(-0.1879542181921f, 0.2500157129747f);

	glVertex2f(-0.1879542181921f, 0.2500157129747f);
	glVertex2f(-0.104592830433f, 0.2506481387312f);

	glVertex2f(-0.104592830433f, 0.2506481387312f);
	glVertex2f(-0.08f, 0.2f);

	glVertex2f(-0.08f, 0.2f);
	glVertex2f(-0.2f, 0.2f);
	glEnd();



	//
	//            V
	//
	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(1.0f, 0.0f, 0.0f); // WHITE
	glVertex2f(0.15f, 0.0f);
	glVertex2f(0.0f, 0.4f);

	glVertex2f(0.0f, 0.4f);
	glVertex2f(0.05f, 0.4f);

	glVertex2f(0.05f, 0.4f);
	glVertex2f(0.15f, 0.15f);

	glVertex2f(0.15f, 0.15f);
	glVertex2f(0.15f, 0.0f);
	glEnd();


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(1.0f, 0.0f, 0.0f); // RED

	glVertex2f(0.15f, 0.15f);
	glVertex2f(0.15f, 0.0f);

	glVertex2f(0.15f, 0.0f);
	glVertex2f(0.3f, 0.4f);

	glVertex2f(0.3f, 0.4f);
	glVertex2f(0.25f, 0.4f);

	glVertex2f(0.25f, 0.4f);
	glVertex2f(0.15f, 0.15f);
	glEnd();



	//
	//           O
	//
	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(1.0f, 0.0f, 0.0f); // RED

	glVertex2f(0.4f, 0.0f);
	glVertex2f(0.35f, 0.1f);

	glVertex2f(0.35f, 0.1f);
	glVertex2f(0.35f, 0.3f);

	glVertex2f(0.35f, 0.3f);
	glVertex2f(0.4f, 0.4f);

	glVertex2f(0.4f, 0.4f);
	glVertex2f(0.55f, 0.4f);

	glVertex2f(0.55f, 0.4f);
	glVertex2f(0.6f, 0.3f);

	glVertex2f(0.6f, 0.3f);
	glVertex2f(0.6f, 0.1f);

	glVertex2f(0.6f, 0.1f);
	glVertex2f(0.55f, 0.0f);

	glVertex2f(0.55f, 0.0f);
	glVertex2f(0.4f, 0.0f);
	glEnd();



	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(1.0f, 1.0f, 1.0f); // RED

	glVertex2f(0.45f, 0.05f);
	glVertex2f(0.4f, 0.1f);

	glVertex2f(0.4f, 0.1f);
	glVertex2f(0.4f, 0.3f);

	glVertex2f(0.4f, 0.3f);
	glVertex2f(0.45f, 0.35f);

	glVertex2f(0.45f, 0.35f);
	glVertex2f(0.5f, 0.35f);

	glVertex2f(0.5f, 0.35f);
	glVertex2f(0.55f, 0.3f);

	glVertex2f(0.55f, 0.3f);
	glVertex2f(0.55f, 0.1f);

	glVertex2f(0.55f, 0.1f);
	glVertex2f(0.5f, 0.05f);

	glVertex2f(0.5f, 0.05f);
	glVertex2f(0.45f, 0.05f);
	glEnd();






	glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);          // Initialize GLUT
	glutCreateWindow("Vertex, Primitive & Color");  // Create window with the given title
	glutInitWindowSize(320, 320);   // Set the window's initial width & height
	glutInitWindowPosition(50, 50); // Position the window's initial top-left corner
	glutDisplayFunc(display);       // Register callback handler for window re-paint event
	initGL();                       // Our own OpenGL initialization
	glutMainLoop();                 // Enter the event-processing loop
	return 0;
}
