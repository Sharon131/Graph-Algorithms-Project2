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

struct graph_value{
    int edge_to;
    int min_weight;
    int max_weight;
};

typedef struct graph graph;
typedef struct graph_value graph_value;

void graphInit(graph* new_graph, int vertices_no);
graph* graphAddEdge(graph* Graph, int from, int to, int min_weight, int max_weight);


#endif //PROJEKT2_GRAPH_H
