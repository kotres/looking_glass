#ifndef CONTEXT_H
#define CONTEXT_H

#include "objectSetNode.h"
#include "vertexArray.h"

typedef struct
{
    VertexArray* bound_verex_array;
    ObjectSetNode vertex_array_set;
    ObjectSetNode buffer_set;
}Context;

void contextConstructor(Context* con);
void contextDestructor(Context* con);

void contextGenerateBuffers(Context* con,GLuint *IDs,GLuint number);
void contextGenerateVertexArrays(Context* con,GLuint *IDs,GLuint number);

void contextBindBuffer(Context* con,GLenum target,GLuint ID);
void contextBindVertexArray(Context* con,GLuint ID);

#endif
