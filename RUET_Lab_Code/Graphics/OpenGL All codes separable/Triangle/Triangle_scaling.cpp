#include <iostream>
#include <GL/gl.h>
#include <GL/glut.h>
#include <GL/glu.h>
using namespace std;

void init() {
	 glClearColor(0.50, .03, 1.0, 1.0);
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    glBegin(GL_LINES);
    glVertex2f(-100,0);
    glVertex2f(100,0);
    glVertex2f(0,100);
    glVertex2f(0,-100);
    glEnd();

    glBegin(GL_TRIANGLES);

    glVertex2f(10,10);
    glColor3f(0.0f, 1.0f, 0.0f); // Green
    glVertex2f(20,10);
    glVertex2f(15,20);
    glEnd();

    glScalef(3,4,0);
    glBegin(GL_TRIANGLES);
    //
    glVertex2f(10,10);
    glColor3f(0.5f, .420f, 0.40f); // Green
    glVertex2f(20,10);
    glVertex2f(15,20);
    glEnd();

    glutSwapBuffers();

}

void reshape(int w, int h){
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
	glutCreateWindow("Triangle Scaling");

	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	init();
	glutMainLoop();

	return 0;
}
