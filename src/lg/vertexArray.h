#ifndef VERTEX_ARRAY_H
#define VERTEX_ARRAY_H

#include "../gl/gl.h"

#include "buffer.h"

typedef struct LGVertexArray
{
    Buffer* bound_buffer;
}VertexArray;

void vertexArrayConstructor(VertexArray* array);
void vertexArrayDestructor(VertexArray* array);
void vertexArrayBindBuffer(VertexArray* array,GLenum target,Buffer* buffer);

#endif
