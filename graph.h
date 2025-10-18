#ifndef GRAPH_H
#define GRAPH_H

#include <stdlib.h>

#include "list.h"
#include "set.h"

typedef struct AdjList_ {
    void *vertex;
    Set adjacent;
} AdjList;

typedef struct Graph_ {
    int vcount;
    int ecount;

    int (*match)(void *key1, void *key2);
    void (*destroy)(void *data);

    List adjlists;
} Graph;


#endif