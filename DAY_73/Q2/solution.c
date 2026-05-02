// Day 73 - Question 2
// Problem: Redundant Connection

int* findRedundantConnection(int** edges, int edgesSize, int* edgesColSize) {
    int* p = malloc((edgesSize + 1) * sizeof(int));
    for (int i = 0; i <= edgesSize; i++) p[i] = i;

    int* res = malloc(2 * sizeof(int));
    for (int i = 0; i < edgesSize; i++) {
        int u = edges[i][0], v = edges[i][1];
        int rootU = u, rootV = v;
        while (p[rootU] != rootU) rootU = p[rootU];
        while (p[rootV] != rootV) rootV = p[rootV];

        if (rootU == rootV) {
            res[0] = u; res[1] = v;
        } else {
            p[rootU] = rootV;
        }
    }
    return res;
}