// Example useage of stack
#include "stack.h"
#include <stdio.h>

int main() {

    Stack s = stack_create();

    stack_push(s, 1);
    stack_push(s, 2);
    stack_push(s, 3);

    printf("the stack has %d elements\n", stack_size(s));

    printf("top of stack %d\n", stack_pop(s));
    printf("top of stack %d\n", stack_pop(s));
    printf("top of stack %d\n", stack_pop(s));

    stack_destroy(s);

    return 0;
}
