#include <stdlib.h>
#include <string.h>

#include "ohtbl.h"

static char vacated;

int ohtbl_init(OHTbl *htbl, int positions, int (*h1)(const void *key), int (*h2)(const void *key), int (*match)(const void *key1, const void *key2), void (*destroy)(void *data)) {
    if((htbl->table = (void **)malloc(positions * sizeof(void *))) == NULL) {
        return -1;
    }

    htbl->positions = positions;
}