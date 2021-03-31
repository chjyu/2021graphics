#include <GL/glut.h>
int N=0, vx[3000], vy[3000];
float angle=0;
void display()
{

    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glPushMatrix(); ///備份矩陣
        glRotatef(angle, 0, 0, 1); ///旋轉角度
        glBegin(GL_LINE_LOOP);
        for(int i=0; i<N; i++){
            glVertex2f((vx[i]-150)/150.0, -(vy[i]-150)/150.0);
    }
    glEnd();
    glPopMatrix(); ///還原矩陣
    glutSwapBuffers();

}
void keyboard( unsigned char key, int x, int y)
{
    angle++; ///角度增加
    display();
}
void motion(int x,int y)
{
    vx[N]=x; vy[N]=y;
    N++;
    display();
}

int main(int argc, char *argv[])

{

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("08160910 GOOD!");
    glutDisplayFunc(display);
    glutKeyboardFunc( keyboard ); ///按空白建，就會轉動
    glutMotionFunc(motion);
    glutMainLoop();

}
