#ifndef BUFFER_H
#define BUFFER_H

#include "../gl/dataDefenitions.h"

typedef struct LGBuffer
{
    void* data;
    GLsizei size;
}Buffer;

void bufferConstructor(Buffer* buf,GLsizei size);
void bufferDestructor(Buffer* buf);

void bufferResize(Buffer* buf,GLsizei size);

GLsizei BufferGetSize(Buffer* buf);
void* BufferGetDataPointer(Buffer* buf);

#endif
