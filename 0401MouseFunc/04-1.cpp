#include <GL/glut.h>
#include <stdio.h>

void display()///�ϥ�GLUT�~���{��
{

    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glutSolidTeapot(0.3);
    glutSwapBuffers();///�洫�⭿��buffers

}
void mouse(int button, int state, int x, int y)
{
    printf("button:%d state:%d x:%d y:%d\n",button,state,x,y);

}

int main(int argc, char *argv[])

{

    glutInit(&argc, argv);///��l��GLUT
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);///��l��Display�\��
    glutCreateWindow("�ڬO08160910 GOOD!");///�إ�GLUT����
    glutDisplayFunc(display);
    glutMouseFunc( mouse);
    glutMainLoop();

}
