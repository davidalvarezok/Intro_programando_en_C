//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
#include <stdio.h>
#include <stdlib.h>
int main (int argc, char * argv[]) {
    printf("\nargc = %d",argc);
    printf("\nargv[0] => %s",argv[0]);
    return 0;
}


//void inv_str(char []);
//int main(){
//    char cadena[] = "Juan David";
//    inv_str(cadena);
//    printf("%s",cadena);
//    return 0;
//}
//void inv_str( char s1[] ){
//    int cant = strlen(s1);
//    char * s2= s1 + cant -1; //cant-1 para quitar el /0
//    char temp;
//    for (; cant > 1; s1++, s2--){
//        printf("s1 = %c\n",*s1);
//        printf("s2 = %c\n",*s2);
//        temp = *s1;
//        *s1 = *s2;
//        *s2 = temp;
//        cant = cant - 2;
//    }
//}


