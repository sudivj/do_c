#include <stdio.h>
#include <unistd.h>
#include <math.h>
#include <ncurses.h>
#include <GL/gl.h>
#include <GL/glut.h>
double x = 0.0, y = 0.0, result, size;
double num = 0.0002;

void display()
{
    glClearColor(0, 0, 0, 0);
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POLYGON);
    glColor3f(1, 0, 0);
    x += 0.05;
    y += 0.05;
    if (x > 360)
    {
        x = 0.0;
    }
    if (y > 180)
    {
        y = 0.0;
    }
    size = cos(y) / 6;
    result = sin(x) / 6;
    glVertex2f(num * -1 + result, num * -1 + size);
    glVertex2f(num + result, num * -1 + size);
    glVertex2f(num + result, num * -1 + size);
    glVertex2f(num + result, num + size);
    glVertex2f(num + result, num + size);
    glVertex2f(num * -1 + result, num + size);
    glVertex2f(num * -1 + result, num + size);
    glVertex2f(num * -1 + result, num * -1 + size);
    glEnd();
    num = 0.8;
    result = 0;
    size = 0;
    glVertex2f(num * -1 + result, num * -1 + size);
    glVertex2f(num + result, num * -1 + size);
    glVertex2f(num + result, num * -1 + size);
    glVertex2f(num + result, num + size);
    glVertex2f(num + result, num + size);
    glVertex2f(num * -1 + result, num + size);
    glVertex2f(num * -1 + result, num + size);
    glVertex2f(num * -1 + result, num * -1 + size);
    glEnd();
    glutSwapBuffers();

    glutPostRedisplay();
}

int main(int argc, char **argv)
{

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
    glutInitWindowSize(900, 900);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("test");
    glClearColor(0, 0, 0, 0);
    glutDisplayFunc(display);

    glutMainLoop();
    glutPostRedisplay();

    return 0;
}