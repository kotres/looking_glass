#ifndef VERTEX_ARRAY_H
#define VERTEX_ARRAY_H

#include "../gl/gl.h"

#include "buffer.h"

typedef struct
{
    Buffer* bound_buffer;
}VertexArray;

void vertexArrayConstructor(VertexArray* array);
void vertexArrayDestructor(VertexArray* array);
void vertexArrayBindBuffer(VertexArray* array,Buffer* buffer);

#endif
