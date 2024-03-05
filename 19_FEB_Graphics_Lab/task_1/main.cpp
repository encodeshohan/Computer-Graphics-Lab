#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include <math.h>

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */

//   22-46013-1
//   MD. SHOHANUR RAHMAN SHOHAN

building()
{
//  ################################
//  ##                            ##
//  ##      L E F T  PORTION      ##
//  ##                            ##
//  ################################

    //
    //   LOWER RECTANGLE
    //
    glBegin(GL_POLYGON);
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex2f(-26.0f, -10.0f);
	glVertex2f(-35.0f, -10.0f);
	glVertex2f(-35.0f, -9.5f);
	glVertex2f(-26.0f, -9.5f);
	glEnd();
	// OUTLINE
	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-35.0f, -9.5f);
	glVertex2f(-35.0f, -10.0f);
	glVertex2f(-35.0f, -10.0f);
	glVertex2f(-26.0f, -10.0f);
	glVertex2f(-26.0f, -10.0f);
	glVertex2f(-26.0f, -9.5f);
	glEnd();

	//
    //   UPPER RECTANGLE
    //
    glBegin(GL_POLYGON);
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex2f(-26.0f, 35.0f);
	glVertex2f(-35.0f, 35.0f);
	glVertex2f(-35.0f, 36.0f);
	glVertex2f(-26.0f, 36.0f);
	glEnd();
	// OUTLINE
	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-35.0f, 35.0f);
	glVertex2f(-35.0f, 36.0f);
	glVertex2f(-35.0f, 36.0f);
	glVertex2f(-26.0f, 36.0f);
	glEnd();

	//
    //   LEFT BODY
    //
    glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.0f, 0.0f);
	glVertex2f(-26.0f, -9.5f);
	glVertex2f(-35.0f, -9.5f);
	glVertex2f(-35.0f, 35.0f);
	glVertex2f(-26.0f, 35.0f);
	glEnd();

	//
    //   LEFT BODY OUTLINE
    //
    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-26.0f, -9.5f);
	glVertex2f(-35.0f, -9.5f);

	glVertex2f(-35.0f, -9.5f);
	glVertex2f(-35.0f, 35.0f);

	glVertex2f(-35.0f, 35.0f);
    glVertex2f(-26.0f, 35.0f);

    glVertex2f(-26.0f, 35.0f);
    glVertex2f(-26.0f, -9.5f);
	glEnd();


	//
	//        WINDOW1
	//
    glBegin(GL_POLYGON);
	glColor3f(0.5f, 1.0f, 1.0f);    //CYAN
	glVertex2f(-29.0f, -7.0f);
	glVertex2f(-32.0f, -7.0f);
	glVertex2f(-32.0f, -3.0f);
	glVertex2f(-29.0f, -3.0f);
	glEnd();
	//
	//     WINDOW1  BORDER
	//
    glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);   //BLACK
	glVertex2f(-29.0f, -7.0f);
	glVertex2f(-32.0f, -7.0f);
	glVertex2f(-32.0f, -7.0f);
	glVertex2f(-32.0f, -3.0f);
	glVertex2f(-32.0f, -3.0f);
	glVertex2f(-29.0f, -3.0f);
	glVertex2f(-29.0f, -3.0f);
    glVertex2f(-29.0f, -7.0f);
    glVertex2f(-30.5f, -3.0f);  // DIVIDER
    glVertex2f(-30.5f, -7.0f);  // DIVIDER
	glEnd();

	//
	//        WINDOW2
	//
    glBegin(GL_POLYGON);
	glColor3f(0.5f, 1.0f, 1.0f);    //CYAN
	glVertex2f(-29.0f, 2.0f);
	glVertex2f(-32.0f, 2.0f);
	glVertex2f(-32.0f, 6.0f);
	glVertex2f(-29.0f, 6.0f);
	glEnd();
	//
	//     WINDOW2  BORDER
	//
    glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);   //BLACK
	glVertex2f(-29.0f, 2.0f);
	glVertex2f(-32.0f, 2.0f);
	glVertex2f(-32.0f, 2.0f);
	glVertex2f(-32.0f, 6.0f);
	glVertex2f(-32.0f, 6.0f);
	glVertex2f(-29.0f, 6.0f);
	glVertex2f(-29.0f, 6.0f);
	glVertex2f(-29.0f, 2.0f);
    glVertex2f(-30.5f, 6.0f);  // DIVIDER
    glVertex2f(-30.5f, 2.0f);  // DIVIDER
	glEnd();

	//
	//        WINDOW3
	//
    glBegin(GL_POLYGON);
	glColor3f(0.5f, 1.0f, 1.0f);    //CYAN
	glVertex2f(-29.0f, 11.0f);
	glVertex2f(-32.0f, 11.0f);
	glVertex2f(-32.0f, 15.0f);
	glVertex2f(-29.0f, 15.0f);
	glEnd();
	//
	//     WINDOW3  BORDER
	//
    glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);   //BLACK
	glVertex2f(-29.0f, 11.0f);
	glVertex2f(-32.0f, 11.0f);
	glVertex2f(-32.0f, 11.0f);
	glVertex2f(-32.0f, 15.0f);
	glVertex2f(-32.0f, 15.0f);
	glVertex2f(-29.0f, 15.0f);
	glVertex2f(-29.0f, 15.0f);
	glVertex2f(-29.0f, 11.0f);
    glVertex2f(-30.5f, 15.0f);  // DIVIDER
    glVertex2f(-30.5f, 11.0f);  // DIVIDER
	glEnd();

    //
	//        WINDOW4
	//
    glBegin(GL_POLYGON);
	glColor3f(0.5f, 1.0f, 1.0f);    //CYAN
	glVertex2f(-29.0f, 20.0f);
	glVertex2f(-32.0f, 20.0f);
	glVertex2f(-32.0f, 24.0f);
	glVertex2f(-29.0f, 24.0f);
	glEnd();
	//
	//     WINDOW4  BORDER
	//
    glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);   //BLACK
	glVertex2f(-29.0f, 20.0f);
	glVertex2f(-32.0f, 20.0f);
	glVertex2f(-32.0f, 20.0f);
	glVertex2f(-32.0f, 24.0f);
	glVertex2f(-32.0f, 24.0f);
	glVertex2f(-29.0f, 24.0f);
	glVertex2f(-29.0f, 24.0f);
    glVertex2f(-29.0f, 20.0f);
    glVertex2f(-30.5f, 24.0f);  // DIVIDER
    glVertex2f(-30.5f, 20.0f);  // DIVIDER
	glEnd();

    //
	//        WINDOW5
	//
    glBegin(GL_POLYGON);
	glColor3f(0.5f, 1.0f, 1.0f);    //CYAN
	glVertex2f(-29.0f, 29.0f);
	glVertex2f(-32.0f, 29.0f);
	glVertex2f(-32.0f, 33.0f);
	glVertex2f(-29.0f, 33.0f);
	glEnd();
	//
	//     WINDOW5  BORDER
	//
    glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);   //BLACK
	glVertex2f(-29.0f, 29.0f);
	glVertex2f(-32.0f, 29.0f);
	glVertex2f(-32.0f, 29.0f);
	glVertex2f(-32.0f, 33.0f);
	glVertex2f(-32.0f, 33.0f);
	glVertex2f(-29.0f, 33.0f);
	glVertex2f(-29.0f, 33.0f);
	glVertex2f(-29.0f, 29.0f);
    glVertex2f(-30.5f, 33.0f);  // DIVIDER
    glVertex2f(-30.5f, 29.0f);  // DIVIDER
	glEnd();




