#include <iostream>
#include <GL/gl.h>
#include <GL/glut.h>
#include <GL/glu.h>
using namespace std;
void init() { glClearColor(0.50, .03, 1.0, 1.0); }

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    glBegin(GL_LINES);
    glVertex2f(-110,0);
    glVertex2f(150,0);
    glVertex2f(0,130);
    glVertex2f(0,-110);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glVertex2f(10,20);
    glVertex2f(20,10);
    glVertex2f(15,15);
    glVertex2f(15,25);
    glEnd();

    glTranslatef(50,60,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(10,20);
    glVertex2f(20,10);
    glVertex2f(15,15);
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
    glutCreateWindow("Line Loop Translation");

    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    init();
    glutMainLoop();

    return 0;
}
