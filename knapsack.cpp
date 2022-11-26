#include <iostream>

using namespace std;

int knapsack(int, int, int *, int *);

int main()
{
    int n = 3, k = 50;

    int W = {10, 20, 30};
    int V = {60, 100, 120};

    int response = knapsack(n, k, W, V);

    cout << "Se la come el de " << response;

    return 0;
}

int knapsack(int n, int k, int *W, int *V)
{
    int M[n + 1][k + 1];

    for (int i = 0; i <= n; i++)
        M[i][0] = 0;
    for (int j = 1; j <= k; j++)
        M[0][j] = 0;

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= k; j++)
        {
            if (j >= W[i - 1])
            {
                M[i][j] = max(V[i] + M[i - 1][j - W[i - 1]], M[i - 1][j];)
            }
            else
            {
                M[i][j] = M[i - 1][j];
            }
        }

    return M[n][k];
}