#include <GL/glut.h>
#include<math.h>
using namespace std;

// MD. SHOHANUR RAHMAN SHOHAN
//      22-46013-1

GLfloat position = 0.0f;
GLfloat position1 = 0.0f;
GLfloat speed = 0.1f;

void dis();
void display1();

void update(int value)
{

        if(position <-1.5)
            position = 1.0f;

        position -= speed;

    glutPostRedisplay();


    glutTimerFunc(1500,update,0);
}


void update1(int value)
{

    if(position1 >1.0)
        position1 = -1.0f;

        position1 += speed;

    glutPostRedisplay();


    glutTimerFunc(1500,update1,0);
}

void init()
{
   glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
}

void disback(int val)
{
    glutDisplayFunc(display1);
}


void display3()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(0.0f, 1.0f, 0.0f, 1.0f);
    glutTimerFunc(1500,disback,0);
    glFlush();
}
void display2(int val)
{
    glutDisplayFunc(display3);
}
void display1()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(1.0f, 0.0f, 0.0f, 1.0f);

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
    glutCreateWindow("Display change");
    glutDisplayFunc(dis);
    init();
    glutTimerFunc(20, update, 0);
    glutTimerFunc(20, update1, 0);
    glutMainLoop();
    return 0;
}
