#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include <math.h>

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */

//   22-46013-1
//   MD. SHOHANUR RAHMAN SHOHAN


void circle(float radius, float xc, float yc, float r, float g, float b)
{
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(r,g,b);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=radius;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+xc,y+yc);
        }
	glEnd();
}
void display() {
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
	glLineWidth(1);

//  ################################
//  ##                            ##
//  ##            S K Y           ##
//  ##                            ##
//  ################################
	glBegin(GL_POLYGON);
	glColor3f(0.5607,0.7412,0.8902);
	glVertex2f(-60.0f, -5.0f);
	glVertex2f(-60.0, 60.0f);
	glVertex2f(95.0f, 60.0f);
	glVertex2f(95.0f, -5.0f);
	glEnd();

//  ################################
//  ##                            ##
//  ##          R O A D           ##
//  ##                            ##
//  ################################
	glBegin(GL_POLYGON);
	glColor3f(0.35f,0.35f,0.35f);
	glVertex2f(-60.0f, -30.0f);
	glVertex2f(-60.0, -5.0f);
	glVertex2f(95.0f, -5.0f);
	glVertex2f(95.0f, -30.0f);
	glEnd();

//  ################################
//  ##                            ##
//  ##         MOUNTAIN           ##
//  ##                            ##
//  ################################

	glBegin(GL_POLYGON);
	glColor3f(0.01f,0.2,0.13f);
	glVertex2f(-60.0f, -5.0f);
	glVertex2f(-60.0, 20.0f);
	glVertex2f(-50.0f, 30.0f);
	glVertex2f(-20.0f, -5.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.01f,0.2,0.13f);
	glVertex2f(-50.0f, -5.0f);
	glVertex2f(-20.0, 40.0f);
	glVertex2f(80.0f, -5.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.01f,0.2,0.13f);
	glVertex2f(-20.0f, -5.0f);
	glVertex2f(30.0, 40.0f);
	glVertex2f(95.0f, -5.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.01f,0.2,0.13f);
	glVertex2f(35.0f, -5.0f);
	glVertex2f(95.0, 40.0f);
	glVertex2f(95.0f, -5.0f);
	glEnd();


//  ################################
//  ##                            ##
//  ##        TRAFFIC LIGHT       ##
//  ##                            ##
//  ################################

	glBegin(GL_POLYGON);
	glColor3f(0.0f,0.0,0.0f);
	glVertex2f(-25.0f, -5.0f);
	glVertex2f(-27.0, -5.0f);
	glVertex2f(-27.0f, 15.0f);
	glVertex2f(-25.0f, 15.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.3f,0.3f,0.3f);
	glVertex2f(-23.0f, 15.0f);
	glVertex2f(-29.0, 15.0f);
	glVertex2f(-29.0f, 27.0f);
	glVertex2f(-23.0f, 27.0f);
	glEnd();

	circle(1.22947, -26.0, 24.0, 1.0,0.0,0.0);  //RED
	circle(1.22947, -26.0, 20.8, 1.0,1.0,0.0);  //YELLOW
	circle(1.22947, -26.0, 17.7, 0.0,1.0,0.0);  //YELLOW

//  ################################
//  ##                            ##
//  ##       ZEBRA CROSSING       ##
//  ##                            ##
//  ################################

    glBegin(GL_POLYGON);
	glColor3f(1.0f,1.0,1.0f);
	glVertex2f(-30.0f, -6.0f);
	glVertex2f(-44.0, -6.0f);
	glVertex2f(-44.0f, -5.0f);
	glVertex2f(-30.0f, -5.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1.0f,1.0,1.0f);
	glVertex2f(-30.0f, -10.0f);
	glVertex2f(-44.0, -10.0f);
	glVertex2f(-44.0f, -8.0f);
	glVertex2f(-30.0f, -8.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1.0f,1.0,1.0f);
	glVertex2f(-30.0f, -14.0f);
	glVertex2f(-44.0, -14.0f);
	glVertex2f(-44.0f, -12.0f);
	glVertex2f(-30.0f, -12.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1.0f,1.0,1.0f);
	glVertex2f(-30.0f, -18.0f);
	glVertex2f(-44.0, -18.0f);
	glVertex2f(-44.0f, -16.0f);
	glVertex2f(-30.0f, -16.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1.0f,1.0,1.0f);
	glVertex2f(-30.0f, -22.0f);
	glVertex2f(-44.0, -22.0f);
	glVertex2f(-44.0f, -20.0f);
	glVertex2f(-30.0f, -20.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1.0f,1.0,1.0f);
	glVertex2f(-30.0f, -26.0f);
	glVertex2f(-44.0, -26.0f);
	glVertex2f(-44.0f, -24.0f);
	glVertex2f(-30.0f, -24.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1.0f,1.0,1.0f);
	glVertex2f(-30.0f, -30.0f);
	glVertex2f(-44.0, -30.0f);
	glVertex2f(-44.0f, -28.0f);
	glVertex2f(-30.0f, -28.0f);
	glEnd();

//  ################################
//  ##                            ##
//  ##           C A R            ##
//  ##                            ##
//  ################################

    //BODY
    glBegin(GL_POLYGON);
	glColor3f(0.8f,0.8,0.0f);
	glVertex2f(50.0f, -10.0f);
	glVertex2f(0.0, -10.0f);
	glVertex2f(-8.0f, -8.0f);
	glVertex2f(-8.0f, -2.0f);
	glVertex2f(6.0f, 0.0f);
	glVertex2f(12.0f, 8.0f);
	glVertex2f(34.0f, 8.0f);
	glVertex2f(38.0f, 0.0f);
	glVertex2f(50.0f, 0.0f);
	glVertex2f(50.0f, -10.0f);
	glEnd();

	// Window
	glBegin(GL_POLYGON);
	glColor3f(0.5f,1.0,1.0f);
	glVertex2f(21.3f, 0.0f);
	glVertex2f(7.4f, 0.0f);
	glVertex2f(12.8f, 7.0f);
	glVertex2f(21.3f, 7.0f);
	glEnd();

	// Window
	glBegin(GL_POLYGON);
	glColor3f(0.5f,1.0,1.0f);
	glVertex2f(36.5f, 0.0f);
	glVertex2f(22.3f, 0.0f);
	glVertex2f(22.3f, 7.0f);
	glVertex2f(32.2f, 7.0f);
	glEnd();

	circle(4.24264, 8.0, -10.0, 0.35,0.35,0.35);  // WHEEL
	circle(3.62243, 8.0, -10.0, 0.0,0.0,0.0);  // WHEEL
	circle(4.24264, 38.0, -10.0, 0.35,0.35,0.35);  // WHEEL
	circle(3.62243, 38.0, -10.0, 0.0,0.0,0.0);  // WHEEL




	glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutInitWindowSize(920, 520);// Set the window's initial width & height
	glutCreateWindow("OpenGL Setup Test");
	//gluOrtho2D(-0.1,0.7,-0.1,0.3); // Create a window with the given title
	//glutInitWindowSize(320, 320);// Set the window's initial width & height
	glutDisplayFunc(display);// Register display callback handler for window re-paint
	gluOrtho2D(-60,95,-30,60);
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
