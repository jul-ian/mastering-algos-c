#include <stdio.h>

#include "set.h"

typedef struct {
    int id_num;
    int evil_level;
    char *saying;
} Imp;

int imp_match(const void *key1, const void *key2) {
    Imp *imp1 = (Imp *)key1;
    Imp *imp2 = (Imp *)key2;

    return (imp1->id_num) == (imp2->id_num);
}

int main() {
    Set *imp_set;
    set_init(imp_set, imp_match, free);
    /*
    for(int i = 0; i < 5; i++) {
        Imp *current_imp = (Imp *)malloc(sizeof(Imp));
        current_imp->id_num = 1000 + i;
        current_imp->evil_level = (666 - 2*i);
        sprintf(current_imp->saying, "I am imp #%d\n", current_imp->id_num);

        set_insert(imp_set, (void *)current_imp);
    }
     */
    Imp *current_imp = (Imp *)malloc(sizeof(Imp));
    current_imp->id_num = 1000 + 1;
    current_imp->evil_level = (666 - 2*1);
    //sprintf(current_imp->saying, "I am imp #%d\n", current_imp->id_num);
    current_imp->saying = "hello";
    printf("%d\n", set_size(imp_set));
    set_destroy(imp_set);
    return 0;
}