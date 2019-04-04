#include "shader.h"

namespace test { namespace graphics {
	
	Shader::Shader(const char* vertPath, const char* fragPath)
		m_VertPath(vertPath), m_FragPath(fragPath)
	{
		m_ShaderID = load();
	}

	GLuint Shader::load()
	{
		GLuint program = glCreateProgram();
		GLuint vertex = glCreateShader(GL_VERTEX_SHADER);
		GLuint fragment = glCreateShader(GL_FRAGMENT_SHADER);
	}
}}