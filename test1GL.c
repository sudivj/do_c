#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <GL/gl.h>
#include <GL/glut.h>

int winx = 800, winy = 800;
double lenx;
double leny;
double posx;
double posy;
double fruitx;
double fruity;
double move = 0.2;

void replace()
{
    fruitx = (((rand() % 4) + 1) * 2) * 0.1;
    if ((rand() % 2) + 0 == 0)
    {
        fruitx = fruitx * -1;
    }
    fruity = (((rand() % 4) + 1) * 2) * 0.1;
    if ((rand() % 2) + 0 == 0)
    {
        fruity = fruity * -1;
    }
    while (fruitx == posx && fruity == posy)
    {
        if (fruitx == posx && fruity == posy)
        {
            fruitx = (((rand() % 4) + 1) * 2 * 2) * 0.1;
            if ((rand() % 2) + 0 == 0)
            {
                fruitx = fruitx * -1;
            }
            fruity = (((rand() % 4) + 1) * 2 * 2) * 0.1;
            if ((rand() % 2) + 0 == 0)
            {
                fruity = fruity * -1;
            }
        }
    }
}
void setup(int winx, int winy, int x, int y)
{
    lenx = (winx / (x * 100)) * 0.1;
    leny = (winy / (y * 100)) * 0.1;
}
void draw()
{
    glClearColor(0, 0, 0, 0);
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_QUADS);
    glColor3f(1, 1, 0.2);
    glVertex2f((0.08 * -1) + fruitx, 0.08 + fruity);
    glVertex2f((0.08 * -1) + fruitx, (0.08 * -1) + fruity);
    glVertex2f(0.08 + fruitx, (0.08 * -1) + fruity);
    glVertex2f(0.08 + fruitx, 0.08 + fruity);
    glColor3f(1, 0, 0);
    glVertex2f((lenx * -1) + posx, leny + posy);
    glVertex2f((lenx * -1) + posx, (leny * -1) + posy);
    glVertex2f(lenx + posx, (leny * -1) + posy);
    glVertex2f(lenx + posx, leny + posy);
    glutPostRedisplay();
    // if (fruitx == posx && fruity == posy)
    // {
    //     replace();
    // }
    glEnd();
    glFlush();
    glutSwapBuffers();
}
void keyboard(int key, int x, int y)
{
    switch (key)
    {
    case GLUT_KEY_UP:
        if (posy < .8)
        {
            if (posx == fruitx && posy == fruity)
            {
                glutPostRedisplay();
                replace();
            }
            posy += move;
            printf("%.1f : %.1f\n", fruitx, fruity);
            printf("%.1f : %.1f\n", posx, posy);
            if (posy == fruity && posx == fruitx)
            {
                printf("\nhari");
            }
            else
            {
                printf("\nharina");
            }           
            
            glutPostRedisplay();
        }
        break;
    case GLUT_KEY_DOWN:
        if (posy > -.8)
        {
            if (posx == fruitx && posy == fruity)
            {
                glutPostRedisplay();
                replace();
            }
            posy -= move;
            glutPostRedisplay();
            printf("%.1f : %.1f\n", fruitx, fruity);
            printf("%.1f : %.1f\n", posx, posy);
            if (posy == fruity && posx == fruitx)
            {
                printf("\nhari");
            }
            else
            {
                printf("\nharina");
            }            
        }

        break;
    case GLUT_KEY_RIGHT:
        if (posx < .8)
        {
            if (posx == fruitx && posy == fruity)
            {
                glutPostRedisplay();
                replace();
            }
            posx += move;
            glutPostRedisplay();
            printf("%.1f : %.1f\n", fruitx, fruity);
            printf("%.1f : %.1f\n", posx, posy);
            if (posy == fruity && posx == fruitx)
            {
                printf("\nhari");
            }
            else
            {
                printf("\nharina");
            }            
        }

        break;
    case GLUT_KEY_LEFT:
        if (posx > -.8)
        {
            if (posx == fruitx && posy == fruity)
            {
                glutPostRedisplay();
                replace();
            }
            posx -= move;
            glutPostRedisplay();
            printf("%.1f : %.1f\n", fruitx, fruity);
            printf("%.1f : %.1f\n", posx, posy);
            if (posy == fruity && posx == fruitx)
            {
                printf("\nhari");
            }
            else
            {
                printf("\nharina");
            }            
        }

        break;
    }
}
int main(int argc, char **argv)
{
    setup(winx, winy, 6, 6);
    replace();
    glutInit(&argc, argv);

    glutInitWindowSize(winx, winy);
    glutInitWindowPosition(50, 50);

    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH | GLUT_RGB);

    glutCreateWindow("Game");

    glutDisplayFunc(draw);
    glutSpecialFunc(keyboard);
    glutPostRedisplay();

    glutMainLoop();
    scanf("");
}