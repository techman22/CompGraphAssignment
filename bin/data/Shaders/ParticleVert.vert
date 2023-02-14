#version 410

layout (location = 0) in vec3 pos;
layout (location = 3) in vec2 uv;

out vec2 fragUV;
uniform vec3 translation;

void main()
{
	vec3 scale = vec3(0.1, 0.1, 0.1);
	gl_Position = vec4(pos * scale + translation, 1.0);
	fragUV = uv;
}