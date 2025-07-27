#include <stdio.h>

#include "list.h"

int main() {
    List *datalist = (List *)malloc(sizeof(List));
    if(datalist == NULL) return -1;

    list_init(datalist, free);

    int *ins_int;
    for(int i = 5; i > 0; i--) {
        ins_int = (int *)malloc(sizeof(int));
        *ins_int = i;
        list_ins_next(datalist, NULL, ins_int);
    }

    ListElmt *element = list_head(datalist);
    while(element != NULL) {
        printf("%d\n", *(int *)(list_data(element)));
        element = list_next(element);
    }
    list_destroy(datalist);
    free(datalist);
    return 0;
}