//  ################################
//  ##                            ##
//  ##      MIDDLE   PORTION      ##
//  ##                            ##
//  ################################

    //
    //   UPPER RECTANGLE
    //
    glBegin(GL_POLYGON);
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex2f(-14.0f, 37.0f);
	glVertex2f(-26.0f, 37.0f);
	glVertex2f(-26.0f, 38.0f);
	glVertex2f(-14.0f, 38.0f);
	glEnd();
	// OUTLINE
	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-26.0f, 36.0f);
	glVertex2f(-26.0f, 38.0f);

	glVertex2f(-26.0f, 38.0f);
	glVertex2f(-14.0f, 38.0f);

	glVertex2f(-14.0f, 38.0f);
	glVertex2f(-14.0f, 36.0f);

	glVertex2f(-14.0f, 37.0f);
	glVertex2f(-26.0f, 37.0f);
	glEnd();

	//
    //   MIDDLE BODY
    //
    glBegin(GL_POLYGON);
	glColor3f(0.7f, 0.0f, 0.0f);
	glVertex2f(-14.0f, -10.0f);
	glVertex2f(-26.0f, -10.0f);
	glVertex2f(-26.0f, 37.0f);
	glVertex2f(-14.0f, 37.0f);
	glEnd();
	// OUTLINE
	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-14.0f, 37.0f);
	glVertex2f(-14.0f, -10.0f);
	glEnd();

	//
	//        WINDOW11
	//
	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.5f, 0.5f);    //Gray
	glVertex2f(-16.0f, -1.0f);
	glVertex2f(-24.0f, -1.0f);
	glVertex2f(-24.0f, 0.0f);
	glVertex2f(-16.0f, 0.0f);
	glEnd();
	//
    glBegin(GL_POLYGON);
	glColor3f(0.5f, 1.0f, 1.0f);    //CYAN
	glVertex2f(-18.0f, 0.0f);
	glVertex2f(-22.0f, 0.0f);
	glVertex2f(-22.0f, 5.0f);
	glVertex2f(-18.0f, 5.0f);
	glEnd();
	//
	//     WINDOW11  BORDER
	//
    glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);   //BLACK
	glVertex2f(-18.0f, 0.0f);
	glVertex2f(-22.0f, 0.0f);
	glVertex2f(-22.0f, 0.0f);
	glVertex2f(-22.0f, 5.0f);
	glVertex2f(-22.0f, 5.0f);
	glVertex2f(-18.0f, 5.0f);
	glVertex2f(-18.0f, 5.0f);
	glVertex2f(-18.0f, 0.0f);
    glVertex2f(-20.0f, 0.0f);  // DIVIDER
    glVertex2f(-20.0f, 5.0f);  // DIVIDER
	glEnd();

	//
	//        WINDOW12
	//
	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.5f, 0.5f);    //Gray
	glVertex2f(-16.0f, 8.0f);
	glVertex2f(-24.0f, 8.0f);
	glVertex2f(-24.0f, 9.0f);
	glVertex2f(-16.0f, 9.0f);
	glEnd();
	//
    glBegin(GL_POLYGON);
	glColor3f(0.5f, 1.0f, 1.0f);    //CYAN
	glVertex2f(-18.0f, 9.0f);
	glVertex2f(-22.0f, 9.0f);
	glVertex2f(-22.0f, 14.0f);
	glVertex2f(-18.0f, 14.0f);
	glEnd();
	//
	//     WINDOW12  BORDER
	//
    glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);   //BLACK
	glVertex2f(-18.0f, 9.0f);
	glVertex2f(-22.0f, 9.0f);
	glVertex2f(-22.0f, 9.0f);
	glVertex2f(-22.0f, 14.0f);
	glVertex2f(-22.0f, 14.0f);
	glVertex2f(-18.0f, 14.0f);
	glVertex2f(-18.0f, 14.0f);
	glVertex2f(-18.0f, 9.0f);
    glVertex2f(-20.0f, 14.0f);  // DIVIDER
    glVertex2f(-20.0f, 9.0f);  // DIVIDER
	glEnd();

	//
	//        WINDOW13
	//
	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.5f, 0.5f);    //Gray
	glVertex2f(-16.0f, 17.0f);
	glVertex2f(-24.0f, 17.0f);
	glVertex2f(-24.0f, 18.0f);
	glVertex2f(-16.0f, 18.0f);
	glEnd();
	//
    glBegin(GL_POLYGON);
	glColor3f(0.5f, 1.0f, 1.0f);    //CYAN
	glVertex2f(-18.0f, 18.0f);
	glVertex2f(-22.0f, 18.0f);
	glVertex2f(-22.0f, 23.0f);
	glVertex2f(-18.0f, 23.0f);
	glEnd();
	//
	//     WINDOW13  BORDER
	//
    glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);   //BLACK
	glVertex2f(-18.0f, 18.0f);
	glVertex2f(-22.0f, 18.0f);
	glVertex2f(-22.0f, 18.0f);
	glVertex2f(-22.0f, 23.0f);
	glVertex2f(-22.0f, 23.0f);
	glVertex2f(-18.0f, 23.0f);
	glVertex2f(-18.0f, 23.0f);
	glVertex2f(-18.0f, 18.0f);
    glVertex2f(-20.0f, 18.0f);  // DIVIDER
    glVertex2f(-20.0f, 23.0f);  // DIVIDER
	glEnd();

	//
	//        WINDOW14
	//
	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.5f, 0.5f);    //Gray
	glVertex2f(-16.0f, 26.0f);
	glVertex2f(-24.0f, 26.0f);
	glVertex2f(-24.0f, 27.0f);
	glVertex2f(-16.0f, 27.0f);
	glEnd();
	//
    glBegin(GL_POLYGON);
	glColor3f(0.5f, 1.0f, 1.0f);    //CYAN
	glVertex2f(-18.0f, 27.0f);
	glVertex2f(-22.0f, 27.0f);
	glVertex2f(-22.0f, 32.0f);
	glVertex2f(-18.0f, 32.0f);
	glEnd();
	//
	//     WINDOW14  BORDER
	//
    glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);   //BLACK
	glVertex2f(-18.0f, 27.0f);
	glVertex2f(-22.0f, 27.0f);
	glVertex2f(-22.0f, 27.0f);
	glVertex2f(-22.0f, 32.0f);
	glVertex2f(-22.0f, 32.0f);
	glVertex2f(-18.0f, 32.0f);
	glVertex2f(-18.0f, 32.0f);
	glVertex2f(-18.0f, 27.0f);
    glVertex2f(-20.0f, 27.0f);  // DIVIDER
    glVertex2f(-20.0f, 32.0f);  // DIVIDER
	glEnd();


