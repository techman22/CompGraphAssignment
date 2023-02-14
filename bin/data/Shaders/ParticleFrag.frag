#version 410

uniform sampler2D particleTex;

in vec2 fragUV;
out vec4 outCol;
uniform float alpha;


void main()
{
	outCol = texture(particleTex, fragUV);
}