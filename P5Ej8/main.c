#include <stdio.h>
#include <stdlib.h>
#define N 5
int main()
{
    FILE *arch1, *arch2;
    int num;
    arch1 = fopen("numeros.txt", "w");
    arch2 = fopen("numeros.dat", "wb");
    if (!arch1 && !arch2){
        printf("Error al abrir los archivos.\n");
        return 1;
    }
    for (int i=0; i<N; i++){
        printf("Ingrese un numero entero (0 al 9): ");
        scanf("%d",&num);
        fwrite(&num,sizeof(int),1,arch2);
        fprintf(arch1,"%d\n",num);
    }
    fclose(arch1);
    fclose(arch2);
    printf("Hello world!\n");
    return 0;
}
