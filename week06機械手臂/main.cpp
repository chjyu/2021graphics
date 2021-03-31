#include <GL/glut.h>
float angle=0;
void hand(){
    glPushMatrix();
        glScalef(0.5, 0.1, 0.1);///細長的
        glColor3f(0,0,1);///藍色的
        glutSolidCube(1);///方塊
    glPopMatrix();

}
void display()
{

    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glPushMatrix();
        glTranslatef(0.25,0.25,0);
        glRotatef( angle, 0,0,1);
        glTranslatef(0.25,0,0);
        hand();
        glPushMatrix();
            glTranslatef(0.25,0,0);
            glRotatef( angle, 0,0,1);
            glTranslatef(0.25,0,0);
            hand();
        glPopMatrix();
    glPopMatrix();

    glPushMatrix();
        glTranslatef(-0.25,0.25,0);
        glRotatef( -angle, 0,0,1);
        glTranslatef(-0.25,0,0);
        hand();
        glPushMatrix();
            glTranslatef(-0.25,0,0);
            glRotatef( -angle, 0,0,1);
            glTranslatef(-0.25,0,0);
            hand();
        glPopMatrix();
    glPopMatrix();

    glutSwapBuffers();
    angle++;
}


int main(int argc, char *argv[])

{

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("08160910 GOOD!");
    glutDisplayFunc(display);
    glutIdleFunc(display);
    glutMainLoop();

}
