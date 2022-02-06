// main.c, test all the data structures implemented
#include <stdio.h>
#include "stack.h"
#include "linked_list.h"

int main() {
    Stack s = stack_create();

    stack_push(s, 1);
    stack_push(s, 2);
    printf("stack size: %d\n", stack_size(s));
    printf("top of stack: %d\n", stack_peek(s));
    stack_dump(s);
    stack_pop(s);
    printf("top of stack: %d\n", stack_peek(s));
    stack_dump(s);

    stack_destroy(s);

    Linked_list l;
    list_create(&l);

    list_insert_end(l, 1);
    list_insert_end(l, 2);
    list_insert_end(l, 3);
    printf("linked list [0]: %d", list_get_value_at(l, 0));
    printf("linked list [1]: %d", list_get_value_at(l, 1));
    printf("linked list [2]: %d", list_get_value_at(l, 2));

    list_destroy(&l);
    return 0;
}
