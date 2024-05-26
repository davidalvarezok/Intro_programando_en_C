#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * f;
    int codigo; float monto, total = 0;
    f = fopen("apuestas.txt", "r");
    if (!f){
        printf("Error al abrir el archivo\n");
        return (1);
    }
    fscanf(f,"%d|%f;",&codigo,&monto);
    while (!feof(f)){
        total = total + monto;
        printf("El codigo leido %d y el monto %.2f\n",codigo,monto);
        fscanf(f,"%d|%f;",&codigo,&monto);
    }
    printf("El monto total apostado %.3f",total);
    fclose(f);
    return 0;
}
