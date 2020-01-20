//
// Created by pastu on 20.01.2020.
//

#include "graph.h"
#include <stdlib.h>

void graphInit(graph* new_graph, int vertices_no){
    new_graph->vertices_no = vertices_no;
    new_graph->edges = malloc(sizeof(list*)*vertices_no);

    for (int index=0;index<vertices_no;index++){
        new_graph->edges[index] = malloc(sizeof(list));
    }
}

graph* graphAddEdge(graph* Graph, int from, int to, int min_weight, int max_weight){
    listAddValue(Graph->edges[from], to, min_weight, max_weight);
}

