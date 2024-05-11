    #include "adjMatrix.h"

   
    void initializeGraph(Graph *graph, int num_nodes) {
        graph->num_nodes = num_nodes;
       
        for (int i = 0; i < num_nodes; i++) {
            for (int j = 0; j < num_nodes; j++) {
                graph->adjacency_matrix[i][j] = INF;
            }
           
            graph->adjacency_matrix[i][i] = 0;
        }
        addEdgesToGraph(graph);
    }

    void addEdge(Graph *graph, int source, int destination, float weight) {
        graph->adjacency_matrix[source][destination] = weight;
        graph->adjacency_matrix[destination][source] = weight; 
    }

    void addEdgesToGraph(Graph *graph) {
   
    addEdge(graph, 0, 1, 10.6);
    addEdge(graph, 0, 3, 5.8);
    addEdge(graph, 0, 5, 14.8);
    addEdge(graph, 1, 5, 9.4);
    addEdge(graph, 1, 3, 6.8);
    addEdge(graph, 1, 11, 6.4);
    addEdge(graph, 1, 21, 16.7);
    addEdge(graph, 2, 5, 8.5);
    addEdge(graph, 2, 22, 4.0);
    addEdge(graph, 2, 18, 8.6);
    addEdge(graph, 2, 15, 9.8);
    addEdge(graph, 3, 5, 12.6);
    addEdge(graph, 3, 18, 7.8);
    addEdge(graph, 3, 1, 7.5);
    addEdge(graph, 4, 2, 7.3);
    addEdge(graph, 4, 5, 15.7);
    addEdge(graph, 4, 19, 5.2);
    addEdge(graph, 4, 11, 7.4);
    addEdge(graph, 4, 21, 12.8);
    addEdge(graph, 5, 21, 24.7);
    addEdge(graph, 5, 24, 7.1);
    addEdge(graph, 5, 2, 20.4);
    addEdge(graph, 5, 19, 20.6);
    addEdge(graph, 5, 12, 19.1);
    addEdge(graph, 5, 11, 13.1);
    addEdge(graph, 6, 5, 12.0);
    addEdge(graph, 6, 11, 3.2);
    addEdge(graph, 6, 19, 6.1);
    addEdge(graph, 6, 22, 10.1);
    addEdge(graph, 6, 15, 4.2);
    addEdge(graph, 7, 5, 11.00);
    addEdge(graph, 7, 2, 15.6);
    addEdge(graph, 7, 19, 14.5);
    addEdge(graph, 7, 10, 12.3);
    addEdge(graph, 8, 5, 16.5);
    addEdge(graph, 8, 19, 4.5);
    addEdge(graph, 9, 19, 11.0);
    addEdge(graph, 9, 5, 22);
    addEdge(graph, 9, 4, 12.8);
    addEdge(graph, 10, 5, 10.5);
    addEdge(graph, 10, 4, 6.4);
    addEdge(graph, 11, 5, 10.2);
    addEdge(graph, 11, 4, 5.6);
    addEdge(graph, 11, 21, 13.1);
    addEdge(graph, 12, 5, 17.0);
    addEdge(graph, 13, 19, 7.0);
    addEdge(graph, 14, 5, 2.5);
    addEdge(graph, 15, 19, 9.9);
    addEdge(graph, 15, 5, 10.1);
    addEdge(graph, 16, 5, 22.8);
    addEdge(graph, 17, 5, 21.8);
    addEdge(graph, 17, 19, 10.8);
    addEdge(graph, 18, 5, 16.7 );
    addEdge(graph, 18, 19, 4.4);
    addEdge(graph, 19, 5, 17.8);
    addEdge(graph, 19, 3, 7.2);
    addEdge(graph, 19, 4, 3.9);
    addEdge(graph, 20, 19, 4.4);
    addEdge(graph, 20, 5, 13.6);
    addEdge(graph, 21, 5, 20.6);
    addEdge(graph, 22, 19, 9.6);
    addEdge(graph, 23, 19, 13.5 );
    addEdge(graph, 24, 5, 5.6);
    addEdge(graph, 24, 19, 14.5);
    addEdge(graph, 24, 11, 7.1);
    addEdge(graph, 25, 11, 11.7);
    addEdge(graph, 25, 19, 9.5);
    }

   
    void printGraph(Graph *graph) {
        printf("Adjacency Matrix:\n");
        for (int i = 0; i < graph->num_nodes; i++) {
            for (int j = 0; j < graph->num_nodes; j++) {
                if (graph->adjacency_matrix[i][j] == INF) {
                    printf("INF\t");
                } else {
                    printf("%d\t", graph->adjacency_matrix[i][j]);
                }
            }
            printf("\n");
        }
    }