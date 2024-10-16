#include <GLFW/glfw3.h>
#include <stdio.h>

void error_callback(int error, const char* description) {
  fprintf(stderr, "Error: %s\n", description);
}

int main(int argc, char** argv) {
  
  glfwSetErrorCallback(error_callback);
  glfwInit();

  glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 2);
  glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 0);
  GLFWwindow* window = glfwCreateWindow(640, 480, "My window", NULL, NULL);
  glfwMakeContextCurrent(window);
  
  while(!glfwWindowShouldClose(window)) {
    
  }
  
  glfwDestroyWindow(window);
  glfwTerminate();
}
