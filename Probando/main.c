//#include <stdio.h>
//#include <stdlib.h>
//#include "cabecera.h"
//
//void verTexto(char *);
//int main(/*int argc, char * argv[]*/)
//{
//
////    if (argc != 2)
////        printf("Olvido su nombre\n");
////    else
////        printf("Hola %s\n",argv[1]);
////    char cadena[] = "texto escrito";
////    printf("Ejecutando...\n");
////    verTexto(cadena);
////    printf("Fin..\n");
//    return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//#define SQUAREOF(x) (x)*(x)
//int main() {
// int xin=3;
// printf("\nxin=%i",xin);
// printf("\nSQUAREOF(xin)=%i", SQUAREOF(xin));
// printf("\nSQUAREOF(xin+4)=%i", SQUAREOF(xin+4));
// printf("\nSQUAREOF(xin+xin)=%i", SQUAREOF(xin+xin));
//}
#include <stdio.h>
#include <stdlib.h>
#define size 25
void imprimir(int * v, int size){
 int i;
 for (i=0; i<size; i++){
 printf("v[%d]= %d", i, v[i]);
 }
}
int main(){
 int v[size];
 imprimir(v, size);
 return 0;
}
