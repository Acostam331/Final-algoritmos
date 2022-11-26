#include <iostream>

using namespace std;

int 1DMAX(int *, int);

int main()
{
    int n = 6;
    int A[n] = {-5, 3, 9, 7, -4, 2};

    int response = 1DMAX(A, n);

    cout << "Se la come el de " << response;

    return 0;
}

int 1DMAX(int *A, int n)
{
    int M[n + 1], S = 0;

    M[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        S += A[i - 1];
        S = max(S, A[i - 1]);
        M[i] = max(S, M[i - 1]);
    }
    return M[n];
}