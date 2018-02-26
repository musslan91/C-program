#include "problem2.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int falt(void){//Funktionen

int falt1[3] = {1,2,3};
char falt2[3] = {'a','b','c'};

int i = 0;
 char bokstavnummer[10][20];
//Mergar ihop två arrays med en char array och en int array.
for (i = 0; i < 100; i++){
 if ( sprintf(bokstavnummer[i], "%c%d", falt2[i], falt1[i]) != 2)
             printf("Error in %d iteration\n", (i+1));
}
}