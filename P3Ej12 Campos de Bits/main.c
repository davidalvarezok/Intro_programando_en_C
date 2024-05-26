#include <stdio.h>
#include <stdlib.h>

typedef struct {
    unsigned RED: 8;
    unsigned GREEN: 8;
    unsigned BLUE: 8;
} RGB24;

typedef struct {
    unsigned RED: 5;
    unsigned GREEN: 6;
    unsigned BLUE: 5;
} RGB16;

void leerRGB (RGB24 *a){
    unsigned valor;
    printf("RED (0...255) ");
    scanf("%u",&valor);
    a->RED = valor;
    printf("GREEN (0...255) ");
    scanf("%u",&valor);
    a->GREEN = valor;
    printf("BLUE (0...255) ");
    scanf("%u",&valor);
    a->BLUE = valor;
}
void convertir16 (RGB16 *b, RGB24 a){
    b->BLUE = a.BLUE;
    b->GREEN = a.GREEN;
    b->RED = a.RED;
}
int main()
{
    RGB24 a;
    RGB16 b;
    leerRGB(&a);
    convertir16(&b,a);
    printf("a.red = %u a.green = %u a.blue = %u\n", a.RED, a.GREEN, a.BLUE);
    printf("b.red = %u b.green = %u b.blue = %u\n", b.RED, b.GREEN, b.BLUE);
    return 0;
}
