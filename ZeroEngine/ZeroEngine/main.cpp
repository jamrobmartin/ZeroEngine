#include <iostream>
#include "GLFW/glfw3.h"

void Error_Callback(int error, const char* description)
{
	std::cerr << "Error: " << error << " - " << description << std::endl;
}

int main(int argc, char* argv)
{
	glfwSetErrorCallback(Error_Callback);

	if (glfwInit())
	{
		std::cout << "glfwInit - Success" << std::endl;
	}
	else
	{
		std::cout << "glfwInit - Fail" << std::endl;
	}

	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 2);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 0);
	GLFWwindow* window = glfwCreateWindow(640, 480, "Zero Engine!", NULL, NULL);
	glfwMakeContextCurrent(window);


	glfwTerminate();

	system("pause");
	return 0;
}