#ifndef CHTBL_H
#define CHTBL_H

#include <stdlib.h>

#include "list.h"

typedef struct CHTbl_ {
    int buckets;

    int (*h)(const void *key);
    int (*match)(const void *key1, const void *key2);
    void (*destroy)(void *data);

    int size;
    List *table;
} CHTbl;
#endif
