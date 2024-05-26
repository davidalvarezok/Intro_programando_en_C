#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int factorial (int n){
    if (n == 1){
        return 1;
    }
    else {
        return n*factorial(n-1);
    }
}

int main()
{
    double n=3;
    for (int j=0; j<6; j++){
        n += ((double) (4*pow(-1,j)))/factorial(4+2*j);
    }
    printf("%.10lf",n);
    return 0;
}
