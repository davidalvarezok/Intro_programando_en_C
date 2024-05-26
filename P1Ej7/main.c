#include <stdio.h>
#include <stdlib.h>
/*Se le agrega un espacio antes del segundo scanf*/
int main()
{
    char a, b;
    printf("Ingrese el primer caracter:\n");
    scanf("%c", &a);
    printf("Se leyó el caracter: %c\n", a);
    printf("Ingrese el segundo caracter:\n");
    scanf(" %c", &b); /*le agrego un espacio*/
    printf("Se leyó el caracter: %c\n", b);

    return 0;
}
