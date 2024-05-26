#include <stdio.h>
#include <stdlib.h>

void analizar (int [], int);
void mostrar (int []);
int main()
{
    int n, dig, A[10] = {0};
    printf("Ingresa un numero entero: ");
    scanf("%d", &n);
    while (n != 0) {
        dig = n%10;
        analizar(A,dig);
        n/=10;
    }
    mostrar(A);
    return 0;
}
void analizar (int A[], int n)
{
    switch (n)
    {   case(0): {A[0]++; break; }
        case(1): {A[1]++; break; }
        case(2): {A[2]++; break; }
        case(3): {A[3]++; break; }
        case(4): {A[4]++; break; }
        case(5): {A[5]++; break; }
        case(6): {A[6]++; break; }
        case(7): {A[7]++; break; }
        case(8): {A[8]++; break; }
        case(9): {A[9]++; break; }
        default: break;
    }
}
void mostrar (int M[])
{
    printf("La cantidad de veces que aparece cada digito es \n");
    for (int i = 0; i < 10; i++){
        printf("%d = %d \n",i, M[i]);
    }
}
