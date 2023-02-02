#include <iostream>

#include "glad/gl.h"
#include "GLFW/glfw3.h"

int main() {
    if(!glfwInit()) {
        std::cout << "GLFW init failed" << std::endl;
        return EXIT_FAILURE;
    }
    else {
        std::cout << "GLFW : " << glfwGetVersionString() << std::endl;
    }


    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_COMPAT_PROFILE, GLFW_TRUE);
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GLFW_TRUE);
    glfwWindowHint(GLFW_OPENGL_DEBUG_CONTEXT, GLFW_TRUE);
    
    GLFWwindow* window = glfwCreateWindow(500, 500, "Hello GLFW", nullptr, nullptr);
    glfwMakeContextCurrent(window);


    if(!gladLoadGL(glfwGetProcAddress)) {
        std::cout << "GLAD loading failed" << std::endl;
        return EXIT_FAILURE;
    }
    else {
        std::cout << "OpenGL : " << glGetString(GL_VERSION) << std::endl;
    }


    while(!glfwWindowShouldClose(window)) {
        glClear(GL_CLEAR_BUFFER);

        glfwSwapBuffers(window);
        glfwPollEvents();
    }


    glfwDestroyWindow(window);

    glfwTerminate();
    return EXIT_SUCCESS;
}