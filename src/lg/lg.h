#ifndef LG_H
#define LG_H

#include "../gl/dataDefenitions.h"
#include "context.h"
#include "frameBuffer.h"

Context lgContext;

void lgInitialize();
FrameBuffer* setDefaultFrameBuffer(GLuint width,GLuint height);
void lgQuit();

#endif
