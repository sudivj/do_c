#include <stdio.h>
#include <stdlib.h>
#include <GL/gl.h>
#include <GL/glut.h>
double x = .0, y = .0;
double length = 1;

void draw()
{
    glClearColor(0, 0, 0, 0);
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POLYGON);
    glColor3f(1, 0, 0);
    length -= .001;
    glVertex2f((length * -1) + x, (length * -1) + y);
    glVertex2f((length) + x, (length * -1) + y);
    glVertex2f((length) + x, (length * -1) + y);
    glVertex2f((length) + x, (length) + y);
    glVertex2f((length) + x, (length) + y);
    glVertex2f((length * -1) + x, (length) + y);
    glVertex2f((length * -1) + x, (length) + y);
    glVertex2f((length * -1) + x, (length * -1) + y);
    glEnd();
    glFlush();
    glutSwapBuffers();

    glutPostRedisplay();
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);

    glutInitWindowSize(500, 500);
    glutInitWindowPosition(50, 50);

    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
    
    glutCreateWindow("Movement(test)");

    glutDisplayFunc(draw);
    glutMainLoop();
    glutPostRedisplay();

    return 0;
}
