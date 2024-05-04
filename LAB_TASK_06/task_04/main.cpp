#include <GL/glut.h>
#include<math.h>
using namespace std;

// MD. SHOHANUR RAHMAN SHOHAN
//      22-46013-1

float squareY = 0.0f;
float hexagonX = 0.0f;
float circleY = 0.0f;
float rectangleX = 0.0f;

void circle(float radius, float xc, float yc, float r, float g, float b)
{
    glBegin(GL_POLYGON);
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
    // RECTANGLE
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0f, 0.0f, 1.0f);
    glBegin(GL_POLYGON);
    glVertex2f(rectangleX + 0.4f, -0.2f);
    glVertex2f(rectangleX + 1.0f, -0.2f);
    glVertex2f(rectangleX + 1.0f, 0.2f);
    glVertex2f(rectangleX + 0.4f, 0.2f);
    glEnd();


    // CIRCLE
    circle(0.2,0.0,circleY-0.6,1.0,0.0,0.0);


    // HEXAGON
    glColor3f(1.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(hexagonX -0.8f, -0.2f);
    glVertex2f(hexagonX -0.6, -0.2f);
    glVertex2f(hexagonX -0.5f, 0.0f);
    glVertex2f(hexagonX -0.6f, 0.2f);
    glVertex2f(hexagonX -0.8f, 0.2f);
    glVertex2f(hexagonX -0.9f, 0.0f);
    glVertex2f(hexagonX -0.8f, -0.2f);
    glEnd();

    // SQUARE
    glColor3f(0.0f, 1.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(-0.2f, squareY + 0.4f);
    glVertex2f(0.2f, squareY + 0.4f);
    glVertex2f(0.2f, squareY + 0.8f);
    glVertex2f(-0.2f, squareY + 0.8f);
    glEnd();
    glutSwapBuffers();
}

void handleKeyPress(unsigned char key, int x, int y) {
    switch (key) {
        case 'a': // Move to left
            hexagonX -= 0.1f;
            break;
        case 'd': // Move to right
            rectangleX += 0.1f;
            break;
        case 'w': // upward
            squareY += 0.1f;
            break;
        case 's': //downward
            circleY -= 0.1f;
            break;
    }

    glutPostRedisplay();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(850, 600);
    glutCreateWindow("4 Objects Moving by Keyboard");
    glutDisplayFunc(display);
    glutKeyboardFunc(handleKeyPress);
    gluOrtho2D(-2,2,-2,2);
    glutMainLoop();
    return 0;

}
