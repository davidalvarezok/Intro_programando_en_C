#include <stdio.h>
#include <stdlib.h>
#define LONG 300

int main(){
   FILE *f;
   char linea[LONG], *ptr;

   f = fopen("prueba.txt", "r");
   if (f == NULL){
       printf ("\nError al abrir archivo fuente\n");
       return 1;
   }
   ptr = fgets(linea,LONG,f);
   while (!feof(f)){
       printf("%s",linea);
       ptr = fgets(linea,LONG,f);
   }
   if (ptr != NULL){
       printf("%s",linea);
   }
//   while (fgets(linea,LONG,f)){
//      printf("%s",linea);
//   }
   fclose(f);
   return 0;
}
