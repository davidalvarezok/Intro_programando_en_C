#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, resul;
    char c;
    printf("Ingrese un numero(1)\n");
    scanf("%d", &num1);
    printf("Ingrese un numero(2)\n");
    scanf("%d", &num2);
    printf("Ingrese operador\n");
    scanf(" %c", &c);
    switch (c) {
        case ('+'): {resul = num1 + num2;
            printf("%d", resul);
            break; }
        case ('-'): {resul = num1 - num2;
            printf("%d", resul);
            break; }
        case ('/'): {resul = num1 / num2;
            printf("%d", resul);
            break; }
        case ('x'): {resul = num1 * num2;
            printf("%d", resul);
            break; }
        default: {printf("Error: Ingrese un operador valido"); }
    }

    return 0;
}
