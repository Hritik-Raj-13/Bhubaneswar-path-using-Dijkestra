#ifndef DIJKSTRA_H
#define DIJKSTRA_H

#define V 27  

#include <stdio.h>  
#include <limits.h>

int minDistance(int dist[], int sptSet[]);
void printSolution(int dist[], int src, int destination);
void dijkstra(int graph[V][V], int src, int dest);

#endif
