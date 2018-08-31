#ifndef ENGINE_ACTOR_H
#define ENGINE_ACTOR_H

#include <glad/glad.h>
#include <functional>

#include "shader.h"

class Actor
{
public:
	Actor() = default;

	GLuint vertex_array_object{};
	GLuint vertex_buffer_object{};
	GLuint element_buffer_object{};
	Shader shader;
	std::function<void()> draw_function;
};

#endif //ENGINE_ACTOR_H
