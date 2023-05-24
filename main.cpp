#include <GL/gl.h>
#include <GL/glut.h>
#include <stdlib.h>
#include<stdio.h>
void init (void)
{
glClearColor (1.0, 0.0, 0.0, 0.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(0.0, 100.0, 0.0, 100.0, -1.0, 1.0);
}
void display(void)
{
glClear (GL_COLOR_BUFFER_BIT);
//for white quad..
glBegin(GL_QUADS);
glColor3f (0.0, 0.0, 0.0);
glVertex2i(5, 5);
glVertex2i(5, 95);
glVertex2i(95, 95);
glVertex2i(95, 5);
glEnd();
//for black quad..
glBegin(GL_QUADS);
glColor3f (0.0, 0.0, 0.0);
glVertex2i(10, 10);
glVertex2i(10, 90);
glVertex2i(90, 90);
glVertex2i(90, 10);
glEnd();
//for bottom green triangles..
glBegin(GL_TRIANGLES);
glColor3f (0.0, 1.0, 0.0);
glVertex2i(10, 10);
glVertex2i(20, 10);
glVertex2i(15, 15);
glEnd();
glBegin(GL_TRIANGLES);
glColor3f (0.0, 1.0, 0.0);
glVertex2i(20, 10);
glVertex2i(30, 10);
glVertex2i(25, 15);
glEnd();
glBegin(GL_TRIANGLES);
glColor3f (0.0, 1.0, 0.0);
glVertex2i(30, 10);
glVertex2i(40, 10);
glVertex2i(35, 15);
glEnd();
glBegin(GL_TRIANGLES);
glColor3f (0.0, 1.0, 0.0);
glVertex2i(40, 10);
glVertex2i(50, 10);
glVertex2i(45, 15);
glEnd();
glBegin(GL_TRIANGLES);
glColor3f (0.0, 1.0, 0.0);
glVertex2i(50, 10);
glVertex2i(60, 10);
glVertex2i(55, 15);
glEnd();
glBegin(GL_TRIANGLES);
glColor3f (0.0, 1.0, 0.0);
glVertex2i(60, 10);
glVertex2i(70, 10);
glVertex2i(65, 15);
glEnd();
glBegin(GL_TRIANGLES);
glColor3f (0.0, 1.0, 0.0);
glVertex2i(70, 10);
glVertex2i(80, 10);
glVertex2i(75, 15);
glEnd();
glBegin(GL_TRIANGLES);
glColor3f (0.0, 1.0, 0.0);
glVertex2i(80, 10);
glVertex2i(90, 10);
glVertex2i(85, 15);
glEnd();
//for upper green triangles..
glBegin(GL_TRIANGLES);
glColor3f (0.0, 1.0, 0.0);
glVertex2i(10, 90);
glVertex2i(20, 90);
glVertex2i(15, 85);
glEnd();
glBegin(GL_TRIANGLES);
glColor3f (0.0, 1.0, 0.0);
glVertex2i(20, 90);
glVertex2i(30, 90);
glVertex2i(25, 85);
glEnd();
glBegin(GL_TRIANGLES);
glColor3f (0.0, 1.0, 0.0);
glVertex2i(30, 90);
glVertex2i(40, 90);
glVertex2i(35, 85);
glEnd();
glBegin(GL_TRIANGLES);
glColor3f (0.0, 1.0, 0.0);
glVertex2i(40, 90);
glVertex2i(50, 90);
glVertex2i(45, 85);
glEnd();
glBegin(GL_TRIANGLES);
glColor3f (0.0, 1.0, 0.0);
glVertex2i(50, 90);
glVertex2i(60, 90);
glVertex2i(55, 85);
glEnd();
glBegin(GL_TRIANGLES);
glColor3f (0.0, 1.0, 0.0);
glVertex2i(60, 90);
glVertex2i(70, 90);
glVertex2i(65, 85);
glEnd();
glBegin(GL_TRIANGLES);
glColor3f (0.0, 1.0, 0.0);
glVertex2i(70, 90);
glVertex2i(80, 90);
glVertex2i(75, 85);
glEnd();
glBegin(GL_TRIANGLES);
glColor3f (0.0, 1.0, 0.0);
glVertex2i(80, 90);
glVertex2i(90, 90);
glVertex2i(85, 85);
glEnd();
//for left yellow triangles..
glBegin(GL_TRIANGLES);
glColor3f (1.0, 1.0, 1.0);
glVertex2i(90, 10);
glVertex2i(90, 20);
glVertex2i(85, 15);
glEnd();
glBegin(GL_TRIANGLES);
glColor3f (1.0, 1.0, 1.0);
glVertex2i(90, 20);
glVertex2i(90, 30);
glVertex2i(85, 25);
glEnd();
glBegin(GL_TRIANGLES);
glColor3f (1.0, 1.0, 1.0);
glVertex2i(90, 30);
glVertex2i(90, 40);
glVertex2i(85, 35);
glEnd();
glBegin(GL_TRIANGLES);
glColor3f (1.0, 1.0, 1.0);
glVertex2i(90, 40);
glVertex2i(90, 50);
glVertex2i(85, 45);
glEnd();
glBegin(GL_TRIANGLES);
glColor3f (1.0, 1.0, 1.0);
glVertex2i(90, 50);
glVertex2i(90, 60);
glVertex2i(85, 55);
glEnd();
glBegin(GL_TRIANGLES);
glColor3f (1.0, 1.0, 1.0);
glVertex2i(90, 60);
glVertex2i(90, 70);
glVertex2i(85, 65);
glEnd();
glBegin(GL_TRIANGLES);
glColor3f (1.0, 1.0, 1.0);
glVertex2i(90, 70);
glVertex2i(90, 80);
glVertex2i(85, 75);
glEnd();
glBegin(GL_TRIANGLES);
glColor3f (1.0, 1.0, 1.0);
glVertex2i(90, 80);
glVertex2i(90, 90);
glVertex2i(85, 85);
glEnd();
//for right yellow triangles..
glBegin(GL_TRIANGLES);
glColor3f (1.0, 1.0, 0.0);
glVertex2i(10, 10);
glVertex2i(10, 20);
glVertex2i(15, 15);
glEnd();
glBegin(GL_TRIANGLES);
glColor3f (1.0, 1.0, 0.0);
glVertex2i(10, 20);
glVertex2i(10, 30);
glVertex2i(15, 25);
glEnd();
glBegin(GL_TRIANGLES);
glColor3f (1.0, 1.0, 0.0);
glVertex2i(10, 30);
glVertex2i(10, 40);
glVertex2i(15, 35);
glEnd();
glBegin(GL_TRIANGLES);
glColor3f (1.0, 1.0, 0.0);
glVertex2i(10, 40);
glVertex2i(10, 50);
glVertex2i(15, 45);
glEnd();
glBegin(GL_TRIANGLES);
glColor3f (1.0, 1.0, 0.0);
glVertex2i(10, 50);
glVertex2i(10, 60);
glVertex2i(15, 55);
glEnd();
glBegin(GL_TRIANGLES);
glColor3f (1.0, 1.0, 0.0);
glVertex2i(10, 60);
glVertex2i(10, 70);
glVertex2i(15, 65);
glEnd();
glBegin(GL_TRIANGLES);
glColor3f (1.0, 1.0, 0.0);
glVertex2i(10, 70);
glVertex2i(10, 80);
glVertex2i(15, 75);
glEnd();
glBegin(GL_TRIANGLES);
glColor3f (1.0, 1.0, 0.0);
glVertex2i(10, 80);
glVertex2i(10, 90);
glVertex2i(15, 85);
glEnd();
//for red quard
glBegin(GL_QUADS);
glColor3f (1.0, 0.0, 0.0);
glVertex2i(15, 15);
glVertex2i(15, 85);
glVertex2i(85, 85);
glVertex2i(85, 15);
glEnd();
//for black rombus..1
glBegin(GL_QUADS);
glColor3f(1.0, 1.0, 0.0);
glVertex2i(15,15);
glVertex2i(15, 35);
glVertex2i(35, 35);
glVertex2i(35, 15);
glEnd();

//for black rombus..2
glBegin(GL_QUADS);
glColor3f(1.0, 1.0, 0.0);
glVertex2i(85, 15);
glVertex2i(85, 35);
glVertex2i(65, 35);
glVertex2i(65, 15);
glEnd();
//for black rombus..3
glBegin(GL_QUADS);
glColor3f(1.0, 1.0, 0.0);
glVertex2i(15, 85);
glVertex2i(35, 85);
glVertex2i(35, 65);
glVertex2i(15, 65);
glEnd();

//for black rombus..4
glBegin(GL_QUADS);
glColor3f(1.0, 1.0, 0.0);
glVertex2i(85, 85);
glVertex2i(85, 65);
glVertex2i(65, 65);
glVertex2i(65, 85);
glEnd();


//for hexagon
glBegin(GL_POLYGON);
glColor3f(0.0, 0.5, 0.5);
glVertex2i(70, 50);
glVertex2i(40, 70);
glVertex2i(50, 70);
glVertex2i(30, 50);
glVertex2i(50, 30);
glVertex2i(40, 30);
glEnd();
glBegin(GL_TRIANGLES);
glColor3f (0.0, 0.5, 0.5);
glVertex2i(30, 50);
glVertex2i(20, 60);
glVertex2i(20, 40);
glEnd();
glutSwapBuffers();
}
int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_DOUBLE |
GLUT_RGB);
glutInitWindowSize (300, 300);
glutInitWindowPosition (100, 100);
glutCreateWindow ("Lab_Project_payel");
init ();
glutDisplayFunc(display);
glutMainLoop();
return 0;
}
