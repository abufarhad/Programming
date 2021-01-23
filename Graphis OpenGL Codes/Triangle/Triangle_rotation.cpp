#include <iostream>
#include <GL/gl.h>
#include <GL/glut.h>
#include <GL/glu.h>
using namespace std;
void init(){ glClearColor(0.50, .03, 1.0, 1.0);}

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

    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.0f, 0.0f); // Red
    glVertex2f(-30,-20);
    glColor3f(0.0f, 1.0f, 0.0f); // Green
    glVertex2f(30,-20);
    glColor3f(0.0f, 0.0f, 1.0f); // Blue
    glVertex2f(0,30);



    glEnd();

    glRotatef(180,0,0,1);
    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.0f, 0.0f); // Red
    glVertex2f(-30,-20);
    glColor3f(0.0f, 1.0f, 0.0f); // Green
    glVertex2f(30,-20);
    glColor3f(0.0f, 0.0f, 1.0f); // Blue
    glVertex2f(0,30);
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
    glutInitWindowPosition(200,100);
    glutInitWindowSize(900,700);
    glutCreateWindow("Triangle Rotation");

    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    init();
    glutMainLoop();
    return 0;
}
