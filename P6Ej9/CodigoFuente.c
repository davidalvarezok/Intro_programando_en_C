#include <stdio.h>
#include "imath.h"

int potencia (int x,int y){
    for (int i=0; i<(y-1); i++){
        x *= x;
    }
    return x;
}
int cuadrado(int x){
    return x*x;
}
int cubo(int x){
    return x*x*x;
}
int factorial(int i){
    if (i == 0 || i == 1){
        return 1;
    } else {
        return i*factorial(i-1);
    }
}
