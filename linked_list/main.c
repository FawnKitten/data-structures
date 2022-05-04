#include <stdio.h>
#include "linked_list.h"

int main() {

    Linked_list l;

    list_create(&l);

    list_insert_end(l, 1);
    list_insert_end(l, 2);
    list_insert_end(l, 3);

    printf("linked list [0]: %d\n", list_get_value_at(l, 0));
    printf("linked list [1]: %d\n", list_get_value_at(l, 1));
    printf("linked list [2]: %d\n", list_get_value_at(l, 2));

    list_print(l); puts("");
    list_delete_end(l);
    list_print(l); puts("");

    list_destroy(&l);

    return 0;
}
