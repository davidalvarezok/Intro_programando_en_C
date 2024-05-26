#include <stdio.h>
#include <stdlib.h>
struct persona {
    char nom[15];
    int edad;
};
struct empresa {
    char nom[15];
    char direc[10];
};
int main()
{
    /*unsigned x;
    printf("Ingrese un numero entero sin signo: ");
    scanf("%u",&x);
    printf("%u es %s \n",x, (x % 2 ? "Impar" : "Par"));
    printf("%u es %s \n",x, (x && 2 ? "Impar" : "Par")); //&& simula el operador OR
    int a = 0, b = 5;
    printf("a && b = %d", a && b);*/
    struct persona p;
    struct empresa e;
    printf("ingrese nombre ");
    scanf("%s", e.nom);

   // p.nom = e.nom;

    printf("Ingrese edad ");
    scanf("%d", &p.edad);
    printf("Nombre : %s - edad %d",e.nom, p.edad);
    return 0;
}
