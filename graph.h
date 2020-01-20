//
// Created by pastu on 20.01.2020.
//

#ifndef PROJEKT2_GRAPH_H
#define PROJEKT2_GRAPH_H

#include "list.h"

struct graph{
    list** edges;
    int vertices_no;
};

typedef struct graph graph;

void graphInit(graph* new_graph, int vertices_no);
graph* graphAddEdge(graph* Graph, int from, int to, int min_weight, int max_weight);


#endif //PROJEKT2_GRAPH_H
