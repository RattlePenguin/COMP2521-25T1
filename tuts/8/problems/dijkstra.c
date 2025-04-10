#include <limits.h>
#include <stdio.h>
#include <stdbool.h>

// Define number of vertices
#define V 9

// Dijkstra's Algorithm for an adjacency matrix representation
void dijkstra(int graph[V][V], int src)
{
	int dist[V];
    int pred[V];
    Set vSet = SetNew();

    // Initialise arrays
	for (int i = 0; i < V; i++) {
		dist[i] = INT_MAX;
        pred[i] = -1;
        SetAdd(vSet, i)
    }

	dist[src] = 0;

    while (!SetIsEmpty(vSet)) {
        // Pop the vertex v with the lowest dist[v]
        // Ideally this will be done with a Priority Queue
        int v = getLowest(vSet, dist);

        for (int i = 0; i < V - 1; ++i) {
            int weight = graph[v][i];

            if (weight > 0
                && dist[i] > dist[v] + weight) {
                // Edge Relaxation
                dist[i] = dist[v] + weight;
            }
        }
    }

	// print the constructed distance array
	printSolution(dist, V);
}
