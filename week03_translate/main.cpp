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
#include <GL/glut.h>
void myteapot(float x, float y)
{
    glPushMatrix();
    glTranslatef(x, y,0);
    glColor3f(1,1,0);
    glutSolidTeapot(0.3);
    glPopMatrix();
}

void display()

{
    glClear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );
    myteapot(0.5,0.5);
    myteapot(0.5,-0.5);
    myteapot(-0.5,0.5);
    myteapot(-0.5,-0.5);
    glutSwapBuffers();
}

int main(int argc, char** argv)
{
    glutInit( &argc, argv);
    glutInitDisplayMode( GLUT_DOUBLE | GLUT_DEPTH );
    glutCreateWindow("week03 ²¾°Ê");

    glutDisplayFunc(display);

    glutMainLoop() ;
    }
