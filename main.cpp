///Name: Marjuk Ahmed Siddiki
///Id: 171-15-8959

#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>
#include <math.h>

static float cm = 0.0;
static float cldm = 0.0;
static float dlpm = 0.0;

void init(){
    glClearColor(1.0f,1.0f,1.0f,1.0f);
    glOrtho(0,100,0,100,-60,60);
}

void circle(GLfloat rx, GLfloat ry,GLfloat cx,GLfloat cy){
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(cx,cy);

    for (int i=0;i<=100;i++){
        float angle = 2.0f*3.1416f*i/100;

        float x = rx*cosf(angle);
        float y = ry*sinf(angle);

        glVertex2f((x+cx),(y+cy));
    }
    glEnd();
}

void carMove(){
    cm=cm+0.040;
    if(cm>+99){
        cm=0;
    }
    glutPostRedisplay();
}

void car(){
    ///car
    glColor3ub(39,117,219);
    glBegin(GL_POLYGON);
    glVertex2d(1,16);
    glVertex2d(16,16);
    glVertex2d(16,19);
    glVertex2d(1,19);
    glVertex2d(3,19);
    glVertex2d(14,19);
    glVertex2d(12,22);
    glVertex2d(5,22);
    glEnd();

    glColor3ub(100,100,100);
    glBegin(GL_POLYGON);
    glVertex2d(4,18);
    glVertex2d(13.5,18);
    glVertex2d(12,21);
    glVertex2d(5,21);
    glEnd();

    glColor3ub(39,117,219);
    glBegin(GL_POLYGON);
    glVertex2d(9,18);
    glVertex2d(10,18);
    glVertex2d(10,21);
    glVertex2d(9,21);
    glEnd();

    glColor3ub(0,0,0);
    circle(2,2,5,16);
    circle(2,2,12,16);

    glColor3ub(202,212,224);
    circle(1,1,5,16);
    circle(1,1,12,16);
}

void clMove(){
    cldm=cldm+0.02;
    if(cldm>+99){
        cldm = 0;
    }
    glutPostRedisplay();
}

void cloude(){
    glColor3ub(249,255,254);
    circle(4,3,5,92);
    circle(4,3,10,92);
    circle(4,3,15,92);
    circle(4,3,7,96);
    circle(4,3,12,96);
    circle(4,3,35,90);
    circle(4,3,40,90);
    circle(4,3,45,90);
    circle(4,3,37,94);
    circle(4,3,42,95);
}

void dlMove(){
    dlpm=dlpm-0.005;
    if(dlpm<=0){
        dlpm=5;
        glutPostRedisplay();
    }
}

