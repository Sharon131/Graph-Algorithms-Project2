//
// Created by pastu on 20.01.2020.
//

#ifndef PROJEKT2_LIST_H
#define PROJEKT2_LIST_H

#include <vcruntime.h>

struct list{
    int value;
    int min_weight;
    int max_weight;
    struct list* next;
};

typedef struct list list;

void listInit(list* newList, int value);
list* listAddValue(list* head, int value, int min_weight, int max_weight);
list* listRemoveValue(list* head, int value);
list* listRemoveAllValues(list* head, int value);



#endif //PROJEKT2_LIST_H
