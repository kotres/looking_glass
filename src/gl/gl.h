
#ifndef __gl_h_
#define __gl_h_

#ifdef __cplusplus
extern "C" {
#endif

#include "dataDefenitions.h"
#include "../lg/lg.h"

void glGenVertexArrays(	GLsizei n, GLuint *arrays);

void glBindVertexArray(	GLuint array);

void glGenBuffers(GLsizei n, GLuint * buffers);

void glBindBuffer(GLenum target,GLuint buffer);

void glBufferData(GLenum target,GLsizei size,const GLvoid * data,
                  GLenum usage);

void glEnableVertexAttribArray(	GLuint index);

void glVertexAttribPointer(GLuint index​, GLint size​, GLenum type​,
                           GLboolean normalized​, GLsizei stride​,
                           const GLvoid * pointer​);

void glDrawArrays(GLenum mode,GLint first,GLsizei count);


void glDisableVertexAttribArray(GLuint index);

#ifdef __cplusplus
}
#endif

#endif /* __gl_h_ */
