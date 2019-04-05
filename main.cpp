#include "src/graphics/window.h"
#include "src/maths/maths.h"
#include "src/graphics/shader.h"


int main() {
	using namespace test;
	using namespace graphics;
	using namespace maths;

	

	Window window("Test!", 700, 500);
	glClearColor(0.2f, 0.3f, 0.8f, 1.0f);

	
	

	GLfloat vertices[] =
	{
		-0.5f, -0.5f, 0.0f,
		-0.5f,  0.5f, 0.0f,
		 0.5f,  0.5f, 0.0f,
		 0.5f,  0.5f, 0.0f,
		 0.5f, -0.5f, 0.0f,
		-0.5f, -0.5f, 0.0f
	}

	GLuint vbo;
	glGenBuffers(1, &vbo)
	glBindBuffer(GL_ARRAY_BUFFER, vbo);
	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
	glVertexAttribPointer(0, 3, GL_FLOAT, 0, 0);
	glEnableVertexAttribArray(0);

	Shader shader("src/shaders/basic.vert", "src/shaders/basic.frag");
	shader.enable();

	while (!window.closed()) 
	{

		

		window.clear();
		glDrawArrays(GL_TRIANGLES, 0, 6);
		window.update();
	}

	system("PAUSE");
	return 0;
}