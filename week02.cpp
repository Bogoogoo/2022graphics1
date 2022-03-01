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

#include <GL/glut.h> ///�ϥ�GLUT�~��,²�Ƶ{��

void display()
{
    glClear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );///�e�ϫe, ���M�e��

    glColor3f(1,1,0); ///�]�w��m
    ///glutSolidTeapot(0.3); ///��ߪ�����
    glBegin(GL_POLYGON);
    glColor3f(1,0,0);
    glVertex2f(-1,-1);

    glColor3f(0,1,0);
    glVertex2f(+1,-1);

    glColor3f(0,0,1);
    glVertex2f(0,+1);
    glEnd();


    glutSwapBuffers();///�e�n��,�洫�X��
}

int main(int argc, char** argv) ///main()�D�禡 �i����
{
    glutInit( &argc, argv); ///��Ѽ�,�e�� glutInit ��l��
    glutInitDisplayMode( GLUT_DOUBLE | GLUT_DEPTH ); ///���w�Ű� + 3D�`�ץ\��
    glutCreateWindow("��02�g���{���@!"); ///�} GLUT ����

    glutDisplayFunc(display); ///�Ψ���ܪ��禡

    glutMainLoop(); ///�D�n���{���j��
}
