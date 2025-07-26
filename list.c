#include <stdlib.h>
#include <string.h>

#include "list.h"

void list_init(List *list, void (*destroy)(void *data)) {
    list->size = 0;
    list->destroy = destroy;
    list->head = NULL;
    list->tail = NULL;
}

void list_destroy(List *list) {
    void *data;

    while(list_size(list) > 0) {
        if(list_rem_next(list, NULL, (void **)&data) == 0 && list->destroy != NULL) {
            list->destroy(data);
        }
    }
    memset(list, 0, sizeof(List));
}

int list_ins_next(List *list, ListElmt *element, const void *data) {
    ListElmt *new_element;
    if((new_element = (ListElmt *)malloc(sizeof(ListElmt))) == NULL) {
        return -1;
    }
    new_element->data = (void *)data;
}