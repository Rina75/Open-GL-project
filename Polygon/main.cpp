#include <windows.h>
#include <GL/glut.h>
#include <math.h>

void display(){

    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_POLYGON);

         glColor3f(0.0, 1.0, 1.0);

         glVertex2f(-0.4, -0.2);   glVertex2f(-0.1, 0.0);
         glVertex2f(-0.5, 0.2);    glVertex2f(0.0, 0.9);
         glVertex2f(0.8, 0.3);     glVertex2f(0.3, 0.0);
         glVertex2f(0.5, -0.5);    glVertex2f(0.0, -0.7);

    glEnd();
 glFlush();
}

int main(int argc, char** argv){
     glutCreateWindow("E1E121089_Polygon");
     glutDisplayFunc(display);
     glutMainLoop();
}
