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
	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.0f, 0.0f, 0.0f); //BLACK
	glVertex2f(0.0f, -30.0f);
	glVertex2f(-2.1f, -24.8f);
	glVertex2f(2.1f, -24.8f);
	glEnd();


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.0f, 0.0f, 0.0f); //BLACK
	glVertex2f(-2.1f, -24.8f);
	glVertex2f(-5.1f, -20.1f);
	glVertex2f(5.1f, -20.1f);
	glVertex2f(2.1f, -24.8f);
	glEnd();


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.0f, 0.0f, 0.0f); //BLACK
	glVertex2f(-5.1f, -20.1f);
	glVertex2f(-10.1f, -15.1f);
	glVertex2f(10.1f, -15.1f);
	glVertex2f(5.1f, -20.1f);
	glEnd();


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.0f, 0.0f, 0.0f); //BLACK
	glVertex2f(-10.1f, -15.1f);
	glVertex2f(-15.1f, -12.0f);
	glVertex2f(-15.1f, -12.0f);
	glVertex2f(15.1f, -12.0f);
	glVertex2f(10.1f, -15.1f);
	glEnd();


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.0f, 0.0f, 0.0f); //BLACK
	glVertex2f(-15.1f, -12.0f);
	glVertex2f(-20.0f, -10.0f);
	glVertex2f(20.0f, -10.0f);
	glVertex2f(15.1f, -12.0f);
	glEnd();


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.0f, 0.0f, 0.0f); //BLACK
	glVertex2f(-20.0f, -10.0f);
	glVertex2f(-24.9f, -9.3f);
	glVertex2f(24.9f, -9.3f);
	glVertex2f(20.0f, -10.0f);
	glEnd();


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.0f, 0.0f, 0.0f); //BLACK
	glVertex2f(-34.0f, -10.0f);
	glVertex2f(-28.0f, -6.0f);
	glVertex2f(-33.0f, -9.8f);
	glEnd();


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.0f, 0.0f, 0.0f); //BLACK
	glVertex2f(-33.0f, -9.8f);
	glVertex2f(-28.0f, -6.0f);
	glVertex2f(-32.0f, -9.6f);
	glEnd();


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.0f, 0.0f, 0.0f); //BLACK
	glVertex2f(-32.0f, -9.6f);
	glVertex2f(-28.0f, -6.0f);
	glVertex2f(-31.0f, -9.4f);
	glEnd();


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.0f, 0.0f, 0.0f); //BLACK
	glVertex2f(-31.0f, -9.4f);
	glVertex2f(-28.0f, -6.0f);
	glVertex2f(-24.9f, -9.3f);
	glEnd();


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.0f, 0.0f, 0.0f); //BLACK
	glVertex2f(-24.9f, -9.3f);
	glVertex2f(-28.0f, -6.0f);
	glVertex2f(-28.0f, -6.0f);
	glVertex2f(28.0f, -6.0f);
	glVertex2f(24.9f, -9.3f);
	glEnd();


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.0f, 0.0f, 0.0f); //BLACK
	glVertex2f(24.9f, -9.3f);
	glVertex2f(28.0f, -6.0f);
	glVertex2f(31.0f, -9.4f);
	glEnd();


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.0f, 0.0f, 0.0f); //BLACK
	glVertex2f(31.0f, -9.4f);
	glVertex2f(28.0f, -6.0f);
	glVertex2f(32.0f, -9.6f);
	glEnd();


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.0f, 0.0f, 0.0f); //BLACK
	glVertex2f(32.0f, -9.6f);
	glVertex2f(28.0f, -6.0f);
	glVertex2f(33.0f, -9.8f);
	glEnd();


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.0f, 0.0f, 0.0f); //BLACK
	glVertex2f(33.0f, -9.8f);
	glVertex2f(28.0f, -6.0f);
	glVertex2f(34.0f, -10.0f);
	glEnd();


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.0f, 0.0f, 0.0f); //BLACK
	glVertex2f(-28.0f, -6.0f);
	glVertex2f(-25.0f, 0.0f);
	glVertex2f(25.0f, 0.0f);
	glVertex2f(28.0f, -6.0f);
	glEnd();


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.0f, 0.0f, 0.0f); //BLACK
	glVertex2f(-34.0f, 10.0f);
	glVertex2f(-40.0f, 12.0f);
	glVertex2f(-14.0f, 12.0f);
	glEnd();


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.0f, 0.0f, 0.0f); //BLACK
	glVertex2f(-28.0f, 6.0f);
	glVertex2f(-34.0f, 10.0f);
	glVertex2f(-14.0f, 12.0f);
	glEnd();


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.0f, 0.0f, 0.0f); //BLACK
	glVertex2f(-25.0f, 0.0f);
	glVertex2f(-28.0f, 6.0f);
	glVertex2f(-14.0f, 12.0f);
	glVertex2f(-10.0f, 3.0f);
	glEnd();


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.0f, 0.0f, 0.0f); //BLACK
	glVertex2f(-25.0f, 0.0f);
	glVertex2f(-10.0f, 3.0f);
	glVertex2f(-10.0f, 0.0f);
	glEnd();


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.0f, 0.0f, 0.0f); //BLACK
	glVertex2f(-10.0f, 0.0f);
	glVertex2f(-10.0f, 3.0f);
	glVertex2f(-8.0f, 2.0f);
	glVertex2f(-8.0f, 0.0f);
	glEnd();


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.0f, 0.0f, 0.0f); //BLACK
	glVertex2f(-8.0f, 0.0f);
	glVertex2f(-8.0f, 2.0f);
	glVertex2f(-6.0f, 2.0f);
	glVertex2f(-6.0f, 0.0f);
	glEnd();


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.0f, 0.0f, 0.0f); //BLACK
	glVertex2f(-6.0f, 0.0f);
	glVertex2f(-6.0f, 2.0f);
	glVertex2f(-5.0f, 3.0f);
	glVertex2f(-3.0f, 3.0f);
	glVertex2f(-3.0f, 0.0f);
	glEnd();


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.0f, 0.0f, 0.0f); //BLACK
	glVertex2f(-5.0f, 3.0f);
	glVertex2f(-4.0f, 8.0f);
	glVertex2f(-3.0f, 3.0f);
	glEnd();


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.0f, 0.0f, 0.0f); //BLACK
	glVertex2f(-3.0f, 0.0f);
	glVertex2f(-3.0f, 3.0f);
	glVertex2f(0.0f, 4.0f);
	glVertex2f(3.0f, 3.0f);
	glVertex2f(3.0f, 0.0f);
	glEnd();


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.0f, 0.0f, 0.0f); //BLACK
	glVertex2f(5.0f, 3.0f);
	glVertex2f(4.0f, 8.0f);
	glVertex2f(3.0f, 3.0f);
	glEnd();


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.0f, 0.0f, 0.0f); //BLACK
	glVertex2f(6.0f, 0.0f);
	glVertex2f(6.0f, 2.0f);
	glVertex2f(5.0f, 3.0f);
	glVertex2f(3.0f, 3.0f);
	glVertex2f(3.0f, 0.0f);
	glEnd();


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.0f, 0.0f, 0.0f); //BLACK
	glVertex2f(8.0f, 0.0f);
	glVertex2f(8.0f, 2.0f);
	glVertex2f(6.0f, 2.0f);
	glVertex2f(6.0f, 0.0f);
	glEnd();


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.0f, 0.0f, 0.0f); //BLACK
	glVertex2f(10.0f, 0.0f);
	glVertex2f(10.0f, 3.0f);
	glVertex2f(8.0f, 2.0f);
	glVertex2f(8.0f, 0.0f);
	glEnd();


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.0f, 0.0f, 0.0f); //BLACK
	glVertex2f(25.0f, 0.0f);
	glVertex2f(10.0f, 3.0f);
	glVertex2f(10.0f, 0.0f);
	glEnd();


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.0f, 0.0f, 0.0f); //BLACK
	glVertex2f(25.0f, 0.0f);
	glVertex2f(28.0f, 6.0f);
	glVertex2f(14.0f, 12.0f);
	glVertex2f(10.0f, 3.0f);
	glEnd();


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.0f, 0.0f, 0.0f); //BLACK
	glVertex2f(28.0f, 6.0f);
	glVertex2f(34.0f, 10.0f);
	glVertex2f(14.0f, 12.0f);
	glEnd();


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.0f, 0.0f, 0.0f); //BLACK
	glVertex2f(34.0f, 10.0f);
	glVertex2f(40.0f, 12.0f);
	glVertex2f(14.0f, 12.0f);
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
	gluOrtho2D(-45,45,-45,30);
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
