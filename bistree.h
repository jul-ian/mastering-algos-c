#ifndef BISTREE_H
#define BISTREE_H

#include "bitree.h"

#define AVL_LFT_HEAVY 1
#define AVL_BALANCED 0
#define AVL_RGT_HEAVY -1

typedef struct AvlNode_ {
    void *data;
    int hidden;
    int factor;
} AvlNode;

typedef BiTree BisTree;

#endif