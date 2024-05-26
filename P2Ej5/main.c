#include <stdio.h>
#include <stdlib.h>
#define COL 3

void suma(int [][COL], int [][COL], int [][COL]);
void mostrar(int [][COL]);
int main()
{
    int A[2][COL] = {
        {1, 3, 1},
        {1, 0, 0}
    };
    int B[2][COL] = {
        {0, 0, 5},
        {7, 5, 0}
    };
    int C[2][COL] = {0};
    mostrar(A); printf("\n");
    mostrar(B); printf("\n");
    suma(A,B,C);
    mostrar(C);
    return 0;
}
void suma (int A[][COL], int B[][COL], int C[][COL])
{
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}
void mostrar (int M[][COL])
{
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            printf("%d ",M[i][j]);
        }
        printf("\n");
    }
}
