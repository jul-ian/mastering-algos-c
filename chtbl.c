#include <stdlib.h>
#include <string.h>

#include "list.h"
#include "chtbl.h"

int chtbl_init(CHTbl *htbl, int buckets, int (*h)(const void *key), int (*match)(const void *key1, const void *key2), void (*destroy)(void *data)) {
    if((htbl->table = (List *)malloc(buckets * sizeof(List))) == NULL) {
        return -1;
    }

    htbl->buckets = buckets;

    for(int i = 0; i < htbl->buckets; i++) {
        list_init(&htbl->table[i], destroy);
    }

    htbl->h = h;
    htbl->match = match;
    htbl->destroy = destroy;

    htbl-size = 0;

    return 0;
}