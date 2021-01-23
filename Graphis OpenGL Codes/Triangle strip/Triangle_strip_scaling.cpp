#include <iostream>
#include <GL/gl.h>
#include <GL/glut.h>
#include <GL/glu.h>
#include <string>
using namespace std;
void init(){ glClearColor(0.50, .03, 1.0, 1.0);}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    glShadeModel(GL_FLAT);

    glBegin(GL_LINES);
    glVertex2f(-100,0);
    glVertex2f(100,0);
    glVertex2f(0,100);
    glVertex2f(0,-100);
    glEnd();

    glBegin(GL_TRIANGLE_STRIP);
    glColor3f(1,1,0);
    glVertex2f(10,5);
    glVertex2f(15,10);
    glVertex2f(20,5);
    glColor3f(1,0,0);
    glVertex2f(25,10);
    glColor3f(0,1,0);
    glVertex2f(35,5);
    glEnd();

    glScalef(2,3,0);
    glBegin(GL_TRIANGLE_STRIP);
    glColor3f(1,1,0);
    glVertex2f(10,5);
    glVertex2f(15,10);
    glVertex2f(20,5);
    glColor3f(1,0,0);
    glVertex2f(25,10);
    glColor3f(0,1,0);
    glVertex2f(35,5);
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
    glutCreateWindow("Triangle Strip Scaling");

    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    init();
    glutMainLoop();
    return 0;
}