//  ################################
//  ##                            ##
//  ##     R I G H T   PORTION    ##
//  ##                            ##
//  ################################

    //
    //   UPPER RECTANGLE
    //
    glBegin(GL_POLYGON);
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex2f(-5.0f, 35.0f);
	glVertex2f(-14.0f, 35.0f);
	glVertex2f(-14.0f, 36.0f);
	glVertex2f(-5.0f, 36.0f);
	glEnd();
	// OUTLINE
	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-5.0f, 35.0);
	glVertex2f(-14.0f, 35.0);

	glVertex2f(-14.0f, 35.0);
	glVertex2f(-14.0f, 36.0);

	glVertex2f(-14.0f, 36.0);
	glVertex2f(-5.0f, 36.0);

	glVertex2f(-5.0f, 36.0);
	glVertex2f(-5.0f, 35.0);
	glEnd();

	//
    //   RGHT BODY
    //
    glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.0f, 0.0f);
	glVertex2f(-14.0f, 35.0f);
	glVertex2f(-5.0f, 35.0f);
	glVertex2f(-5.0f, -9.5f);
	glVertex2f(-14.0f, -9.5f);
	glEnd();
	// OUTLINE
	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-14.0f, 35.0f);
	glVertex2f(-5.0f, 35.0f);

	glVertex2f(-5.0f, 35.0f);
	glVertex2f(-5.0f, 35.0f);

	glVertex2f(-5.0f, 35.0f);
	glVertex2f(-5.0f, -9.5f);

	glVertex2f(-5.0f, -9.5f);
	glVertex2f(-14.0f, -9.5f);

	glVertex2f(-14.0f, -9.5f);
	glVertex2f(-14.0f, 35.0f);
	glEnd();

	//
    //   RIGHT LOWER RECTANGLE
    //
    glBegin(GL_POLYGON);
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex2f(-5.0f, -10.0f);
	glVertex2f(-14.0f, -10.0f);
	glVertex2f(-14.0f, -9.5f);
	glVertex2f(-5.0f, -9.5f);
	glEnd();
	// OUTLINE
	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-5.0f, -10.0f);
	glVertex2f(-14.0f, -10.0f);

	glVertex2f(-14.0f, -10.0f);
	glVertex2f(-14.0f, -9.5f);

	glVertex2f(-14.0f, -9.5f);
	glVertex2f(-5.0f, -9.5f);

	glVertex2f(-5.0f, -9.5f);
	glVertex2f(-5.0f, -10.0f);
	glEnd();

    //
	//        WINDOW6
	//
    glBegin(GL_POLYGON);
	glColor3f(0.5f, 1.0f, 1.0f);    //CYAN
	glVertex2f(-8.0f, -7.0f);
	glVertex2f(-11.0f, -7.0f);
	glVertex2f(-11.0f, -3.0f);
	glVertex2f(-8.0f, -3.0f);
	glEnd();
	//
	//     WINDOW6  BORDER
	//
    glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);   //BLACK
	glVertex2f(-8.0f, -7.0f);
	glVertex2f(-11.0f, -7.0f);
	glVertex2f(-11.0f, -7.0f);
	glVertex2f(-11.0f, -3.0f);
	glVertex2f(-11.0f, -3.0f);
	glVertex2f(-8.0f, -3.0f);
	glVertex2f(-8.0f, -3.0f);
	glVertex2f(-8.0f, -7.0f);
    glVertex2f(-9.5f, -3.0f);  // DIVIDER
    glVertex2f(-9.5f, -7.0f);  // DIVIDER
	glEnd();

    //
	//        WINDOW7
	//
    glBegin(GL_POLYGON);
	glColor3f(0.5f, 1.0f, 1.0f);    //CYAN
	glVertex2f(-8.0f, 2.0f);
	glVertex2f(-11.0f, 2.0f);
	glVertex2f(-11.0f, 6.0f);
	glVertex2f(-8.0f, 6.0f);
	glEnd();
	//
	//     WINDOW7  BORDER
	//
    glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);   //BLACK
	glVertex2f(-8.0f, 2.0f);
	glVertex2f(-11.0f, 2.0f);
	glVertex2f(-11.0f, 2.0f);
	glVertex2f(-11.0f, 6.0f);
	glVertex2f(-11.0f, 6.0f);
	glVertex2f(-8.0f, 6.0f);
	glVertex2f(-8.0f, 6.0f);
	glVertex2f(-8.0f, 2.0f);
    glVertex2f(-9.5f, 6.0f);  // DIVIDER
    glVertex2f(-9.5f, 2.0f);  // DIVIDER
	glEnd();

    //
	//        WINDOW8
	//
    glBegin(GL_POLYGON);
	glColor3f(0.5f, 1.0f, 1.0f);    //CYAN
	glVertex2f(-8.0f, 11.0f);
	glVertex2f(-11.0f, 11.0f);
	glVertex2f(-11.0f, 15.0f);
	glVertex2f(-8.0f, 15.0f);
	glEnd();
	//
	//     WINDOW8  BORDER
	//
    glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);   //BLACK
	glVertex2f(-8.0f, 11.0f);
	glVertex2f(-11.0f, 11.0f);
	glVertex2f(-11.0f, 11.0f);
	glVertex2f(-11.0f, 15.0f);
	glVertex2f(-11.0f, 15.0f);
	glVertex2f(-8.0f, 15.0f);
	glVertex2f(-8.0f, 15.0f);
	glVertex2f(-8.0f, 11.0f);
    glVertex2f(-9.5f, 11.0f);  // DIVIDER
    glVertex2f(-9.5f, 15.0f);  // DIVIDER
	glEnd();

	//
	//        WINDOW9
	//
    glBegin(GL_POLYGON);
	glColor3f(0.5f, 1.0f, 1.0f);    //CYAN
	glVertex2f(-8.0f, 20.0f);
	glVertex2f(-11.0f, 20.0f);
	glVertex2f(-11.0f, 24.0f);
	glVertex2f(-8.0f, 24.0f);
	glEnd();
	//
	//     WINDOW9  BORDER
	//
    glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);   //BLACK
	glVertex2f(-8.0f, 20.0f);
	glVertex2f(-11.0f, 20.0f);
	glVertex2f(-11.0f, 20.0f);
	glVertex2f(-11.0f, 24.0f);
	glVertex2f(-11.0f, 24.0f);
	glVertex2f(-8.0f, 24.0f);
	glVertex2f(-8.0f, 24.0f);
	glVertex2f(-8.0f, 20.0f);
    glVertex2f(-9.5f, 20.0f);  // DIVIDER
    glVertex2f(-9.5f, 24.0f);  // DIVIDER
	glEnd();

	//
	//        WINDOW10
	//
    glBegin(GL_POLYGON);
	glColor3f(0.5f, 1.0f, 1.0f);    //CYAN
	glVertex2f(-8.0f, 29.0f);
	glVertex2f(-11.0f, 29.0f);
	glVertex2f(-11.0f, 33.0f);
	glVertex2f(-8.0f, 33.0f);
	glEnd();
	//
	//     WINDOW10  BORDER
	//
    glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);   //BLACK
	glVertex2f(-8.0f, 29.0f);
	glVertex2f(-11.0f, 29.0f);
	glVertex2f(-11.0f, 29.0f);
	glVertex2f(-11.0f, 33.0f);
	glVertex2f(-11.0f, 33.0f);
	glVertex2f(-8.0f, 33.0f);
	glVertex2f(-8.0f, 33.0f);
	glVertex2f(-8.0f, 29.0f);
    glVertex2f(-9.5f, 33.0f);  // DIVIDER
    glVertex2f(-9.5f, 29.0f);  // DIVIDER
	glEnd();






