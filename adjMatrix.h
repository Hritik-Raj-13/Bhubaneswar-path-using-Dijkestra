// adjMatrix.h
#ifndef ADJMATRIX_H
#define ADJMATRIX_H

#include <stdio.h>

#define MAX_NODES 27
#define INF 9999999 


typedef struct {
    int num_nodes;
    int adjacency_matrix[MAX_NODES][MAX_NODES];
} Graph;

void initializeGraph(Graph *graph, int num_nodes);

void addEdge(Graph *graph, int source, int destination, float weight);

void printGraph(Graph *graph);


void addEdgesToGraph(Graph *graph);

#endif