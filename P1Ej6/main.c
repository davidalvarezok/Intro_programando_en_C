#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valor, equivalente;
    printf("Ingrese valor en km ");
    scanf("%f", &valor);
    equivalente = valor*0.621;
    printf("El valor en millas es %f ", equivalente);
    return 0;
}
