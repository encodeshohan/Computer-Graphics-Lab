#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include <math.h>
using namespace std;

//   22-46013-1
//   MD. SHOHANUR RAHMAN SHOHAN


int max_lava_ground = 1;
float scale = 1;
int state = 1;

float _move = 1;
float _movey = 0;

void hill_lava01()
{
    glColor3f(0.839, 0.529, 0.157);
    glBegin(GL_POLYGON);
    glVertex2f(-140, 0);
    glVertex2f(-90, 50);
    glVertex2f(-80, 48);
    glVertex2f(-70, 50);
    glVertex2f(-20, 00);
    glEnd();

    glLineWidth(4.5);
    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2f(-140, 0);
    glVertex2f(-90, 50);
    glVertex2f(-90, 50);
    glVertex2f(-80, 48);
    glVertex2f(-80, 48);
    glVertex2f(-70, 50);
    glVertex2f(-70, 50);
    glVertex2f(-20, 00);
    glEnd();
}

void hill_lava02()
{
    glColor3f(0.839, 0.529, 0.157);
    glBegin(GL_POLYGON);

    glVertex2f(-140, 0);
    glVertex2f(-90, 50);
    glVertex2f(-80, 48);
    glVertex2f(-70, 50);
    glVertex2f(-20, 00);

    glEnd();

    glLineWidth(4.5);
    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2f(-140, 0);
    glVertex2f(-90, 50);
    glVertex2f(-90, 50);
    glVertex2f(-80, 48);
    glVertex2f(-80, 48);
    glVertex2f(-70, 50);
    glVertex2f(-70, 50);
    glVertex2f(-20, 00);
    glEnd();

    //lava
    glPushMatrix();

    glScalef(1, scale, 1);
    glColor3f(1, 0, 0);
    glBegin(GL_POLYGON);

    glVertex2f(-80, 48);
    glVertex2f(-90, 50);
    glVertex2f(-100, 40);
    glVertex2f(-95, 35);
    glVertex2f(-90, 40);
    glVertex2f(-85, 35);
    glVertex2f(-80, 40);
    glVertex2f(-75, 35);
    glVertex2f(-70, 40);
    glVertex2f(-65, 35);
    glVertex2f(-60, 40);
    glVertex2f(-70, 50);

    glEnd();
}


