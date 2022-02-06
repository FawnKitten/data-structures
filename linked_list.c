#include "linked_list.h"
#include <stdlib.h>

typedef struct Node {
    int value;
    struct Node* next;
} Node;

static Node* node_create(int value) {
    Node* node = malloc(sizeof(Node));
    node->value = value;
    node->next = NULL;
    return node;
}

struct Linked_list_t {
    Node* head;
    int length;
};

/* create and assign a list */
void list_create(Linked_list* list) {
    *list = malloc(sizeof(Linked_list));
    (*list)->head = NULL;
    (*list)->length = 0;
}

/* deallocate list and its elements */
void list_destroy(Linked_list* list) {
    if (!list) return;
    while ((*list)->head)
        list_delete_end(*list);
    free(*list);
    *list = NULL;
}

/* insert `value` at the end of the list */
void list_insert_end(Linked_list list, int value) {
    Node* head_copy = list->head;
    while (head_copy->next)
        head_copy = head_copy->next;
    Node* node = node_create(value);
    head_copy->next = node;
}

/* insert `value` at `position` of list (position starts from 0) */
void list_insert_at(Linked_list list, int position, int value) {
    Node* head_copy = list->head;
    for (; position>0; position--) /* count down position */
        if (!list->head) return;
        else             head_copy = head_copy->next;
    Node* rest = head_copy->next;
    Node* node = node_create(value);
    node->next = rest;
    head_copy->next = node;
    /* before:
    list[position] -> rest
    after:
    list[position] -> node(value) -> rest */
}

/* removes the last element of the list */
void list_delete_end(Linked_list list) {
    Node* head_copy = list->head;
    while(head_copy->next) head_copy = head_copy->next;
    free(head_copy->next);
    head_copy->next = NULL;
}

/* removes element at `position`
(as with `list_insert_at` position starts from 0) */
void list_delete_at(Linked_list list, int position) {
    Node* head_copy = list->head;
    for (; position>0; position--)
        if (!list->head) return;
        else             head_copy = head_copy->next;
    /* if `head-copy->next` is NOT null, make next be next 2 positions ahead
       else do nothing
       this check is nessessary because if `head-copy->next` is null
       hen the code will derefrence a null pointer */
    if (head_copy->next) {
        Node* rest = head_copy->next->next;
        free(head_copy->next);
        head_copy->next = rest;
    } else { }
}

/* get value from node at `position` */
int list_get_value_at(Linked_list list, int position) {
    Node* head_copy = list->head;
    for (; position>0; position--)
        if (!list->head) return 0;
        else             head_copy = head_copy->next;
    return head_copy->value;
}

/* set value at `position` to `value` */
void list_set_value_at(Linked_list list, int position, int value) {
    Node* head_copy = list->head;
    for (; position>0; position--)
        if (!list->head) return;
        else             head_copy = head_copy->next;
     head_copy->value = value;
}
