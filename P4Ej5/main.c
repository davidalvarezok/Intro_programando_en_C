#include <stdio.h>
#include <stdlib.h>
#define N 3

void analizar (char *, int *, int *);
int main()
{
    char *v; int may = 0, min = 0;
    v = (char *)malloc(100*sizeof(char));
    for (int i = 0; i < N; i++){
        printf("Ingrese una oracion: ");
        gets(v);
        analizar(v,&min,&may);
        printf("El numero de mayusculas es %d minusculas %d\n",may, min);
        may = 0; min = 0;
    }
    free(v);
    return 0;
}
void analizar (char *c, int *min, int *may){
    int i = 0;
    while (*(c+i) != '\0'){
        if ((*(c+i) >= 'A') && (*(c+i) <= 'Z'))
            (*may)++;
        if ((*(c+i) >= 'a') && (*(c+i) <= 'z'))
            (*min)++;
        i++;
    }
}
