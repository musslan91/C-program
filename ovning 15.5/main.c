#include <stdio.h>
#include <stdlib.h>

int main(){

unsigned int a;

printf("Skriv tal: \n");

scanf("%x", &a);
/*Tittar ifall det tredje binära talet är en 1:a och byter ut den till en nolla.*/
   if (a & 0x4) {
     a = a & 0xfffb;
     a = a | 0x1;
   }
   printf("Talet blir: %x\n\n", a);   
   
}