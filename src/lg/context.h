#ifndef CONTEXT_H
#define CONTEXT_H

#include "objectSetNode.h"
#include "vertexArray.h"

typedef struct LGContext
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

void contextBufferData(Context* con,GLenum target,GLsizei size,
                          const void* data,GLenum usage);
void contextVertexAttribPointer(Context* con,GLuint index​, GLint size​,
                               GLenum type​, GLboolean normalized​,
                                GLsizei stride​, const GLvoid * pointer​);

void contextDrawArrays(Context* con,GLenum mode,GLint first,GLsizei count);
void contextEnableVertexAttribArray(Context* con,GLuint index);
void contextDisableVertexAttribArray(Context* con,GLuint index);

#endif
