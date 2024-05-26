#include <stdio.h>
#include <stdlib.h>
#define COL 3

void multiplicacion(int m[][COL],int,int,int);
void mostrar(int m[][COL],int,int);
int main()
{
    int matriz[2][3] = {{1,2,3},{4,5,6}};
    multiplicacion(matriz,3,2,2);
    mostrar(matriz,3,2);
    return 0;
}

void multiplicacion (int m[][COL], int m1, int n, int c)  //matriz, columnas, filas, escalar
{
    int i, j;
    for (i = 0; i < n; i++)
        for (j = 0; j < m1; j++)
            m[i][j]*= c;
}

void mostrar (int m[][COL], int m1, int n) //matriz, columnas, filas
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m1; j++)
            printf("M[i][j] = %d\n",m[i][j]);
}
