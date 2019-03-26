#include "src/graphics/window.h"

int main() {
	using namespace test;
	using namespace graphics;

	Window window("Test!", 700, 500);
	glClearColor(0.2f, 0.3f, 0.8f, 1.0f);

	GLuint vao;
	glGenVertexArrays(1, &vao);
	glBindVertexArray(vao);


	while (!window.closed()) {
		window.clear();
		double x, y;
		window.getMousePosition(x, y);
		std::cout << x << ", " << y << std::endl;
		glDrawArrays(GL_ARRAY_BUFFER, 0, 6);
		window.update();
	}

	system("PAUSE");
	return 0;
}