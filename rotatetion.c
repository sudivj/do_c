#include <stdio.h>
#include <math.h>
#include <GL/gl.h>
#include <GL/glut.h>

float angle;
typedef struct axis
{
    double x, y;
} axises;
axises ap, bp, cp, dp;

void asing()
{

    // ap.x = sin(a) * 0.4;
    // ap.y = cos(a) * 0.4;
    // a = a + 90;
    // bp.x = sin(a) * 0.4;
    // bp.y = cos(a) * 0.4;
    // a = a + 90;
    // cp.x = sin(a) * 0.4;
    // cp.y = cos(a) * 0.4;
    // a = a + 90;
    // dp.x = sin(a) * 0.4;
    // dp.y = cos(a) * 0.4;
}
void draw()
{
    angle += 0.1;
    glClearColor(0, 0, 0, 0);
    glPushMatrix();
    glClear(GL_COLOR_BUFFER_BIT);
    glRotated(angle,0,0,0);
    glBegin(GL_QUADS);
    glColor3f(1,0,0);
    glVertex2f(-0.4, -0.4);
    glVertex2f(-0.4, 0.4);
    glVertex2f(0.4, 0.4);
    glVertex2f(0.4, -0.4);
    glVertex2f(-0.4, -0.4);
    // glVertex2f(-0.4, 0.4);
    // glVertex2f(0.4, 0.4);
    // glVertex2f(0.4, -0.4);
    glEnd();
    glPopMatrix();
    glutSwapBuffers();

    glutPostRedisplay();

}
// void display(void)
// {
//     angle += 0.01;
//     glClear(GL_COLOR_BUFFER_BIT);

//     glPushMatrix(); /* save current transformation state on stack */

//     glRotatef(angle, 1.5, 1.5, 0.0); /* rotate about z-axis */

//     glBegin(GL_POLYGON); /* POLYGON with 4 Verticies */
//     glVertex3f(0.25, 0.25, 0.0);
//     glVertex3f(0.75, 0.25, 0.0);
//     glVertex3f(0.75, 0.75, 0.0);
//     glVertex3f(0.25, 0.75, 0.0);
//     glEnd();

//     glPopMatrix(); /* reset to previous transformation state */

//     // glFlush();
//     glutSwapBuffers();
// }

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
    glutInitWindowSize(900, 900);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("rotation");
    glClearColor(0, 0, 0, 0);
    glutDisplayFunc(draw);

    glutMainLoop();
    glutPostRedisplay();

    return 0;
}