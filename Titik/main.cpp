#include <windows.h>
#include <GL/glut.h>
#include <math.h>

void display(void) {
    glClear (GL_COLOR_BUFFER_BIT);
    glPointSize(4.0);
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


int main(int argc, char **argv){
    glutInit(&argc, argv);
    glutCreateWindow("E1E121089_gbrTitik");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}

