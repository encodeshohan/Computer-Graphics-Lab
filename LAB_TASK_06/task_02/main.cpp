#include <GL/glut.h>
#include<math.h>
using namespace std;

// MD. SHOHANUR RAHMAN SHOHAN
//      22-46013-1

GLfloat position1 = 0.0f;
GLfloat position2 = 0.0f;
GLfloat position3 = 0.0f;
GLfloat position4 = 0.0f;
GLfloat speed = 0.05f;

void dis();
void display1();

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


void update1(int value) {

    if(position1 > 1.3)
        position1 = 0.0f;

    position1 += speed;

    glutPostRedisplay();

    glutTimerFunc(20,update1,0.0);
}

void update2(int value) {

    if(position2 > 1.3)
        position2 = 0.0f;

    position2 += speed;

    glutPostRedisplay();

    glutTimerFunc(20,update2,0.0);
}

void update3(int value) {

    if(position3 >1.3)
        position3 =0.0f;

    position3 += speed;

    glutPostRedisplay();

    glutTimerFunc(1500,update3,0);
}

void update4(int value) {

    if(position4 < -1.3)
        position4 = 0.0f;

    position4 -= speed;

    glutPostRedisplay();

    glutTimerFunc(20,update4,0);
}

void init()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
}


void disback(int val)
{
    glutDisplayFunc(display1);
}
void display7()
{
    //CIRCLE
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glPushMatrix();
    circle(0.2,0.0,0.0,1.0,0.0,0.0); //   RED
    glPopMatrix();
    glutTimerFunc(1500,disback,0);
    glFlush();
}

void display6(int val)
{
 glutDisplayFunc(display7);
}

void display5()
{
    //RECTANGLE
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 1.0f);        //BLUE
    glVertex2f(-0.2f, -0.1f);
    glVertex2f( 0.2f, -0.1f);
    glVertex2f( 0.2f,  0.1f);
    glVertex2f(-0.2f,  0.1f);
    glEnd();
    glPopMatrix();
    glutTimerFunc(1500,display6,0);
    glFlush();
}

void display4(int val)
{
 glutDisplayFunc(display5);
}

void display3()
{
    // SQUARE
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 1.0f, 0.0f);    // GREEN
    glVertex2f(-0.2f, -0.2f);
    glVertex2f( 0.2f, -0.2f);
    glVertex2f( 0.2f,  0.2f);
    glVertex2f(-0.2f,  0.2f);
    glEnd();
    glPopMatrix();
    glutTimerFunc(1500,display4,0);
    glFlush();
}

void display2(int val)
{
    glutDisplayFunc(display3);
}

void display1()
{
    // HEXAGONE
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 0.0f); //YELLOW
    glVertex2f(0.2f,0.0f);
    glVertex2f(0.1f, 0.2f);
    glVertex2f(-0.1f, 0.2f);
    glVertex2f(-0.2f, 0.0f);
    glVertex2f(-0.1f, -0.2f);
    glVertex2f(0.1f, -0.2f);
    glEnd();

    glPopMatrix();

    glutTimerFunc(1500,display2,0);
    glFlush();

}

void dis()
{
       glutDisplayFunc(display1);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(850, 600);
    glutInitWindowPosition(50, 50);
    glutCreateWindow("4 Objects Calling");
    glutDisplayFunc(dis);
    init();
    glutTimerFunc(20, update1, 0);
    glutTimerFunc(20, update2, 0);
    glutTimerFunc(20, update3, 0);
    glutTimerFunc(20, update4, 0);
    glutMainLoop();
    return 0;
}
