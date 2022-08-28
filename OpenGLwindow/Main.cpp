#include<iostream>
#include<glad/glad.h>
#include<GLFW/glfw3.h>



int main() {
	glfwInit();
	if (!glfwInit())
	{
		// Handle initialization failure
		std::cout << "Failed to initilize GLFW" << std::endl;
	}
	//glfwInitHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	//glfwInitHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	//glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
	
	GLFWwindow* window = glfwCreateWindow(800, 800, "qwe", NULL, NULL);
	if (window == NULL) {
		std::cout << "Failed to create GLFW window" << std::endl;
		glfwTerminate();
		
		const char* description;
		int code = glfwGetError(&description);
		std::cout << "Failed to create GLFW Window. Error code: " << code << " , description: " << description << std::endl;
		return -1;
	}
	glfwMakeContextCurrent(window);

	
	while (!glfwWindowShouldClose(window)) {
		glfwPollEvents();
		
	}
	
	std::cout << "fuck" << std::endl;

	glfwDestroyWindow(window);
	
	glfwTerminate();
	return 0;

}