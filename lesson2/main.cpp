// Put GL includes

#include <GL/glew.h>
#include <GL/glut.h>

void RenderSceneCB();

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);

    glutInitWindowSize(600, 600);
    glutCreateWindow("Tutorial 2");

    glutDisplayFunc(RenderSceneCB);
    
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);

    glutMainLoop();
}

void RenderSceneCB()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glutSwapBuffers();
}
