#include <GL/glut.h>
#include <math.h>
void display()

{

    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glBegin(GL_POLYGON);////����R��
        glColor3f(228/255.0, 36/255.0, 25/255.0);
        glVertex2f((82-150)/150.0, -(126-150)/150.0);
        glVertex2f((88-150)/150.0, -(117-150)/150.0);
        glVertex2f((91-150)/150.0, -(107-150)/150.0);
        glVertex2f((89-150)/150.0, -(96-150)/150.0);
        glVertex2f((84-150)/150.0, -(92-150)/150.0);
        glVertex2f((78-150)/150.0, -(91-150)/150.0);
        glVertex2f((72-150)/150.0, -(94-150)/150.0);
        glVertex2f((70-150)/150.0, -(101-150)/150.0);
        glVertex2f((69-150)/150.0, -(107-150)/150.0);
        glVertex2f((64-150)/150.0, -(104-150)/150.0);
        glVertex2f((60-150)/150.0, -(100-150)/150.0);
        glVertex2f((55-150)/150.0, -(97-150)/150.0);
        glVertex2f((51-150)/150.0, -(98-150)/150.0);
        glVertex2f((48-150)/150.0, -(103-150)/150.0);
        glVertex2f((49-150)/150.0, -(112-150)/150.0);
        glVertex2f((54-150)/150.0, -(120-150)/150.0);
        glVertex2f((61-150)/150.0, -(126-150)/150.0);
        glVertex2f((69-150)/150.0, -(130-150)/150.0);
        glVertex2f((78-150)/150.0, -(133-150)/150.0);
    glEnd();


    glBegin(GL_POLYGON);////�y
        glColor3f(222/255.0, 153/255.0, 36/255.0);
        glVertex2f((81-150)/150.0, -(72-150)/150.0);
        glVertex2f((84-150)/150.0, -(62-150)/150.0);
        glVertex2f((90-150)/150.0, -(57-150)/150.0);
        glVertex2f((98-150)/150.0, -(51-150)/150.0);
        glVertex2f((106-150)/150.0, -(46-150)/150.0);
        glVertex2f((116-150)/150.0, -(42-150)/150.0);
        glVertex2f((127-150)/150.0, -(39-150)/150.0);
        glVertex2f((138-150)/150.0, -(38-150)/150.0);
        glVertex2f((150-150)/150.0, -(39-150)/150.0);
        glVertex2f((162-150)/150.0, -(41-150)/150.0);
        glVertex2f((174-150)/150.0, -(45-150)/150.0);
        glVertex2f((185-150)/150.0, -(52-150)/150.0);
        glVertex2f((193-150)/150.0, -(60-150)/150.0);
        glVertex2f((200-150)/150.0, -(69-150)/150.0);
        glVertex2f((205-150)/150.0, -(82-150)/150.0);
        glVertex2f((208-150)/150.0, -(95-150)/150.0);
        glVertex2f((208-150)/150.0, -(111-150)/150.0);
        glVertex2f((205-150)/150.0, -(121-150)/150.0);
        glVertex2f((199-150)/150.0, -(134-150)/150.0);
        glVertex2f((190-150)/150.0, -(144-150)/150.0);
        glVertex2f((179-150)/150.0, -(152-150)/150.0);
        glVertex2f((168-150)/150.0, -(157-150)/150.0);
        glVertex2f((157-150)/150.0, -(160-150)/150.0);
        glVertex2f((127-150)/150.0, -(161-150)/150.0);
        glVertex2f((108-150)/150.0, -(152-150)/150.0);
        glVertex2f((101-150)/150.0, -(140-150)/150.0);
        glVertex2f((96-150)/150.0, -(128-150)/150.0);
        glVertex2f((90-150)/150.0, -(121-150)/150.0);
        glVertex2f((87-150)/150.0, -(118-150)/150.0);
        glVertex2f((90-150)/150.0, -(108-150)/150.0);
        glVertex2f((76-150)/150.0, -(91-150)/150.0);
        glVertex2f((77-150)/150.0, -(82-150)/150.0);
    glEnd();

    glBegin(GL_POLYGON);////����
        glColor3f(222/255.0, 153/255.0, 36/255.0);
        glVertex2f((94-150)/150.0, -(55-150)/150.0);
        glVertex2f((92-150)/150.0, -(50-150)/150.0);
        glVertex2f((92-150)/150.0, -(45-150)/150.0);
        glVertex2f((93-150)/150.0, -(40-150)/150.0);
        glVertex2f((97-150)/150.0, -(35-150)/150.0);
        glVertex2f((104-150)/150.0, -(31-150)/150.0);
        glVertex2f((112-150)/150.0, -(33-150)/150.0);
        glVertex2f((120-150)/150.0, -(42-150)/150.0);
    glEnd();

    glBegin(GL_POLYGON);////�k��
        glColor3f(222/255.0, 153/255.0, 36/255.0);
        glVertex2f((163-150)/150.0, -(42-150)/150.0);
        glVertex2f((166-150)/150.0, -(37-150)/150.0);
        glVertex2f((171-150)/150.0, -(34-150)/150.0);
        glVertex2f((178-150)/150.0, -(32-150)/150.0);
        glVertex2f((185-150)/150.0, -(34-150)/150.0);
        glVertex2f((191-150)/150.0, -(40-150)/150.0);
        glVertex2f((192-150)/150.0, -(48-150)/150.0);
        glVertex2f((191-150)/150.0, -(55-150)/150.0);
        glVertex2f((190-150)/150.0, -(62-150)/150.0);
    glEnd();

    glBegin(GL_POLYGON);////����&���}
        glColor3f(222/255.0, 153/255.0, 36/255.0);
        glVertex2f((117-150)/150.0, -(156-150)/150.0);
        glVertex2f((116-150)/150.0, -(166-150)/150.0);
        glVertex2f((114-150)/150.0, -(176-150)/150.0);
        glVertex2f((112-150)/150.0, -(190-150)/150.0);
        glVertex2f((119-150)/150.0, -(201-150)/150.0);
        glVertex2f((108-150)/150.0, -(210-150)/150.0);
        glVertex2f((109-150)/150.0, -(265-150)/150.0);
        glVertex2f((115-150)/150.0, -(272-150)/150.0);
        glVertex2f((123-150)/150.0, -(273-150)/150.0);
        glVertex2f((132-150)/150.0, -(273-150)/150.0);
        glVertex2f((137-150)/150.0, -(266-150)/150.0);
        glVertex2f((140-150)/150.0, -(254-150)/150.0);
        glVertex2f((145-150)/150.0, -(243-150)/150.0);
        glVertex2f((152-150)/150.0, -(238-150)/150.0);
        glVertex2f((158-150)/150.0, -(235-150)/150.0);
        glVertex2f((186-150)/150.0, -(200-150)/150.0);
        glVertex2f((182-150)/150.0, -(186-150)/150.0);
        glVertex2f((182-150)/150.0, -(155-150)/150.0);
        glVertex2f((179-150)/150.0, -(144-150)/150.0);
    glEnd();

    glBegin(GL_POLYGON);////�k�}
        glColor3f(222/255.0, 153/255.0, 36/255.0);
        glVertex2f((158-150)/150.0, -(235-150)/150.0);
        glVertex2f((166-150)/150.0, -(233-150)/150.0);
        glVertex2f((177-150)/150.0, -(234-150)/150.0);
        glVertex2f((181-150)/150.0, -(235-150)/150.0);
        glVertex2f((188-150)/150.0, -(239-150)/150.0);
        glVertex2f((196-150)/150.0, -(245-150)/150.0);
        glVertex2f((203-150)/150.0, -(247-150)/150.0);
        glVertex2f((211-150)/150.0, -(246-150)/150.0);
        glVertex2f((215-150)/150.0, -(240-150)/150.0);
        glVertex2f((217-150)/150.0, -(233-150)/150.0);
        glVertex2f((217-150)/150.0, -(226-150)/150.0);
        glVertex2f((213-150)/150.0, -(220-150)/150.0);
        glVertex2f((208-150)/150.0, -(214-150)/150.0);
        glVertex2f((202-150)/150.0, -(209-150)/150.0);
        glVertex2f((195-150)/150.0, -(206-150)/150.0);
        glVertex2f((189-150)/150.0, -(205-150)/150.0);
        glVertex2f((180-150)/150.0, -(197-150)/150.0);
    glEnd();

    glBegin(GL_POLYGON);////�k��
        glColor3f(222/255.0, 153/255.0, 36/255.0);
        glVertex2f((178-150)/150.0, -(183-150)/150.0);
        glVertex2f((186-150)/150.0, -(192-150)/150.0);
        glVertex2f((193-150)/150.0, -(196-150)/150.0);
        glVertex2f((200-150)/150.0, -(199-150)/150.0);
        glVertex2f((209-150)/150.0, -(200-150)/150.0);
        glVertex2f((217-150)/150.0, -(199-150)/150.0);
        glVertex2f((222-150)/150.0, -(196-150)/150.0);
        glVertex2f((224-150)/150.0, -(190-150)/150.0);
        glVertex2f((223-150)/150.0, -(185-150)/150.0);
        glVertex2f((219-150)/150.0, -(182-150)/150.0);
        glVertex2f((213-150)/150.0, -(179-150)/150.0);
        glVertex2f((208-150)/150.0, -(178-150)/150.0);
        glVertex2f((202-150)/150.0, -(174-150)/150.0);
        glVertex2f((195-150)/150.0, -(169-150)/150.0);
        glVertex2f((188-150)/150.0, -(162-150)/150.0);
        glVertex2f((177-150)/150.0, -(148-150)/150.0);
    glEnd();

    glBegin(GL_POLYGON);////����
        glColor3f(222/255.0, 153/255.0, 36/255.0);
        glVertex2f((110-150)/150.0, -(211-150)/150.0);
        glVertex2f((107-150)/150.0, -(205-150)/150.0);
        glVertex2f((105-150)/150.0, -(199-150)/150.0);
        glVertex2f((102-150)/150.0, -(194-150)/150.0);
        glVertex2f((97-150)/150.0, -(187-150)/150.0);
        glVertex2f((90-150)/150.0, -(180-150)/150.0);
        glVertex2f((84-150)/150.0, -(173-150)/150.0);
        glVertex2f((79-150)/150.0, -(166-150)/150.0);
        glVertex2f((75-150)/150.0, -(159-150)/150.0);
        glVertex2f((71-150)/150.0, -(149-150)/150.0);
        glVertex2f((69-150)/150.0, -(143-150)/150.0);
        glVertex2f((68-150)/150.0, -(135-150)/150.0);
        glVertex2f((68-150)/150.0, -(128-150)/150.0);
        glVertex2f((73-150)/150.0, -(124-150)/150.0);
        glVertex2f((80-150)/150.0, -(122-150)/150.0);
        glVertex2f((87-150)/150.0, -(125-150)/150.0);
        glVertex2f((93-150)/150.0, -(133-150)/150.0);
        glVertex2f((98-150)/150.0, -(144-150)/150.0);
        glVertex2f((103-150)/150.0, -(154-150)/150.0);
        glVertex2f((110-150)/150.0, -(161-150)/150.0);
        glVertex2f((121-150)/150.0, -(164-150)/150.0);
    glEnd();




    glutSwapBuffers();

}

int main(int argc, char *argv[])

{

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("�ڬO08160910 GOOD!");
    glutDisplayFunc(display);
    glutMainLoop();

}