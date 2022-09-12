#include <stdio.h>
#include <stdlib.h>
#include <GL/glut.h>
#include <GL/gl.h>

double gravity = 0.0, FALL_SPEED = 0.0008, falling, xposition, speedx;
int up = 0, pressed = 0;

void draw()
{
    glClearColor(0, 0, 0, 0);
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POLYGON);
    glColor3f(1, 0, 0);

    falling += FALL_SPEED;
    if (gravity + (-0.1) < -1)
    {
        // printf("True");
        falling = 0;
        if (gravity + (-0.1) < -1)
        {
            gravity = (-1 + 0.1);
        }
        if (gravity + (0.1) > 1)
        {
            gravity = 1;
        }
        falling = 0;
    }
    if (gravity + (0.1) > 1)
    {
        falling = 0;
        gravity = 1 - 0.1;
        falling = 0;
    }
    // gravity -= falling;
    speedx = speedx * 0.8;
    xposition += speedx;
    glVertex2d(xposition + (-.1), gravity + .1);
    glVertex2d(xposition + (-.1), gravity + -.1);
    glVertex2d(xposition + .1, gravity + -.1);
    glVertex2d(xposition + .1, gravity + .1);
    glEnd();
    glutSwapBuffers();

    glutPostRedisplay();
}
void keyboard(int key, int x, int y)
{

    switch (key)
    {
    case GLUT_KEY_DOWN:
        if (falling == 0)
        {
            falling -= 0.03;
        }

        break;
    case GLUT_KEY_RIGHT:
        speedx = 0.05;
        break;
    case GLUT_KEY_LEFT:
        speedx = -0.05;
        break;
    default:
        gravity -= falling;
        break;
    }
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
    glutInitWindowSize(900, 900);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Gravity Test");
    glClearColor(0, 0, 0, 0);
    glutDisplayFunc(draw);

    glutSpecialFunc(keyboard);
    xposition += speedx;

    glutMainLoop();
    glutPostRedisplay();

    return 0;
}