//  ################################
//  ##                            ##
//  ##            D O O R         ##
//  ##                            ##
//  ################################

    glBegin(GL_POLYGON);
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex2f(-22.0f, -10.0f);
	glVertex2f(-22.2f, -10.0f);
	glVertex2f(-22.2f, -3.8f);
	glVertex2f(-22.0f, -4.0f);
	glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex2f(-22.0f, -4.0f);
	glVertex2f(-22.2f, -3.8f);
	glVertex2f(-17.8f, -3.8f);
	glVertex2f(-18.0f, -4.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex2f(-18.0f, -10.0f);
	glVertex2f(-17.8f, -10.0f);
	glVertex2f(-17.8f, -3.8f);
	glVertex2f(-18.0f, -4.0f);
	glEnd();




    // DOOR FILL
    glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.35f, 0.05f);
	glVertex2f(-22.0f, -4.0f);
	glVertex2f(-18.0f, -4.0f);
	glVertex2f(-18.0f, -10.0f);
	glVertex2f(-22.0f, -10.0f);
	glEnd();

	//DOOR DIVIDER LINE
	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-20.0f, -4.0f);
	glVertex2f(-20.0f, -10.0f);
	glEnd();

    // LOWER OUTLINE
	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);   //WHITE
	glVertex2f(-14.0f, -10.0f);
	glVertex2f(-26.0f, -10.0f);
	glEnd();
}
void display() {
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
	glLineWidth(1);

    building();
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
	gluOrtho2D(-40,0,-20,50);
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