void swing(){
    ///Swing
    glColor3ub(120,65,15);
    glBegin(GL_POLYGON);
    glVertex2f(95,10);
    glVertex2f(99,10);
    glVertex2f(99,11);
    glVertex2f(95,11);
    glEnd();
    glColor3ub(173,29,29);
    glBegin(GL_POLYGON);
    glVertex2f(95.2,11);
    glVertex2f(95.5,11);
    glVertex2f(95.5,22);
    glVertex2f(95.2,22);
    glEnd();
    glColor3ub(173,29,29);
    glBegin(GL_POLYGON);
    glVertex2f(98.5,11);
    glVertex2f(98.8,11);
    glVertex2f(98.8,22);
    glVertex2f(98.5,22);
    glEnd();

    ///Man
    ///Body
    glColor3ub(180,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(96.2,10);
    glVertex2f(97.5,10);
    glVertex2f(97.5,13);
    glVertex2f(96.2,13);
    glEnd();

    ///Lower Part
    glColor3ub(0,0,180);
    glBegin(GL_POLYGON);
    glVertex2f(95.5,9);
    glVertex2f(98.5,9);
    glVertex2f(97.5,11);
    glVertex2f(96.2,11);
    glEnd();

    ///Hand-1
    glColor3ub(217,184,117);
    glBegin(GL_POLYGON);
    glVertex2f(96.2,11.8);
    glVertex2f(96.2,12);
    glVertex2f(95,12.4);
    glVertex2f(95,12.1);
    glEnd();

    ///Hand-2
    glColor3ub(217,184,117);
    glBegin(GL_POLYGON);
    glVertex2f(97.5,11.8);
    glVertex2f(97.5,12);
    glVertex2f(98.5,12.4);
    glVertex2f(98.5,12.1);
    glEnd();

    ///Lag-1
    glColor3ub(217,184,117);
    glBegin(GL_POLYGON);
    glVertex2f(96.2,9);
    glVertex2f(96.6,9);
    glVertex2f(96.6,8.5);
    glVertex2f(96.2,8.5);
    glEnd();

    ///Lag-2
    glColor3ub(217,184,117);
    glBegin(GL_POLYGON);
    glVertex2f(97.5,9);
    glVertex2f(97.9,9);
    glVertex2f(97.9,8.5);
    glVertex2f(97.5,8.5);
    glEnd();

    ///Head
    glColor3ub(200,200,200);
    circle(0.6,0.6,96.8,13);
    glColor3ub(0,0,0);
    circle(0.1,0.1,96.5,13.3);
    circle(0.1,0.1,97.1,13.3);
}

void myDisplay(){
    glClear(GL_COLOR_BUFFER_BIT);

    ///sky
    glColor3ub(38,135,171);
    glBegin(GL_POLYGON);
    glVertex2f(0,0);
    glVertex2f(100,0);
    glVertex2f(100,100);
    glVertex2f(0,100);
    glEnd();

    ///Hill - left
    glColor3ub(75,153,44);
    glBegin(GL_POLYGON);
    glVertex2f(0,20);
    glVertex2f(60,20);
    glVertex2f(25,60);
    glVertex2f(0,35);
    glEnd();

    ///Hill - right
    glColor3ub(30,171,64);
    glBegin(GL_POLYGON);
    glVertex2f(50,20);
    glVertex2f(100,20);
    glVertex2f(100,30);
    glVertex2f(80,62);
    glEnd();

    ///Hill - middle
    glColor3ub(64,156,20);
    glBegin(GL_POLYGON);
    glVertex2f(25,20);
    glVertex2f(75,20);
    glVertex2f(52,67);
    glEnd();

    ///Road
    ///black
    glColor3ub(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(0,14);
    glVertex2f(100,14);
    glVertex2f(100,20);
    glVertex2f(0,20);
    glEnd();

    ///white
    glColor3ub(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2f(0,14.3);
    glVertex2f(100,14.3);
    glVertex2f(100,19.2);
    glVertex2f(0,19.2);
    glEnd();

    ///black
    glColor3ub(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(0,14.50);
    glVertex2f(100,14.50);
    glVertex2f(100,19.10);
    glVertex2f(0,19.10);
    glEnd();

    ///field
    glColor3ub(168,145,50);
    glBegin(GL_POLYGON);
    glVertex2f(0,0);
    glVertex2f(100,0);
    glVertex2f(100,14);
    glVertex2f(0,14);
    glEnd();

    carMove();
    for(int i=0;i<1;i++){
        glPushMatrix();
        glTranslatef(cm+(8*i),0-i,0);
        car();
        glPopMatrix();
    }

    clMove();
    for(int i=0;i<1;i++){
        glPushMatrix();
        glTranslatef(cldm+(8*i),0-i,0);
        cloude();
        glPopMatrix();
    }

    dlMove();
    for(int i=0;i<1;i++){
        glPushMatrix();
        glTranslatef(0-i,dlpm+(8*i),0);
        swing();
        glPopMatrix();
    }

    ///tree - 1
    glColor3ub(130,100,29);
    glBegin(GL_POLYGON);
    glVertex2f(10,0);
    glVertex2f(14,0);
    glVertex2f(14,22);
    glVertex2f(10,22);
    glEnd();

    ///leaf
    glColor3ub(33,143,55);
    glBegin(GL_POLYGON);
    circle(8,8,12,29);
    circle(4,4,8,20);
    circle(6,6,15,22);
    circle(6,6,17,30);
    circle(6,6,15,35);
    circle(5,5,20,22);
    circle(4,4,12,30);

    ///stick-1
    glColor3ub(120,65,15);
    glBegin(GL_POLYGON);
    glVertex2f(5,7);
    glVertex2f(7,7);
    glVertex2f(6,9);
    glVertex2f(5,0);
    glVertex2f(7,0);
    glVertex2f(7,7);
    glVertex2f(5,7);
    glEnd();

    ///stick-2
    glColor3ub(120,65,15);
    glBegin(GL_POLYGON);
    glVertex2f(8,9);
    glVertex2f(10,9);
    glVertex2f(9,11);
    glVertex2f(8,0);
    glVertex2f(10,0);
    glVertex2f(10,9);
    glVertex2f(8,9);
    glEnd();

    ///stick-3
    glColor3ub(120,65,15);
    glBegin(GL_POLYGON);
    glVertex2f(11,10);
    glVertex2f(13,10);
    glVertex2f(12,12);
    glVertex2f(11,0);
    glVertex2f(13,0);
    glVertex2f(13,10);
    glVertex2f(11,10);
    glEnd();

    ///stick-4
    glColor3ub(120,65,15);
    glBegin(GL_POLYGON);
    glVertex2f(14,9);
    glVertex2f(16,9);
    glVertex2f(15,11);
    glVertex2f(14,0);
    glVertex2f(16,0);
    glVertex2f(16,9);
    glVertex2f(14,9);
    glEnd();

    ///stick-5
    glColor3ub(120,65,15);
    glBegin(GL_POLYGON);
    glVertex2f(17,7);
    glVertex2f(19,7);
    glVertex2f(18,9);
    glVertex2f(17,0);
    glVertex2f(19,0);
    glVertex2f(19,7);
    glVertex2f(17,7);
    glEnd();

    ///stick-6
    glColor3ub(120,65,15);
    glBegin(GL_POLYGON);
    glVertex2f(3,4);
    glVertex2f(21,4);
    glVertex2f(21,5);
    glVertex2f(3,5);
    glEnd();

    ///Tree - 2
    glColor3ub(130,100,29);
    glBegin(GL_POLYGON);
    glVertex2f(86,0);
    glVertex2f(90,0);
    glVertex2f(90,22);
    glVertex2f(86,22);
    glEnd();

    ///leaf
    glColor3ub(33,143,55);
    circle(8,8,85,29);
    circle(4,4,92,20);
    circle(6,6,97,24);
    circle(5,6,95,33);
    circle(6,6,88,37);
    circle(5,5,85,22);

    ///sticks-1
    glColor3ub(120,65,15);
    glBegin(GL_POLYGON);
    glVertex2f(81,7);
    glVertex2f(83,7);
    glVertex2f(82,9);
    glVertex2f(81,0);
    glVertex2f(83,0);
    glVertex2f(83,7);
    glVertex2f(81,7);
    glEnd();

    ///sticks-2
    glColor3ub(120,65,15);
    glBegin(GL_POLYGON);
    glVertex2f(84,9);
    glVertex2f(86,9);
    glVertex2f(85,11);
    glVertex2f(84,0);
    glVertex2f(86,0);
    glVertex2f(86,9);
    glVertex2f(84,9);
    glEnd();

    ///sticks-3
    glColor3ub(120,65,15);
    glBegin(GL_POLYGON);
    glVertex2f(87,10);
    glVertex2f(89,10);
    glVertex2f(88,12);
    glVertex2f(87,0);
    glVertex2f(89,0);
    glVertex2f(89,10);
    glVertex2f(87,10);
    glEnd();

    ///sticks-4
    glColor3ub(120,65,15);
    glBegin(GL_POLYGON);
    glVertex2f(90,9);
    glVertex2f(92,9);
    glVertex2f(91,11);
    glVertex2f(90,0);
    glVertex2f(92,0);
    glVertex2f(92,9);
    glVertex2f(90,9);
    glEnd();

    ///sticks-5
    glColor3ub(120,65,15);
    glBegin(GL_POLYGON);
    glVertex2f(93,7);
    glVertex2f(95,7);
    glVertex2f(94,9);
    glVertex2f(93,0);
    glVertex2f(95,0);
    glVertex2f(95,7);
    glVertex2f(93,7);
    glEnd();

    ///sticks-6
    glColor3ub(120,65,15);
    glBegin(GL_POLYGON);
    glVertex2f(78,4);
    glVertex2f(97,4);
    glVertex2f(97,5);
    glVertex2f(78,5);
    glEnd();

    ///Jhup - 1
    glColor3ub(0,100,0);
    circle(7,6,26,0);
    circle(4,4,24,7);
    circle(6,4,27,5);

    ///jhup - 2
    circle(3,3,27,10);
    circle(7.5,6,40,0);
    circle(4,4,37,5);
    circle(4.5,4,43,5);
    circle(4,4,39,9);

    ///jhup - 3
    circle(4,4,43,9.5);
    glColor3ub(0,100,0);
    circle(8,6,55,0);
    circle(4,4,52,6);
    circle(6,6,57,7);

    ///jhup - 4
    circle(0.5,6,71,0);
    circle(3,3,65,5);
    circle(4.5,4,67,5);
    circle(4,4,74,5);
    circle(4,5,70,8);

    circle(3,5,2,0);

    circle(3,4,90,0);

    circle(2,5,0,7);

    ///flower - red
    glColor3ub(200,0,0);
    circle(0.6,0.8,23,2);
    glColor3ub(194,179,12);
    circle(0.2,0.2,23,2);

    ///flower - yellow
    glColor3ub(194,179,12);
    circle(0.6,0.8,30,4);
    glColor3ub(200,0,0);
    circle(0.2,0.2,30,4);

    ///flower - red - 2
    glColor3ub(200,0,0);
    circle(0.6,0.8,25,9);
    glColor3ub(194,179,12);
    circle(0.2,0.2,25,9);

    ///flower - yellow - 2
    glColor3ub(194,179,12);
    circle(0.6,0.8,35,1);
    glColor3ub(200,0,0);
    circle(0.2,0.2,37,9);

    ///flower - red - 3
    glColor3ub(200,0,0);
    circle(0.6,0.8,41,5);
    glColor3ub(194,179,12);
    circle(0.2,0.2,41,5);

    ///flower - yellow - 3
    glColor3ub(219,213,29);
    circle(0.6,0.8,37,9);
    glColor3ub(200,0,0);
    circle(0.2,0.2,37,9);

    ///flower - red - 4
    glColor3ub(200,0,0);
    circle(0.5,0.5,45,10);
    glColor3ub(194,179,12);
    circle(0.1,0.1,45,10);

    ///flower - yellow - 4
    glColor3ub(219,213,29);
    circle(0.6,0.8,50,7);
    glColor3ub(200,0,0);
    circle(0.2,0.2,50,7);

    ///flower - red - 5
    glColor3ub(200,0,0);
    circle(0.5,0.5,54,1);
    glColor3ub(194,179,12);
    circle(0.1,0.1,54,1);

    ///flower - yellow - 5
    glColor3ub(219,213,29);
    circle(0.5,0.5,61,5);
    glColor3ub(200,0,0);
    circle(0.1,0.1,61,5);

    ///flower - red - 6
    glColor3ub(200,0,0);
    circle(0.5,0.5,56,10);
    glColor3ub(194,179,12);
    circle(0.1,0.1,56,10);

    ///flower - red - 7
    glColor3ub(200,0,0);
    circle(0.6,0.8,65,7);
    glColor3ub(194,179,12);
    circle(0.2,0.2,65,7);

    ///flower - yellow - 7
    glColor3ub(219,213,29);
    circle(0.6,0.8,75,5);
    glColor3ub(200,0,0);
    circle(0.2,0.2,75,5);

    ///flower - red - 8
    glColor3ub(200,0,0);
    circle(0.6,0.6,68,0.5);
    glColor3ub(194,179,12);
    circle(0.2,0.2,60,0.5);

    ///flower - yellow - 8
    glColor3ub(219,213,29);
    circle(0.5,0.5,71,10);
    glColor3ub(200,0,0);
    circle(0.1,0.1,71,10);

    ///flower - red - 9
    glColor3ub(200,0,0);
    circle(0.5,0.6,1,7);
    glColor3ub(194,179,12);
    circle(0.2,0.2,1,7);

    ///flower - yellow - 9
    glColor3ub(219,213,29);
    circle(0.6,0.8,3,1);
    glColor3ub(200,0,0);
    circle(0.2,0.2,3,1);

    ///flower - red - 10
    glColor3ub(200,0,0);
    circle(0.6,0.8,100,1);
    glColor3ub(194,179,12);
    circle(0.2,0.2,100,1);

    ///flower - yellow - 10
    glColor3ub(219,213,29);
    circle(0.5,0.6,1,7);
    glColor3ub(194,179,12);
    circle(0.2,0.2,1,7);

    ///cloud
    glColor3ub(249,255,254);
    circle(3,2,5,82);
    circle(3,2,10,82);
    circle(3,2,15,82);
    circle(3,2,7,84);
    circle(3,2,12,84);
    circle(3,2,30,78);
    circle(3,2,43,78);
    circle(3,2,48,78);
    circle(3,2,40,80);
    circle(3,2,45,81);

    ///cloud - sun
    glColor3ub(224,71,0);
    circle(4,4,85,80);
    glColor3ub(245,255,254);
    circle(4,3,80,75);
    circle(4,3,85,75);
    circle(4,3,90,75);
    circle(4,3,82,77);
    circle(4,3,92,78);

    glFlush();
}

int main(){
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(1300,600);
    glutInitWindowPosition(0,0);
    glutCreateWindow("Marjuk - Highway");
    init();
    glutDisplayFunc(myDisplay);
    sndPlaySound("music.wav", SND_ASYNC);
    glutMainLoop();
    return 0;
}
