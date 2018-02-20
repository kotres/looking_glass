#ifndef OBJECT_SET_NODE_H
#define OBJECT_SET_NODE_H

#include "../gl/dataDefenitions.h"

typedef struct LGObjectSetNode
{
    GLuint ID;
    void* object;
    ObjectSetNode* next;
    ObjectSetNode* previous;
}ObjectSetNode;

void objectSetNodeConstructor(ObjectSetNode* node,GLuint ID,size_t object_size,
                              ObjectSetNode* next, ObjectSetNode* previous,);

void objectSetNodeDestructor(ObjectSetNode* node);

GLuint objectSetNodeGetID(ObjectSetNode* node);

ObjectSetNode* objectSetNodeGetNext(ObjectSetNode* node);

void objectSetNodeSetNext(ObjectSetNode* node, ObjectSetNode* next);

ObjectSetNode* objectSetNodeGetPrevious(ObjectSetNode* node);

void objectSetNodeSetPrevious(ObjectSetNode* node, ObjectSetNode* previous);

void* objectSetNodeGetDataPointer(ObjectSetNode* node);

#endif
