//
// Created by pastu on 20.01.2020.
//

#include "list.h"
#include <stdlib.h>

void listInit(list* newList, int value){
    newList->value = value;
    newList->next = NULL;
}

list* listAddValue(list* head, int value, int min_weight, int max_weight){
    list* new_head = malloc(sizeof(list));
    new_head->value = value;
    new_head->next = head;
    return new_head;
}

list* listRemoveValue(list* head, int value){
    if (head == NULL || head->value != value)   return head;
    if (head->value == value){
        list* new_head = head->next;
        free(head);
        return new_head;
    }

    list* curr_node = head;
    list* next_node = head->next;
    while(next_node != NULL && next_node->value != value){
        curr_node = next_node;
        next_node = next_node->next;
    }

    if (next_node != NULL){
        curr_node->next = next_node->next;
        free(next_node);
    }

    return head;
}


