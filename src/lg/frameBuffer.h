#ifndef FRAME_BUFFER_H
#define FRAME_BUFFER_H

#include "buffer.h"

typedef struct LGFrameBuffer
{
    GLuint width,height;
    Buffer* ColorBuffer;
}FrameBuffer;

void frameBufferConstructor(FrameBuffer* buffer,GLuint width,GLuint height);
void frameBufferDestructor(FrameBuffer* buffer);

#endif
