#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include <math.h>

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display() {
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
	glLineWidth(7.5);


	// Green
    glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.0f, .6f, 0.0f); // Yellow
	glVertex2f(-0.8f, -0.5f);
	glVertex2f(0.8f, -0.5f);

	glVertex2f(0.8f, -0.5f);
	glVertex2f(0.8f, 0.5f);

	glVertex2f(0.8f, 0.5f);
	glVertex2f(-0.8, 0.5f);

	glVertex2f(-0.8f, 0.5f);
	glVertex2f(-0.8f, -0.5f);

	glEnd();


    // Green
    glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(1.0f, 1.0f, 0.0f); // Yellow
	glVertex2f(-0.6f, 0.0f);
	glVertex2f(0.0f, -0.4f);

	glVertex2f(0.0f, -0.4f);
	glVertex2f(0.6f, 0.0f);

	glVertex2f(0.6f, 0.0f);
	glVertex2f(0.0f, 0.4f);

	glVertex2f(0.0f, 0.4f);
	glVertex2f(-0.6f, 0.0f);

	glEnd();



	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(0,0.3,1.0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.25;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }

    //glVertex2f(0.3f,0.4f);
    //glVertex2f(0.1f,0.4f);

	glEnd();

	glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutCreateWindow("OpenGL Setup Test");
	//gluOrtho2D(-0.1,0.7,-0.1,0.3); // Create a window with the given title
	glutInitWindowSize(320, 320);// Set the window's initial width & height
	glutDisplayFunc(display);// Register display callback handler for window re-paint
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
