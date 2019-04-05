#include "src/graphics/window.h"
#include "src/maths/maths.h"
#include "src/graphics/shader.h"


int main() {
	using namespace test;
	using namespace graphics;
	using namespace maths;

	

	Window window("Test!", 700, 500);
	glClearColor(0.2f, 0.3f, 0.8f, 1.0f);

	GLuint vao;
	glGenVertexArrays(1, &vao);
	glBindVertexArray(vao);

	Shader shader("src/shaders/basic.vert", "src/shaders/basic.frag");

	while (!window.closed()) 
	{

		

		window.clear();
		glDrawArrays(GL_ARRAY_BUFFER, 0, 6);
		window.update();
	}

	system("PAUSE");
	return 0;
}