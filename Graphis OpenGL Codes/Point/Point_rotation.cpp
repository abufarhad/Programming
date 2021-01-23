#include <iostream>
#include <GL/gl.h>
#include <GL/glut.h>
#include <GL/glu.h>
#include <string>
using namespace std;

void init()
{
    glClearColor(0.50, .03, 1.0, 1.0);
}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    glBegin(GL_LINES);
    glVertex2f(-100,0);
    glVertex2f(100,0);
    glVertex2f(0,100);
    glVertex2f(0,-100);
    glEnd();

    glPointSize(15.0);
    glBegin(GL_POINTS);
    glVertex2f(15,25);
    glEnd();

    glRotatef(180,0,0,1);
    glBegin(GL_POINTS);
    glVertex2f(15,25);
    glEnd();

    glutSwapBuffers();

}

void reshape(int w, int h)
{
    glViewport(0,0,(GLsizei)w,(GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-100,100,-100,100);
    glMatrixMode(GL_MODELVIEW);
}

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
    glutInitWindowPosition(300,100);
    glutInitWindowSize(900,600);
    glutCreateWindow("Points Rotation");

    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    init();
    glutMainLoop();

    return 0;
}
