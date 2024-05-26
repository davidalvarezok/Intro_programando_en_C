#include <stdio.h>
#include <stdlib.h>

float promedio (float *v,int);
float minimo (float *v,int);
int PosMaximo (float *v,int);
int main()
{
    float v[5] = {2.3, 5.6, 4, 5.2, 3.6};
    printf("El promedio es: %.3f\n", promedio(v,5));
    printf("El minimo es: %.3f\n", minimo(v,5));
    printf("La posicion del max es: %d\n", PosMaximo(v,5));
    return 0;
}

float promedio (float v[], int n)
{
    float pro = 0;
    for (int i = 0; i < n; i++)
        pro+= v[i];
    return pro/n;
}

float minimo (float v[], int n)
{
    float min = 999;
    for (int i = 0; i < n; i++)
    {
        if (min > v[i])
            min = v[i];
    }
    return min;
}

int PosMaximo (float v[], int n)
{
    float max = 0; int pos;
    for (int i = 0; i<n; i++){
        if (v[i] > max) {
            max = v[i];
            pos = i;
        }
    }
    return pos;
}
