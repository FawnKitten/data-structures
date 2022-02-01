
#ifndef LINKED_H
#define LINKED_H

typedef struct Linked_list_t* Linked_list;

// list initialization
void list_create(Linked_list* list);
void list_destroy(Linked_list list);

// changing && moving nodes
void list_insert_end(Linked_list list, int value);
void list_insert_at(Linked_list list, int position, int value);
void list_delete_end(Linked_list list);
void list_delete_at(Linked_list list, int position);

// changing && getting values
int list_get_value_at(Linked_list list, int position);
void list_set_value_at(Linked_list list, int position, int value);

#endif // LINKED_H
