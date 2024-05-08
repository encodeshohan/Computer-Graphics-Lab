#include <iostream>
#include <GL/gl.h>
#include <GL/glut.h>
#include <windows.h>
#include <math.h>

using namespace std;

float _angle1 = 0.0f;
float _move = 0.0f;
float zoomFactor = 1.0f; // Initial zoom factor
bool zoomIn = true; // Ccontrol zoom in/out direction

void circle(float radius, float xc, float yc, float r, float g, float b) {
    glBegin(GL_POLYGON);
    for(int i=0;i<200;i++) {
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

void sky() {
    glBegin(GL_POLYGON);
    glColor3f(0.5607,0.7412,0.8902);
    glVertex2f(-60.0f, -5.0f);
    glVertex2f(-60.0, 60.0f);
    glVertex2f(95.0f, 60.0f);
    glVertex2f(95.0f, -5.0f);
    glEnd();
}

void road() {
    glBegin(GL_POLYGON);
    glColor3f(0.35f,0.35f,0.35f);
    glVertex2f(-60.0f, -30.0f);
    glVertex2f(-60.0, -5.0f);
    glVertex2f(95.0f, -5.0f);
    glVertex2f(95.0f, -30.0f);
    glEnd();
}

void mountain() {
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
}

void car() {
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(_move, 0.0f, 0.0f);
    glScalef(zoomFactor, zoomFactor, 1.0f); // Apply zoom factor to the car
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

    glBegin(GL_POLYGON);
    glColor3f(0.5f,1.0,1.0f);
    glVertex2f(21.3f, 0.0f);
    glVertex2f(7.4f, 0.0f);
    glVertex2f(12.8f, 7.0f);
    glVertex2f(21.3f, 7.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.5f,1.0,1.0f);
    glVertex2f(36.5f, 0.0f);
    glVertex2f(22.3f, 0.0f);
    glVertex2f(22.3f, 7.0f);
    glVertex2f(32.2f, 7.0f);
    glEnd();
    glPopMatrix();

    // Draw wheels with scaling applied
    glPushMatrix();
    glTranslatef(_move, 0.0f, 0.0f);
    glScalef(zoomFactor, zoomFactor, 1.0f); // Apply the same zoom factor to the wheels
    glPushMatrix();
    glTranslatef(8.0,-10.0,0.0);
    glRotatef(_angle1, 0.0f, 0.0f,1.0f);
    glTranslatef(-8.0,10.0,0.0);
    circle(4.24264, 8.0, -10.0, 0.35,0.35,0.35);
    circle(3.62243, 8.0, -10.0, 0.0,0.0,0.0);
    circle(0.55, 8.0, -8.0, 1.0,0.0,0.0);
    circle(0.55, 8.0, -12.0, 1.0,0.0,0.0);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(38.0,-10.0,0.0);
    glRotatef(_angle1, 0.0f, 0.0f,1.0f);
    glTranslatef(-38.0,10.0,0.0);
    circle(4.24264, 38.0, -10.0, 0.35,0.35,0.35);
    circle(3.62243, 38.0, -10.0, 0.0,0.0,0.0);
    circle(0.55, 38.0, -8.0, 1.0,0.0,0.0);
    circle(0.55, 38.0, -12.0, 1.0,0.0,0.0);
    glPopMatrix();

    glPopMatrix();
}

void update(int value) {
    _move += 1.0;
    if(_move > 95.0) {
        _move = -90.0;
    }

    _angle1-=2.0f;
    if(_angle1 > 360.0) {
        _angle1-=360;
    }

    // Dynamic zooming
    if (zoomIn) {
        zoomFactor += 0.01f;
        if (zoomFactor >= 2.0f) {
            zoomIn = false;
        }
    } else {
        zoomFactor -= 0.01f;
        if (zoomFactor <= 0.5f) {
            zoomIn = true;
        }
    }

    glutPostRedisplay(); // Notify GLUT that the display has changed
    glutTimerFunc(20, update, 0); // Notify GLUT to call update again in 20 milliseconds
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glColor3d(1,0,0);
    sky();
    mountain();
    road();
    car();
    glFlush();  // Render now
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(920, 520);
    glutCreateWindow("Moving Car with Zoom");
    glutDisplayFunc(display);
    gluOrtho2D(-60,95,-30,60);
    glutTimerFunc(20, update, 0); // Add a timer
    glutMainLoop();
    return 0;
}
