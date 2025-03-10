#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define MAX 10

int adj[MAX][MAX], tree[MAX][2], n;

void readMatrix() {
    printf("Enter the number of nodes in G: ");
    scanf("%d", &n);
    printf("Enter the adjacency matrix of G:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &adj[i][j]);
        }
    }
}

int MST(int src) {
    int visited[MAX], d[MAX], parent[MAX];
    int i, j, k, min, u, v, cost = 0;

    // Initialize arrays
    for (i = 0; i < n; i++) {
        d[i] = adj[src][i];
        visited[i] = 0;
        parent[i] = src;
    }

    visited[src] = 1;
    k = 0;  // Corrected k index for storing edges

    for (i = 1; i < n; i++) {  // Spanning tree has n-1 edges
        min = INT_MAX;

        // Find the minimum weight edge
        for (j = 0; j < n; j++) {
            if (visited[j] == 0 && d[j] < min) {
                min = d[j];
                u = j;
            }
        }

        // Mark vertex as visited
        visited[u] = 1;
        cost += min;  // Corrected cost update

        // Store the edge in MST tree
        tree[k][0] = parent[u];  // Parent node
        tree[k][1] = u;  // Connected node
        k++;  // Move to the next edge

        // Update distances
        for (v = 0; v < n; v++) {
            if (visited[v] == 0 && adj[u][v] < d[v]) {
                d[v] = adj[u][v];
                parent[v] = u;
            }
        }
    }

    return cost;
}

void display(int cost) {
    printf("\nThe edges of the MST are:\n");
    for (int i = 0; i < n - 1; i++) {  // MST has n-1 edges
        printf("%d --> %d\n", tree[i][0], tree[i][1]);
    }
    printf("Total cost of the MST is: %d\n", cost);
}

int main() {
    int src, Tcost;
    readMatrix();
    printf("Enter the source: ");
    scanf("%d", &src);

    Tcost = MST(src);
    display(Tcost);

    return 0;
}