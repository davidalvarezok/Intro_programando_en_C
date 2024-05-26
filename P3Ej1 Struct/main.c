#include <stdio.h>
#include <stdlib.h>
#define MAX 3

struct Rectangulo {
    float base;
    float altura;
};
void LeerRectangulo (struct Rectangulo *);
float Area (struct Rectangulo);
int main()
{
    float minR = 9999; float aux; int menor;
    struct Rectangulo UnRectangulo;
    struct Rectangulo R[MAX];
    for (int i = 0; i < MAX; i++){
        LeerRectangulo(&R[i]);
        aux = Area(R[i]);
        if (minR > aux){
            minR = aux;
            menor = i + 1;
        }
    }
    printf("El rectangulo con menor area es %d",menor);
    /*LeerRectangulo(&UnRectangulo);
    printf("Base %.2f\n",UnRectangulo.base);
    printf("Altura %.2f\n",UnRectangulo.altura);
    float res = Area(UnRectangulo);
    printf("Area %.2f\n",res);*/
    return 0;
}
void LeerRectangulo (struct Rectangulo *r)
{
    printf("Ingrese Base ");
    scanf("%f",&r->base);
    printf("Ingrese Altura ");
    scanf("%f",&r->altura);
}
float Area (struct Rectangulo r)
{
    return r.altura * r.base;
}

