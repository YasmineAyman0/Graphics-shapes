/*
 * GLUT Shapes Demo
 *
 * Written by Nigel Stewart November 2003
 *
 * This program is test harness for the sphere, cone
 * and torus shapes in GLUT.
 *
 * Spinning wireframe and smooth shaded shapes are
 * displayed until the ESC or q key is pressed.  The
 * number of geometry stacks and slices can be adjusted
 * using the + and - keys.
 */
#include <windows.h>
#include <GL/glut.h>
#include <stdlib.h>
void displaysquare(void){
glClearColor(0.0, 1.0, 0.0, 0.0);
glClear(GL_COLOR_BUFFER_BIT);
glColor4f(1.0, 1.0, 1.0, 1.0);
glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
glBegin(GL_POLYGON);
glVertex3f(0.25, 0.25, 0.0);
glVertex3f(0.75, 0.25, 0.0);
glVertex3f(0.75, 0.75, 0.0);
glVertex3f(0.25, 0.75, 0.0);
glEnd();
glFlush();
}
/* Declare initial window size, position, and display mode. Open window with
"hello“ in its title bar. Call initialization routines. Register callback function
to display graphics. Enter main loop and process events. */
int main(int argc, char** argv) {
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE);
glutInitWindowSize (300, 300);
glutInitWindowPosition (400, 100);
glutCreateWindow ("solid-white-square");
glutDisplayFunc(displaysquare);
glutMainLoop();
return 0;
}
