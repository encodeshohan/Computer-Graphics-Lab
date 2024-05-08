#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include "glutil.h"
#include<iostream>
using  namespace std;

//   22-46013-1
//   MD. SHOHANUR RAHMAN SHOHAN


int a = 1;

void next_text(int value){
a++;
glutPostRedisplay();
glutTimerFunc(200, next_text, 0);

}
void display() {
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to white
    glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer

    // Draw background rectangle
    glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex2f(0, -6);
    glVertex2f(26, -6);
    glVertex2f(26, 10);
    glVertex2f(0, 10);
    glEnd();

    // Apply texture
    ApplyTexture(0, -6, 26, -6, 26, 10, 0, 10, textures[0].textureID);

    // Define variables for text rendering
    float lineHeight = 0.6; // Adjust this value as needed for spacing between lines
    float startY = 8.99;   // Starting y-coordinate for text

    // Render text
    if (a > 5)
        staticText("Twinkle, twinkle, little star,", 9, startY, .004, 1, 0, 0, 0);

    if (a > 10)
        staticText("How I wonder what you are!", 9, startY - 2*lineHeight, .004, 1, 0, 0, 0);

    if (a > 15)
        staticText("Up above the world so high,", 9, startY -  4* lineHeight, .004, 1, 0, 0, 0);

    if (a > 20)
        staticText("Like a diamond in the sky.", 9, startY - 6 * lineHeight, .004, 1, 0, 0, 0);

    if (a > 25)
        staticText("Twinkle, twinkle, little star,", 9, startY - 8 * lineHeight, .004, 1, 0, 0, 0);

    if (a > 30)
        staticText("How I wonder what you are!", 9, startY - 9 * lineHeight, .004, 1, 0, 0, 0);

    // Swap buffers and flush
    glutSwapBuffers();
    glFlush();
}




/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	//glutInitWindowSize(920, 720);   // Set the window's initial width & height
	glutInitWindowSize(920, 520);   // Set the window's initial width & height
	glutCreateWindow("OpenGL Setup Test"); // Create a window with the given title
	loadImageAndStore("C://AIUB One Drive//OneDrive - American International University-Bangladesh//Desktop//15_APRIL_Graphics_Lab//Image_and_Text//image.bmp");
	glutDisplayFunc(display); // Register display callback handler for window re-paint
	gluOrtho2D(-2, 28, -8, 12);
	//gluOrtho2D(0, 50, 0, 50);
	//glutTimerFunc(0, mT_update, 0);
	glutTimerFunc(200, next_text, 0);
	glutTimerFunc(_tDelay, _keyboard_timer, 0);
	//glutTimerFunc(_tDelay, _keyboard_timer, 1);
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
