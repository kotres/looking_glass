#ifndef OBJECT_SET_H
#define OBJECT_SET_H

#include "objectSetNode.h"

typedef struct
{
    ObjectSetNode *begin;
    ObjectSetNode *end;
    GLuint size;
    size_t node_size;
}ObjectSet;

void objectSetConstructor(ObjectSet* set);
void objectSetDestructor(ObjectSet* set);
GLuint objectSetGenerateObject(ObjectSet* set);
void objectSetGenerateObjects(ObjectSet* set,GLuint* IDs,GLuint number);
void objectSetDeleteObject(ObjectSet* set,GLuint ID);
void objectSetDeleteObjects(ObjectSet* set,GLuint* IDs,GLuint number);
GLuint objectSetCount(ObjectSet* set,GLuint ID);
void objectSetGetObjectByID(ObjectSet* set,GLuint ID);

#endif
