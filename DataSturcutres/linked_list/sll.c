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

void insert_s(s_node_t **head, int ele, int *len)
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
        *len = *len+1;
        return;
    }
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new_node;
    *len = *len+1;
    return;
}

void delete_s(s_node_t **head, int ele, int *len)
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
        *head = (*(head))->next;
        *len = *len - 1;
        free(temp);
        return;
    }
    // search and delete assuming no duplicates.
    while (temp->next != NULL) {
        if (temp->next->ele == ele) {
            prev = temp->next;
            temp->next = temp->next->next;
            //print_s(*head);
            *len = *len - 1;
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

int create_list(s_node_t **head)
{
    int len = 0;
    insert_s(head, 1, &len);
    insert_s(head, 2, &len);
    insert_s(head, 3, &len);
    insert_s(head, 4, &len);
    insert_s(head, 5, &len);
    printf("\nlength of a LL is %d \n", len);
    return len;
}

int delete_list(s_node_t **head, int len)
{
    delete_s(head, 2, &len);
    delete_s(head, 5, &len);
    delete_s(head, 3, &len);
    delete_s(head, 4, &len);
    delete_s(head, 1, &len);
    printf("\nlength of a LL is %d \n", len);
    return len;
}

void  create_loop(s_node_t *head, int len)
{
    if (len > MIN_LEN_FOR_LOOP) {
        head->next->next->next->next = head->next; 
    }
}

void detect_loop(s_node_t *head, int len)
{
    s_node_t *slow = head;
    s_node_t *fast = head;

    if (len == 0) {
        printf("\n Empty LL");
        return;
    }
    if (len == 1) {
        printf("\n single element in LL");
        return;
    }
    while (1) {
        if (slow == NULL || fast == NULL || fast->next == NULL) {
            printf("\n no loop");
            return;
        }
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) {
            printf("\n Loop found");
            return;
        }
    }
}

void ll_loop(s_node_t *head, int len)
{
    create_loop(head, len);
    detect_loop(head, len);
    return;
}