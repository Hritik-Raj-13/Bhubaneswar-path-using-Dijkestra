#include <stdio.h>
#include "adjMatrix.h"
#include "adjMatrix.c"
#include "dijkstra.h" 
#include "dijkstra.c" 

#define V 27
#define MAX_NODES 27

#define MENU_DISPLAY_GRAPH_INFO 1
#define MENU_DISPLAY_GRAPH 2
#define MENU_FIND_SHORTEST_PATH 3
#define MENU_EXIT 4

 void displayMenu() {
    printf("\nMenu:\n");
    printf("1. Display number of nodes in the graph\n");
    printf("2. Display Graph Nodes\n");
    printf("3. Find shortest path between nodes\n");
    printf("4. Exit\n");
}

 void displayNodeEdgeInfo(Graph *graph) {
    printf("\nNumber of nodes: %d\n", graph->num_nodes);
     int num_edges = 0;
    // for (int i = 0; i < graph->num_nodes; i++) {
    //     for (int j = 0; j < graph->num_nodes; j++) {
    //         if (graph->adjacency_matrix[i][j] != INF) {
    //             num_edges++;
    //         }
    //     }
    // }
 }

 void displayNodes() {
 char *places[] = {"Acharya Vihar", "AIIMS", "Vani Vihar", "Baramunda", "Biju Pattnaik Airport", "C.V. Raman Global University", "Fire Station ", "Indian Institute of Technology", "IMMT ", "Infocity Square",
                    "ITER", "Jagamara", "Jaydev Vihar", "Kalinga Hospital Square", "Kalpana Square", "Khandagiri", "Kalinga Institute of Medical Sciences", "KIIT Square", "Lingaraj Mandir", "Master Canteen", "OUAT Square","Patia Square",
                    "Rasulgarh","Silicon Institute of Technology","Tomando","Trident Academy Of Technology","Utkal Hospital"};    printf("\nNodes:\n");

    for (int i = 0; i < V; i++) {
        printf("%d - %s\n", i, places[i]);
    }
}

 int getMenuChoice() {
    int choice;
    printf("\nEnter your choice: ");
    scanf("%d", &choice);
    return choice;
}

 void getSourceDestNodes(int *source, int *destination) {
    printf("\nEnter the serial number of source node: ");
    scanf("%d", source);
    printf("Enter the serial number of destination node: ");
    scanf("%d", destination);
}

int main() {
    Graph graph;
     initializeGraph(&graph, V);
    int dist[MAX_NODES];
    int temp_graph[MAX_NODES][MAX_NODES];

    int choice, source, destination;
    while (1) {
        displayMenu();
        choice = getMenuChoice();
        switch (choice) {
            case MENU_DISPLAY_GRAPH_INFO:
                displayNodeEdgeInfo(&graph);
                break;
            case MENU_DISPLAY_GRAPH:
                displayNodes();
                break;
            case MENU_FIND_SHORTEST_PATH:
                getSourceDestNodes(&source, &destination);

                    for (int i = 0; i < graph.num_nodes; i++) {
                        for (int j = 0; j < graph.num_nodes; j++) {
                            temp_graph[i][j] = graph.adjacency_matrix[i][j];
                        }
                    }

                 dijkstra(temp_graph, source, destination);

                break;
            case MENU_EXIT:
                printf("\nExiting...\n");
                return 0;
            default:
                printf("\nInvalid choice! Please try again.\n");
        }
   }

    return 0;
}