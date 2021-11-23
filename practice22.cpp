#include <GL/glut.h> // OpenGL Utility ToolKit Library
void display(); //declare a function
void reshape(int,int);
int main(int argc,char**argv)
{
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_RGB); //sets diplay to rgb
glutInitWindowPosition(500,500); //position of the 
//program in your screen
glutInitWindowSize(500,500); //size of the program window
 glutCreateWindow("Hello Window"); //window title
glutDisplayFunc(display);//call display function
glutReshapeFunc(reshape);
glutMainLoop(); //loop all function5
}
void display()
{
glClear(GL_COLOR_BUFFER_BIT); //Indicates the buffers 
//currently enabled for color writing.
glLoadIdentity();//reset all matrix

glBegin(GL_TRIANGLES);

glColor3f(1,0.5,0);
glVertex2f(0,2);
glVertex2f(-3,-2);
glVertex2f(3,-2);

glColor3f(1,0.5,0);
glVertex2f(6,2);
glVertex2f(3,-2);
glVertex2f(9,-2);

glColor3f(1,0.5,0);
glVertex2f(-6,2);
glVertex2f(-3,-2);
glVertex2f(-9,-2);

glColor3f(1,0.5,0);
glVertex2f(3,6);
glVertex2f(0,2);
glVertex2f(6,2);

glColor3f(1,0.5,0);
glVertex2f(-3,6);
glVertex2f(0,2);
glVertex2f(-6,2);

glColor3f(1,0.5,0);
glVertex2f(-3,6);
glVertex2f(0,10);
glVertex2f(3,6);
glEnd();

glFlush();// force execution of GL commands in finite 
//time
}
void reshape(int w, int h)
{
glViewport(0,0, (GLsizei)w, (GLsizei)h);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();//reset matrixes
gluOrtho2D(-10,10,-10,10);//size of the world
glMatrixMode(GL_MODELVIEW);
}
