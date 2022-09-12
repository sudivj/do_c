#include <stdio.h>
#include <unistd.h>
#include <GL/glut.h>

void draw(void)
{
    glClearColor(0,0,0,0);
    glClear(GL_COLOR_BUFFER_BIT);
    glClear(GL_POLYGON);
    glColor3f(0,1,1);
    glVertex2f(-0.1,-0.1);
    glVertex2f(-0.1,0.1);
    glVertex2f(-0.1,0.1);
    glVertex2f(0.1,0.1);
    glVertex2f(0.1,0.1);
    glVertex2f(0.1,10.1);
    glEnd();
    glFlush();
}

int main(int argc, char **argv)
{
    
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowPosition(800, 350);
    glutInitWindowSize(800, 800);
    glutCreateWindow("sudiv");

    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0, 10.0, 0.0, 10.0, -1.0, -1.0);

    glutDisplayFunc(draw);
    glutMainLoop();    
    
    return 0;
}