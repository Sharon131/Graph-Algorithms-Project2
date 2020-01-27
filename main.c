#include <stdio.h>
#include<stdlib.h>
#include "graph.h"

// Problem - wyszukiwanie skojarzenia pełnego w grafie.
// Ogólnie algorytm Edmondsa.
// Można też zastosować algorytm max. przepływu Edmondsa-Karpa np.

int charToInt(char number);
int stringToInt(char* number);

void handleFileNotFoundError(char* file_name){
    printf("Cannot open file named: %s\n", file_name);
    exit(0);
}


int fileReadNextNumber(FILE* file_ptr){ //static when moved to another file
    int n = 10;
    char* buff = malloc(sizeof(char)*n);
    fgets(buff, n, file_ptr);

    int index = 0;
    while(buff[index] != 10 && buff[index] != 13 && buff[index] != 0)   index++;
    buff[index] = 0;

    return stringToInt(buff);
}


void* readFile(char* file_name){
    FILE* file_ptr;

    file_ptr = fopen(file_name, "r");

    if (file_ptr == NULL)   handleFileNotFoundError(file_name);

    int tests_no = fileReadNextNumber(file_ptr);

    for (int index=0;index<tests_no;index++){
        graph test_graph;
        int no_vertices = fileReadNextNumber(file_ptr);
        graphInit(&test_graph, no_vertices);
        int no_edges = fileReadNextNumber(file_ptr);

        for (int edge_index=0;edge_index<no_edges;edge_index++){
            ; //add edge to graph
            int from = fileReadNextNumber(file_ptr);
            int to = fileReadNextNumber(file_ptr);
            int min_weight = fileReadNextNumber(file_ptr);
            int max_weight = fileReadNextNumber(file_ptr);

            graphAddEdge(&test_graph, from, to, min_weight, max_weight);
        }

    }

    printf("Ilosc testow: %d", tests_no);

    fclose(file_ptr);

    return NULL;
}

int charToInt(char number){
    return (int)number-48;
}

int stringToInt(char* number){
    int new_number = 0;

    while(*number != NULL){
        new_number*= 10;
        new_number+= charToInt(*number);
        number++;
    }

    return new_number;
}

int main(int argc, char **argv) {
    //char file_full_path[67] = "C:\\Users\\pastu\\CLionProjects\\Grafowe\\Projekt2\\eza-set\\eza0.in";

    printf("Hello, Dear User!\n");

    if (argc == 1){
        printf("Missing argument.");
        return 1;
    }

    printf("Pierwszy argument: %s\n", argv[1]);

    readFile(argv[1]);

    return 0;
}
