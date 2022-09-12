#include <stdio.h>
#include <stdlib.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include "2Dhandle.h"

int winx = 800, winy = 800;
double lenx;
double leny;
long double posx = 0;
long double posy = 0;
long double speedx, speedy;

void window_setup(int winx, int winy, int x, int y)
{
    lenx = (winx / (x * 100)) * 0.1;
    leny = (winy / (y * 100)) * 0.1;
}

void draw()
{
    speedx = speedx * .8;
    speedy = speedy * .8;
    posx += speedx;
    posy += speedy;
    glClearColor(0, 0, 0, 0);
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_QUADS);
    glColor3f(1, 0, 0);
    glVertex2f((lenx * -1) + posx, leny + posy);
    glVertex2f((lenx * -1) + posx, (leny * -1) + posy);
    glVertex2f(lenx + posx, (leny * -1) + posy);
    glVertex2f(lenx + posx, leny + posy);
    glEnd();
    glFlush();
    glutPostRedisplay();
    glutSwapBuffers();
}
void keyboard(int key, int x, int y)
{
    switch (key)
    {
    case GLUT_KEY_UP:
        speedy = 0.05;
        break;
    case GLUT_KEY_DOWN:
        speedy = -0.05;
        break;
    case GLUT_KEY_RIGHT:
        speedx = 0.05;
        break;
    case GLUT_KEY_LEFT:
        speedx = -0.05;
        break;
    }
}
int main(int argc, char **argv)
{
    window_setup(winx, winy, 6, 6);
    glutInit(&argc, argv);

    glutInitWindowSize(winx, winy);
    glutInitWindowPosition(50, 50);

    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);

    glutCreateWindow("test(GL)");

    glutDisplayFunc(draw);

    // glClearColor(0,0,0,0);
    // gluOrtho2D(0,400,0,400);
    glutSpecialFunc(keyboard);

    glutMainLoop();
}