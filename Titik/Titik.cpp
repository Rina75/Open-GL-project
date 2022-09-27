#include <windows.h>
#ifdef _APPLE_
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <stdlib.h>
#include <windows.h>
void objek(void) {

    glBegin(GL_POINTS);
        glColor3f(0.0,0.0,1.0);
        glVertex3f(0.3, -0.3, 0.0);

        glColor3f(1.0,1.0,0.0);
        glVertex3f(0.3, 0.0, 0.0);

        glColor3f(1.0,1.0,1.0);
        glVertex3f(0.0, 0.3, 0.0);

        glColor3f(1.0,0.0,0.0);
        glVertex3f(-0.3, 0.0, 0.0);

        glColor3f(0.0,1.0,0.0);
        glVertex3f(0.0, -0.3, 0.0);

        glColor3f(0.0,1.0,1.0);
        glVertex3f(-0.3, 0.3, 0.0);
    glEnd();
    glFlush();

}
void display(void){
    glClear (GL_COLOR_BUFFER_BIT);
    glPointSize(2.0);
    glutSwapBuffers();

}

int main(int argc, char **argv)
{
glutInit(&argc, argv);
glutCreateWindow("E1E121089_gbrTitik");
glutDisplayFunc(objek);
glutMainLoop();
return 0;
}

