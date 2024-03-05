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
    //       N
    //
	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(1.0f, 0.0f, 0.0f); // RED
	glVertex2f(-0.95f, 0.0f);
	glVertex2f(-0.95f, 0.5f);

	glVertex2f(-0.95f, 0.5f);
	glVertex2f(-0.9f, 0.5f);

	glVertex2f(-0.9f, 0.5f);
	glVertex2f(-0.9f, 0.0f);

	glVertex2f(-0.9f, 0.0f);
	glVertex2f(-0.95f, 0.0f);
	glEnd();


    glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(1.0f, 0.0f, 0.0f); // RED
	glVertex2f(-0.9f, 0.5f);
	glVertex2f(-0.9f, 0.4);

	glVertex2f(-0.9f, 0.4);
	glVertex2f(-0.75f, 0.0);

	glVertex2f(-0.75f, 0.0);
	glVertex2f(-0.75f, 0.1);

	glVertex2f(-0.75f, 0.1);
	glVertex2f(-0.9f, 0.5);
	glEnd();


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(1.0f, 0.0f, 0.0f); // RED
	glVertex2f(-0.75f, 0.0f);
	glVertex2f(-0.7f, 0.0f);

	glVertex2f(-0.7f, 0.0f);
	glVertex2f(-0.7f, 0.5f);

	glVertex2f(-0.7f, 0.5f);
	glVertex2f(-0.75f, 0.5f);

	glVertex2f(-0.75f, 0.5f);
	glVertex2f(-0.75f, 0.0f);
	glEnd();


	//
	//         E
	//
	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(1.0f, 0.0f, 0.0f); // RED
	glVertex2f(-0.6f, 0.0f);
	glVertex2f(-0.6f, 0.05f);

	glVertex2f(-0.6f, 0.05f);
	glVertex2f(-0.4f, 0.05f);

	glVertex2f(-0.4f, 0.05f);
	glVertex2f(-0.4f, 0.0f);

	glVertex2f(-0.4f, 0.0f);
	glVertex2f(-0.6f, 0.0f);
	glEnd();


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(1.0f, 0.0f, 0.0f); // RED
	glVertex2f(-0.6f, 0.23f);
	glVertex2f(-0.6f, 0.28f);

	glVertex2f(-0.6f, 0.28f);
	glVertex2f(-0.4f, 0.28f);

	glVertex2f(-0.4f, 0.28f);
	glVertex2f(-0.4f, 0.23f);

	glVertex2f(-0.4f, 0.23f);
	glVertex2f(-0.6f, 0.23f);
	glEnd();


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(1.0f, 0.0f, 0.0f); // RED
	glVertex2f(-0.6f, 0.5f);
	glVertex2f(-0.4f, 0.5f);

	glVertex2f(-0.4f, 0.5f);
	glVertex2f(-0.4f, 0.45f);

	glVertex2f(-0.4f, 0.45f);
	glVertex2f(-0.6f, 0.45f);

	glVertex2f(-0.6f, 0.45f);
	glVertex2f(-0.6f, 0.5f);
	glEnd();


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(1.0f, 0.0f, 0.0f); // RED
	glVertex2f(-0.65f, 0.0f);
	glVertex2f(-0.65f, 0.5f);

	glVertex2f(-0.65f, 0.5f);
	glVertex2f(-0.6f, 0.5f);

	glVertex2f(-0.6f, 0.5f);
	glVertex2f(-0.6f, 0.0f);

	glVertex2f(-0.6f, 0.0f);
	glVertex2f(-0.65f, 0.0f);
	glEnd();


	//
	//        P
	//
	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(1.0f, 0.0f, 0.0f); // RED
	glVertex2f(-0.3f, 0.0f);
	glVertex2f(-0.35f, 0.0f);

	glVertex2f(-0.35f, 0.0f);
	glVertex2f(-0.35f, 0.5f);

	glVertex2f(-0.35f, 0.5f);
	glVertex2f(-0.3f, 0.5f);

	glVertex2f(-0.3f, 0.5f);
	glVertex2f(-0.3f, 0.0f);
	glEnd();


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(1.0f, 0.0f, 0.0f); // RED
	glVertex2f(-0.3f, 0.25f);
	glVertex2f(-0.3f, 0.5f);

	glVertex2f(-0.3f, 0.5f);
	glVertex2f(-0.2f, 0.5f);

	glVertex2f(-0.2f, 0.5f);
	glVertex2f(-0.1f, 0.45f);

	glVertex2f(-0.1f, 0.45f);
	glVertex2f(-0.1f, 0.35f);

	glVertex2f(-0.1f, 0.35f);
	glVertex2f(-0.2f, 0.25f);

	glVertex2f(-0.2f, 0.25f);
	glVertex2f(-0.3f, 0.25f);
	glEnd();


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(1.0f, 1.0f, 1.0f); // WHITE
	glVertex2f(-0.3f, 0.3f);
	glVertex2f(-0.22f, 0.3f);

	glVertex2f(-0.22f, 0.3f);
	glVertex2f(-0.15f, 0.36f);

	glVertex2f(-0.15f, 0.36f);
	glVertex2f(-0.15f, 0.42f);

	glVertex2f(-0.15f, 0.42f);
	glVertex2f(-0.22f, 0.45f);

	glVertex2f(-0.22f, 0.45f);
	glVertex2f(-0.3f, 0.45f);

	glVertex2f(-0.3f, 0.45f);
	glVertex2f(-0.3f, 0.3f);
	glEnd();



	//
	//         T
	//
	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(1.0f, 0.0f, 0.0f); // RED
	glVertex2f(0.05f, 0.0f);
	glVertex2f(0.05f, 0.45f);

	glVertex2f(0.05f, 0.45f);
	glVertex2f(0.1f, 0.45f);

	glVertex2f(0.1f, 0.45f);
	glVertex2f(0.1f, 0.0f);

	glVertex2f(0.1f, 0.0f);
	glVertex2f(0.05f, 0.0f);
	glEnd();


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(1.0f, 0.0f, 0.0f); // RED
	glVertex2f(-0.05f, 0.45f);
	glVertex2f(-0.05f, 0.5f);

	glVertex2f(-0.05f, 0.5f);
	glVertex2f(0.2f, 0.5f);

	glVertex2f(0.2f, 0.5f);
	glVertex2f(0.2f, 0.45f);

	glVertex2f(0.2f, 0.45f);
	glVertex2f(-0.05f, 0.45f);
	glEnd();


	//
	//     U
	//
	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(1.0f, 0.0f, 0.0f); // RED
	glVertex2f(0.3f, 0.0f);
	glVertex2f(0.25f, 0.15f);
	glVertex2f(0.25f, 0.5f);
	glVertex2f(0.3f, 0.5f);
	glVertex2f(0.3f, 0.15f);
	glVertex2f(0.35f, 0.05f);
	//glVertex2f(0.3f, 0.0f);
	glEnd();


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(1.0f, 0.0f, 0.0f); // RED
	glVertex2f(0.3f, 0.0f);
	glVertex2f(0.35f, 0.05f);
	glVertex2f(0.4f, 0.05f);
	glVertex2f(0.45f, 0.0f);
	glEnd();


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(1.0f, 0.0f, 0.0f); // RED
	glVertex2f(0.4f, 0.05f);
	glVertex2f(0.45f, 0.15f);
	glVertex2f(0.5f, 0.15f);
	glVertex2f(0.45f, 0.0f);
	glEnd();


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(1.0f, 0.0f, 0.0f); // RED
	glVertex2f(0.45f, 0.15f);
	glVertex2f(0.45f, 0.5f);
	glVertex2f(0.5f, 0.5f);
	glVertex2f(0.5f, 0.15f);
	glEnd();



	//
	//     N
	//
	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(1.0f, 0.0f, 0.0f); // RED
	glVertex2f(0.55f, 0.0f);
	glVertex2f(0.55f, 0.5f);
	glVertex2f(0.6f, 0.5f);
	glVertex2f(0.6f, 0.0f);
	glEnd();


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(1.0f, 0.0f, 0.0f); // RED
	glVertex2f(0.75f, 0.0f);
	glVertex2f(0.6f, 0.4f);
	glVertex2f(0.6f, 0.5f);
	glVertex2f(0.75f, 0.1f);
	glEnd();


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(1.0f, 0.0f, 0.0f); // RED
	glVertex2f(0.75f, 0.0f);
	glVertex2f(0.75f, 0.5f);
	glVertex2f(0.8f, 0.5f);
	glVertex2f(0.8f, 0.0f);
	glEnd();


	//
	//     E
	//
	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(1.0f, 0.0f, 0.0f); // RED
	glVertex2f(0.85f, 0.0f);
	glVertex2f(0.85f, 0.5f);
	glVertex2f(0.9f, 0.5f);
	glVertex2f(0.9f, 0.0f);
	glEnd();


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(1.0f, 0.0f, 0.0f); // RED
	glVertex2f(0.9f, 0.0f);
	glVertex2f(0.9f, 0.05f);
	glVertex2f(1.1f, 0.05f);
	glVertex2f(1.1f, 0.0f);
	glEnd();


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(1.0f, 0.0f, 0.0f); // RED
	glVertex2f(0.9f, 0.23f);
	glVertex2f(0.9f, 0.28f);
	glVertex2f(1.1f, 0.28f);
	glVertex2f(1.1f, 0.23f);
	glEnd();


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(1.0f, 0.0f, 0.0f); // RED
	glVertex2f(0.9f, 0.45f);
	glVertex2f(0.9f, 0.5f);
	glVertex2f(1.1f, 0.5f);
	glVertex2f(1.1f, 0.45f);
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
	gluOrtho2D(-1.5,1.5,-1,1);
	glutMainLoop();                 // Enter the event-processing loop
	return 0;
}
