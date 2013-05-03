#ifndef STR_TYPE_H
#define STR_TYPE_H

#include <string.h>


#define WORD_SIZE 10000


typedef struct
{
    char letters[WORD_SIZE];
    int current;
    int next;
} Word;

#endif
