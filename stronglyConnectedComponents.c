#include <stdio.h>
#include <stdlib.h>

int visited[100], j, start = 0, finish = 0, res[100], SCC[100], aTrans[100][100]; // a[100][100];
int a[5][5] = {0, 1, 0, 0, 0,
               0, 0, 1, 1, 0,
               1, 0, 0, 0, 0,
               0, 0, 0, 0, 1,
               0, 0, 0, 0, 0};
void AdjacencyMatrix(int n)
{

    int i, j;
    // for (i = 0; i < n; i++)
    // {
    //     for (j = 0; j <= n; j++)
    //     {
    //         a[i][j] = 0;
    //     }
    // }
    // read directly for now:

    // for (i = 0; i < n; i++)
    // {
    //     for (j = 0; j < n; j++)
    //     {
    //         printf("(%d,%d): ", i, j);
    //         scanf("%d", &a[i][j]);
    //     }
    // }
    printf("Adjacency Matrix: \n");
    for (i = 0; i < n; i++)
    {
        printf("\t");
        for (j = 0; j < n; j++)
        {
            printf("%d", a[i][j]);
        }
        printf("\n");
    }
}

void dfs(int u, int n)
{

    int v;
    visited[u] = 1;
    for (v = 0; v < n - 1; v++)
    {
        if (a[u][v] == 1 && visited[v] == 0)
        {
            dfs(v, n);
        }
    }
    j += 1;
    res[j] = u;
}
void dfsSCC(int u, int n)
{
    int v;
    visited[u] = 1;
    for (v = 0; v < n - 1; v++)
    {
        if (aTrans[u][v] == 1 && visited[v] == 0)
        {
            dfsSCC(v, n);
        }
    }
    // finish += 1;
    // SCC[finish] = u;
    printf("- %d ", u);
}

void stronglyConnected(int n)
{

    int i, u;
    for (i = 0; i < n; i++)
    {
        visited[i] = 0;
    }
    j = 0;
    for (u = 0; u < n; u++)
    {
        if (visited[u] == 0)
        {
            dfs(u, n);
        }
    }
    return;
}
int main()
{
    int n, i, j, p, SCCno = 0;

    printf("Enter number of vertices\n");
    scanf("%d", &n);

    AdjacencyMatrix(n);
    stronglyConnected(n);

    // Now call DFS on vertex that's on top of the stack

    printf("\nTranspose of matrix:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            aTrans[j][i] = a[i][j];
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("\t");
        for (j = 0; j < n; j++)
        {
            printf("%d", aTrans[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < n; i++)
    {
        visited[i] = 0;
    }

    for (i = n; i >= 1; i--)
        printf("%d", res[i]);
    for (i = n; i >= 1; i--)
    {
        finish = 0;
        dfsSCC(res[i], n);
        printf("\n\n");
        // printf("\nStrongly connected component no %d:", ++SCCno);
        // printf("\n");
    }

    // printf("SCC:");
    // for (i = n; i >= 1; i--)
    // {
    //     printf(" %d ", SCC[i]);
    // }
    return 0;
}