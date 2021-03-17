#include <GL/glut.h>
#include <stdio.h>

void display()///使用GLUT外掛程式
{

    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glutSolidTeapot(0.3);
    glutSwapBuffers();///交換兩倍的buffers

}
void mouse(int button, int state, int x, int y)
{
    printf("button:%d state:%d x:%d y:%d\n",button,state,x,y);

}

int main(int argc, char *argv[])

{

    glutInit(&argc, argv);///初始化GLUT
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);///初始化Display功能
    glutCreateWindow("我是08160910 GOOD!");///建立GLUT視窗
    glutDisplayFunc(display);
    glutMouseFunc( mouse);
    glutMainLoop();

}
