#include "pch.h"
#include "Window.h"

#include <GLFW/glfw3.h>
#include <glad/glad.h>

static uint8_t GLFWWindowCount = 0;


void Window::Init(const WindowProps& spec)
{
	if (GLFWWindowCount == 0)
	{
		int success = glfwInit();
		//glfwSetErrorCallback(glfw_error_callback);
	}

	{
		m_Window = glfwCreateWindow((int)spec.Width, (int)spec.Height, spec.Title.c_str(), nullptr, nullptr);
		GLFWWindowCount++;
	}

	glfwSetWindowUserPointer(m_Window, this);

	glfwMakeContextCurrent(m_Window);

	glfwSwapInterval(1);

	int status = gladLoadGLLoader((GLADloadproc)glfwGetProcAddress);
	if (!status)
	{
		fprintf(stderr, "Failed to initialize OpenGL context!\n");
		exit(-1);
	}

	std::cout << spec.Title << '\n';

}

Window::Window(const WindowProps& spec)
{
	Init(spec);
}

Window::~Window()
{
    glfwDestroyWindow(m_Window);
    GLFWWindowCount--;
    if (GLFWWindowCount == 0)
    {
        glfwTerminate();
    }
}

void Window::Update()
{
	glfwPollEvents();
	glfwSwapBuffers(m_Window);

	glClearColor(0, 0, 0, 1);
	glClear(GL_COLOR_BUFFER_BIT);
}