void hill_lava03()
{
    glColor3f(0.839, 0.529, 0.157);
    glBegin(GL_POLYGON);
    glVertex2f(-140, 0);
    glVertex2f(-90, 50);
    glVertex2f(-80, 48);
    glVertex2f(-70, 50);
    glVertex2f(-20, 00);
    glEnd();

    glLineWidth(4.5);
    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2f(-140, 0);
    glVertex2f(-90, 50);
    glVertex2f(-90, 50);
    glVertex2f(-80, 48);
    glVertex2f(-80, 48);
    glVertex2f(-70, 50);
    glVertex2f(-70, 50);
    glVertex2f(-20, 00);
    glEnd();

    //lava

    glPushMatrix();
    glScalef(1, _move, 1);
    glColor3f(1, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(-80, 48);
    glVertex2f(-90, 50);
    glVertex2f(-110, 30);
    glVertex2f(-105, 25);
    glVertex2f(-100, 30);
    glVertex2f(-95, 25);
    glVertex2f(-90, 30);
    glVertex2f(-85, 25);
    glVertex2f(-80, 30);
    glVertex2f(-75, 25);
    glVertex2f(-70, 30);
    glVertex2f(-65, 25);
    glVertex2f(-60, 30);
    glVertex2f(-55, 25);
    glVertex2f(-50, 30);
    glVertex2f(-70, 50);
    glEnd();
    glPopMatrix();
}


void hill_lava04()
{
    glColor3f(0.839, 0.529, 0.157);
    glBegin(GL_POLYGON);
    glVertex2f(-140, 0);
    glVertex2f(-90, 50);
    glVertex2f(-80, 48);
    glVertex2f(-70, 50);
    glVertex2f(-20, 00);
    glEnd();

    glLineWidth(4.5);
    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2f(-140, 0);
    glVertex2f(-90, 50);
    glVertex2f(-90, 50);
    glVertex2f(-80, 48);
    glVertex2f(-80, 48);
    glVertex2f(-70, 50);
    glVertex2f(-70, 50);
    glVertex2f(-20, 00);
    glEnd();

    //lava
    glPushMatrix();

    glScalef(1, scale, 1);
    glColor3f(1, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(-80, 48);
    glVertex2f(-90, 50);
    glVertex2f(-110, 30);
    glVertex2f(-125, 10);
    glVertex2f(-108, 22);
    glVertex2f(-110, 10);
    glVertex2f(-100, 22);
    glVertex2f(-95, 10);
    glVertex2f(-90, 26);
    glVertex2f(-85, 10);
    glVertex2f(-80, 25);
    glVertex2f(-75, 10);
    glVertex2f(-70, 25);
    glVertex2f(-65, 10);
    glVertex2f(-60, 25);
    glVertex2f(-50, 10);
    glVertex2f(-50, 25);
    glVertex2f(-40, 10);
    glVertex2f(-40, 20);
    glVertex2f(-70, 50);
    glEnd();

    glPopMatrix();
}


void hill_lava05()
{
    glColor3f(0.839, 0.529, 0.157);
    glBegin(GL_POLYGON);

    glVertex2f(-140, 0);
    glVertex2f(-90, 50);
    glVertex2f(-80, 48);
    glVertex2f(-70, 50);
    glVertex2f(-20, 00);

    glEnd();

    glLineWidth(4.5);
    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2f(-140, 0);
    glVertex2f(-90, 50);
    glVertex2f(-90, 50);
    glVertex2f(-80, 48);
    glVertex2f(-80, 48);
    glVertex2f(-70, 50);
    glVertex2f(-70, 50);
    glVertex2f(-20, 00);
    glEnd();

    //lava
    glPushMatrix();

    glScalef(1, scale, 1);
    glColor3f(1, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(-80, 48);
    glVertex2f(-90, 50);
    glVertex2f(-130, 10);
    glVertex2f(-126, 2);
    glVertex2f(-122, 10);
    glVertex2f(-118, 2);
    glVertex2f(-116, 12);
    glVertex2f(-111, 3);
    glVertex2f(-105, 13);
    glVertex2f(-98, 2);
    glVertex2f(-90, 12);
    glVertex2f(-86, 2);
    glVertex2f(-80, 16);
    glVertex2f(-74, 2);
    glVertex2f(-70, 16);
    glVertex2f(-62, 2);
    glVertex2f(-58, 16);
    glVertex2f(-50, 2);
    glVertex2f(-46, 16);
    glVertex2f(-38, 2);
    glVertex2f(-32, 12);
    glVertex2f(-70, 50);
    glEnd();

    glPopMatrix();
}


void hill_lava06()
{
    glColor3f(1,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(-140, 0);
    glVertex2f(-90, 50);
    glVertex2f(-80, 48);
    glVertex2f(-70, 50);
    glVertex2f(-20, 00);
    glEnd();

    glLineWidth(4.5);
    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2f(-140, 0);
    glVertex2f(-90, 50);
    glVertex2f(-90, 50);
    glVertex2f(-80, 48);
    glVertex2f(-80, 48);
    glVertex2f(-70, 50);
    glVertex2f(-70, 50);
    glVertex2f(-20, 00);
    glEnd();
}

void lava_ground01()
{
    glColor3f(1,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(-112, -6);
    glVertex2f(-20.9157, -7.1699);
    glVertex2f(-37, -3);
    glVertex2f(-20, 0);
    glVertex2f(-140, 0);
    glEnd();
}

void lava_ground02()
{
    glColor3f(1,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(-112, -6);
    glVertex2f(-124, -10);
    glVertex2f(-107.407, -14.42457);
    glVertex2f(-20.261, -15.13021);
    glVertex2f(-32, -12);
    glVertex2f(-20.9157, -7.1699);
    glEnd();

}

void lava_ground03()
{
    glColor3f(1,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(-70, -26);
    glVertex2f(-116, -20);
    glVertex2f(-94, -18);
    glVertex2f(-107.407, -14.42457);
    glVertex2f(-20.261, -15.13021);
    glVertex2f(-2, -20);
    glVertex2f(-23, -22);
    glVertex2f(-9.6083, -27.261019);
    glEnd();
}

void lava_ground04()
{
    glColor3f(1,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(-48, -34);
    glVertex2f(-98, -28);
    glVertex2f(-70, -26);
    glVertex2f(-9.6083, -27.261019);
    glVertex2f(5, -33);
    glVertex2f(7, -33);
    glEnd();
}

bool ok = false;
int count_ground = 1;

void lava_animation(int value)
{
    if (max_lava_ground < 4)
        {
            max_lava_ground++; // Increment max_lava_ground until all lava grounds are displayed
        }
    glutPostRedisplay();
    glutTimerFunc(200, lava_animation, 0);
}



void change_lava(int value)
{
    state++;
    glutPostRedisplay();
    glutTimerFunc(200, change_lava, 0);
}

void display() {
	glClearColor(0.0, 0.0, 0.0, 0.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)


    switch(state){
        case 1:
        hill_lava01();
        break;
        case 2:
        hill_lava02();
        break;
        case 3:
        hill_lava03();
        break;
        case 4:
        hill_lava04();
        break;
        case 5:
        hill_lava05();
        break;
        case 6:
        hill_lava06();
        break;
        default:
        hill_lava06();
        ok = true;
        break;
    }

    if (ok){
         for (int i = 1; i <= max_lava_ground; ++i) {
                switch (i) {
                    case 1:
                        lava_ground01();
                        break;
                    case 2:
                        lava_ground02();
                        break;
                    case 3:
                        lava_ground03();
                        break;
                    case 4:
                        lava_ground04();
                        break;
                    default:
                        lava_ground04(); // This will be executed when max_lava_ground is out of range
                        break;
                }
    }


}


	glFlush();  // Render now

}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutInitWindowSize(920, 520);   // Set the window's initial width & height
	glutCreateWindow("OpenGL Setup Test"); // Create a window with the given title
    glutDisplayFunc(display); // Register display callback handler for window re-paint
	gluOrtho2D(-200, +60, -100, +100);
	glutTimerFunc(200, change_lava, 0);
	glutTimerFunc(200, lava_animation, 0);
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
