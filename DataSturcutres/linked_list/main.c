#include <stdio.h>
#include <stdlib.h>
#include "ll.h"

void linkedlist(void) 
{
    s_node_t *head = NULL;
    int len = 0;
    len = create_list(&head); 
    print_s(head);
    //len = delete_list(&head, len);
    //reverse_s(&head, ITERATIVE);
    //ll_loop(head, len);
    //print_s(head);
}

int main (int argc, char *argv[])
{
    linkedlist();
}