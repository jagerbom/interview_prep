#ifndef __ll_h__
#define __ll_h__

/*
1. Single linked list
2. Double linked list
3. circular linlked list

Operations:
Addition of nodes at 
    begning
    middle
    end
deletion of nodes
    begning
    middle
    end
accessing elements
*/
#define RECURSIVE 0
#define ITERATIVE 1
#define USING_STACK 2
#define USING_ARRAY 3

#define DEBUG 0
#define MIN_LEN_FOR_LOOP 4

typedef struct s_node {
    int ele;
    struct s_node *next;
} s_node_t;

typedef struct d_node {
    int ele;
    struct d_node *next;
    struct d_node *prev;
} d_node_t;

extern void insert_s(s_node_t **head, int ele, int *len); //add at the end
extern void delete_s(s_node_t **head, int ele, int *len); // delete the selected node
extern void print_s(s_node_t *head); // prints the ll
extern void reverse_s (s_node_t **head, int type);
extern int create_list(s_node_t **head);
extern int delete_list(s_node_t **head, int len);

extern void insert_d(s_node_t **head, int ele);
extern void delete_d(s_node_t *head, int ele);
extern void print_d(s_node_t *head);

extern s_node_t *alloc_new_node(int ele); // allocats a new SLL node

//loop related functions
void ll_loop(s_node_t *head, int len);
void create_loop(s_node_t *head, int len);
void detect_loop(s_node_t *head, int len);

#endif //__ll_h__
