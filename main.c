#include <GL/gl.h>
#include <GLFW/glfw3.h>

int main(int argc, char** argv) {
  glfwInit();

  GLFWwindow* window = glfwCreateWindow(640, 480, "My window", NULL, NULL); 
  
  glfwMakeContextCurrent(window);

  while(!glfwWindowShouldClose(window)) {
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(0.1f, 0.1f, 0.1f, 0.1f);
    glfwPollEvents();
    glfwSwapBuffers(window);
  }


  glfwDestroyWindow(window);
  glfwTerminate();

  return 0;
}
