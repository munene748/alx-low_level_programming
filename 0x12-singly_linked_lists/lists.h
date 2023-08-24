#ifndef LISTS_H
#define LISTS_H

/**
 * struct list_s - Node structure for a singly linked list
 * @str: Dynamic string
 * @len: Length of string
 * @next: Pointer to next node
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);   // Print elements
size_t list_len(const list_t *h);     // Count nodes
list_t *add_node(list_t **head, const char *str);      // Add node at start
list_t *add_node_end(list_t **head, const char *str);  // Add node at end
void free_list(list_t *head);   // Free nodes

#endif

