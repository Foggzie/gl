// Put GL includes

#include <GL/glut.h>

void RenderSceneCB();

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);

    glutInitWindowSize(800, 600);
    // glutInitWindowPosition(x, y);
    glutCreateWindow("Tutorial 1");

    glutDisplayFunc(RenderSceneCB);
    
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);

    glutMainLoop();
}

void RenderSceneCB()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glutSwapBuffers();
}
