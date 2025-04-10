#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void dfs(Graph g, int v, int nV, bool *visited, Set reachables);

Set reachable(Graph g, int src) {
    int nV = GraphNumVertices(g);
    bool *visited = malloc(sizeof(bool) * nV);
    Set reachables = SetNew();
    
    dfs(g, src, nV, visited, reachables);
    return reachables;
}

void dfs(Graph g, int v, int nV, bool *visited, Set reachables) {
    visited[v.id] = true;

    for (int i = 0; i < nV; ++i) {
        // Check if edge exists.
        if (g->edges[v.id][i] > 0) {
            SetAdd(reachables, i);
            dfs(g, i, nV, visited, reachables);
        }
    }
}