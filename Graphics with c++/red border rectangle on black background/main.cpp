#include <windows.h>
#include <GL/glut.h>
#include <stdlib.h>
void displaylines(void) {

    glColor4f(1.0, 0.0, 0.0, 0.0);
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_LINE_LOOP);




    glVertex2f(5.0, 10.0);
    glVertex2f(10.0, 10.0);




    glVertex2f(5.0, 10.0);
    glVertex2f(5.0, 7.0);




    glVertex2f(10.0, 10.0);
    glVertex2f(10.0, 7.0);




    glVertex2f(10.0, 10.0);
    glVertex2f(5.0, 7.0);




    glVertex2f(5.0, 7.0);
    glVertex2f(10.0, 7.0);


    glLineWidth(3.0);
    glEnd();
    glFlush();

}
int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowPosition(200, 200);
    glutInitWindowSize(500, 500);
    glutCreateWindow("Square-using-lines");
    glClearColor(0.0, 0.0, 0.0,0.0);
    glutDisplayFunc(displaylines);
    glOrtho(0.0, 15.0, 0.0, 15.0, -0.5, 1.0);
    glutMainLoop();
}
