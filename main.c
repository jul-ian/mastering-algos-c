#include <stdio.h>

#include "list.h"

int main() {
    List *int_list = (List *)malloc(sizeof(List));
    if(int_list == NULL) return -1;

    list_init(int_list, NULL);

    for(int i = 5; i > 0; i--) {
        printf("%p\n", &i);
        list_ins_next(int_list, NULL, &i);
    }
    free(int_list);
    return 0;
}