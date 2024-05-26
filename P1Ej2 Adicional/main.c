#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int n, e=1, dimF=0;
    printf("Ingrese un numero: ");
    scanf("%d",&n);
    if (n<=1){
        dimF = 1;
    } else {
        while (n > (pow(2,e)+1)) {
            e++;
        }
        dimF = e+1;
    }
    printf("La dimension es %d\n",dimF);
    int aux=dimF, dig;
    int binario[dimF];
    while (n>=2){
        dig = n%2;
        binario[aux-1] = dig;
        aux--;
        n/=2;
    }
    binario[aux-1] = n;
    for(int i=0; i<dimF; i++){
        printf("%d",binario[i]);
    }
    return 0;
}
