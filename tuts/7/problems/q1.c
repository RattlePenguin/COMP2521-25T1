// Adjacency List.
struct adjNode {
    int v;
    int weight;
    struct adjNode *next;
};

struct graph {
    int nV;
    int nE;
    struct adjNode **edges;
};

// Adjacency Matrix.
struct graph {
    int **edges;
};