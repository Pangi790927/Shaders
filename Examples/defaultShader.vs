#version 130

uniform mat4 worldMatrix, viewMatrix, projectionMatrix;
 
out vec4 color;
out vec3 normal;
out vec2 texCoord;

void main()
{
    color = gl_Color;
    color.a = 1.0f;
    normal = gl_Normal;
    texCoord = gl_MultiTexCoord0.st;
    gl_Position = projectionMatrix * viewMatrix * worldMatrix * gl_Vertex;
}