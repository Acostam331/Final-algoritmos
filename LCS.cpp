#include <iostream>

using namespace std;

int LCS(string, string);

int main()
{
    string A = "hola";
    string B = "horacio";
    int resultado = LCS(A, B);
    cout << "Se la come el de " << resultado; // Esperado 3
    return 0;
}

int LCS(string A, string B)
{
    int nA = A.length(), nB = B.length();
    int M[nA + 1][nB + 1];
    for (int i = 0; i <= nA; i++)
    {
        M[i][0] = 0;
    }
    for (int i = 1; i <= nB; i++)
    {
        M[0][i] = 0;
    }
    for (int i = 1; i <= nA; i++)
    {
        for (int j = 1; j <= nB; j++)
        {
            if (A[i - 1] == B[j - 1])
            {
                M[i][j] = 1 + M[i - 1][j - 1];
            }
            else
            {
                M[i][j] = max(M[i - 1][j], M[i][j - 1]);
            }
        }
    }
    return M[nA][nB];
}