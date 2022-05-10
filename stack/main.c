// Example useage of stack
#include "stack.h"
#include <stdio.h>

int main() {

    Stack s = stack_create();

    printf("pushing 1, 2, 3 to the stack");
    stack_push(s, 1);
    stack_push(s, 2);
    stack_push(s, 3);

    printf("the stack has %d elements, and has the following contents\n", stack_size(s));
    stack_dump(s);

    printf("top of stack %d\n", stack_pop(s));
    printf("top of stack %d\n", stack_pop(s));
    printf("top of stack %d\n", stack_pop(s));

    printf("stack peek %d\n", stack_peek(s));

    printf("pushing 4, 5, 6 to the stack");
    stack_push(s, 4);
    stack_push(s, 5);
    stack_push(s, 6);

    printf("the stack has %d elements, and has the following contents\n", stack_size(s));
    stack_dump(s);

    stack_destroy(s);

    return 0;
}
