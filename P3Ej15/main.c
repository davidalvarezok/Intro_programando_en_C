#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef union figura {
    struct circulo {
        int radio;
    } circulo_t;
    struct cuadrado {
        int lado;
    } cuadrado_t;
    struct rectangulo {
        int base;
        int altura;
    } rectangulo_t;
    struct elipse {
        int base;
        int altura;
    } elipse_t;
} figura_t;

void cargarFigura(figura_t *, int *);
void superficie(figura_t, int);
int main()
{
    figura_t fig; int t;
    cargarFigura(&fig,&t);
    superficie(fig,t);
    return 0;
}
void cargarFigura(figura_t *f, int *tipo){ //Recibo un "puntero" a direccion a memoria
    printf("ingrese tipo de figura cuadrado(1), rectangulo(2), circulo(3) o elipse(4): ");
    scanf("%d",tipo);
    switch (*tipo) {
        case 1: printf("Lado: "); scanf("%d",&f->cuadrado_t.lado); //Almacena en f->...
            break;
        case 2: printf("Base: "); scanf("%d",&f->rectangulo_t.base);
            printf("Altura: "); scanf("%d",&f->rectangulo_t.altura);
            break;
        case 3: printf("Radio: "); scanf("%d",&f->circulo_t.radio);
            break;
        case 4: printf("Largo: "); scanf("%d",&f->elipse_t.base);
            printf("Ancho: "); scanf("%d",&f->elipse_t.altura);
            break;
        default: printf("El numero ingresado no es valido");
            break;
    }
}
void superficie (figura_t f, int tipo){
    double pi = M_PI;
    switch (tipo) {
        case 1: printf("Superficie cuadrado %d",f.cuadrado_t.lado*f.cuadrado_t.lado);
            break;
        case 2: printf("Superficie rectangulo %d",f.rectangulo_t.altura*f.rectangulo_t.base);
            break;
        case 3: printf("Superficie circulo %f",f.circulo_t.radio*2*pi);
            break;
        case 4: printf("Superficie elipse %f",f.elipse_t.altura*f.elipse_t.base*pi);
            break;
        default: printf("El tipo ingresado no es valido");
            break;
    }
}
