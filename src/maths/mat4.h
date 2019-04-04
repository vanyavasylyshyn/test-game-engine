#pragma once

#include "maths_func.h"
#include "vec3.h"
#include "vec4.h"


namespace test { namespace maths {
	
	

	struct mat4 
	{

		union
		{
			float elements[4 * 4];
		};
		

		mat4();
		mat4(float giagonal);

		vec4 getColumn(int index) {
			index *= 4;
			return vec4(elements[index], (elements[index + 1], (elements[index + 2], (elements[index + 3]);
		}

		static mat4 identity();

		mat4& multiply(const mat4& other);
		friend mat4 operator*(mat4 left, const mat4& right);
		mat4& operator*=(const mat4& other);

		static mat4 orthographic(float left, float right, float bottom, float top, float near, float far); 
		static mat4 perspective(float fov, float aspectRatio, float neat, float far); 

		static mat4 translation(const vec3& translation);
		static mat4 rotation(float angle, const vec3& axis);
		static mat4 scale(const vec3& scale);

		
	};

} }