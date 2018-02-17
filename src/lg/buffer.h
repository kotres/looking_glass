#ifndef BUFFER_H
#define BUFFER_H

#include "../gl/gl.h"

typedef struct
{
    void* data;
    GLuint size;
}Buffer;

void bufferConstructor(Buffer* buf,GLuint size);
void bufferDestructor(Buffer* buf);

void* BufferGetDataPointer(Buffer* buf);

#endif
