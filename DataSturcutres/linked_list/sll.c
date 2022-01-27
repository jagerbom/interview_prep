#include <stdio.h>
#include <stdlib.h>
#include "ll.h"

s_node_t *alloc_new_node(int ele)
{
    s_node_t *new_node = (s_node_t *)malloc(sizeof(s_node_t));
    new_node->ele = ele;
    new_node->next = NULL;
    return new_node;
}

void reverse_s (s_node_t **head, int type)
{
    s_node_t *prev = NULL;
    s_node_t *curr = *head;
    s_node_t *next = NULL;
    
    switch (type) {
        case ITERATIVE:
        while (curr != NULL) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        *head = prev;
        break;
        
        case RECURSIVE:
        break;
    }
    return;
}

void insert_s(s_node_t **head, int ele)
{
    s_node_t *new_node;
    s_node_t *temp = *head;
    new_node = alloc_new_node(ele);
    if (new_node == NULL) {
        printf(" error in allocation new node \n");
        return;
    }
    //inserting first element
    if (*head == NULL) {
        *head = new_node;
        return;
    }
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new_node;
    return;
}

void delete_s(s_node_t **head, int ele)
{
    s_node_t *temp = *head;
    s_node_t *prev;
    //Empty LL
    if (*head == NULL) {
        printf(" Empty LL");
        return ;
    }
    //delete from head
    if (temp->ele == ele) {
        *head = temp->next;
        free(temp);
        return;
    }
    // search and delete assuming no duplicates.
    while (temp->next != NULL) {
        if (temp->next->ele == ele) {
            prev = temp->next;
            temp->next = temp->next->next;
            print_s(*head);
            free(prev);
            return;
        }
        temp = temp->next;
    }
    printf("element not found \n");
}

void print_s(s_node_t *head)
{
    if (head == NULL) {
        printf("empty LL \n");
        return;
    }
    s_node_t *temp = head;
    printf("elemente in the LL are: ");
    while(temp != NULL) {
        printf("%d \t", temp->ele);
        temp = temp->next;
    }
    printf("\n");
}

s_node_t *create_list(s_node_t *head)
{
    insert_s(&head, 1);
    insert_s(&head, 2);
    insert_s(&head, 3);
    insert_s(&head, 4);
    insert_s(&head, 5);
    return head;
}

s_node_t *delete_list(s_node_t *head)
{
    delete_s(&head, 2);
    delete_s(&head, 5);
    delete_s(&head, 3);
    delete_s(&head, 4);
    delete_s(&head, 1);
    return head;
}

int main (int argc, char *argv[])
{
    s_node_t *head = NULL;
    head = create_list(head); 
    print_s(head);
    head = delete_list(head);
    //reverse_s(&head, ITERATIVE);
    print_s(head);
}