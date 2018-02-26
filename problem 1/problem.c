#include <stdlib.h>
#include <stdio.h>
#include "problem.h"

int whileloop(void){

int falt[7] = {10,20,30,40,50,60,70};
int i = 0;
int summa = 0;

while( i < 7){
summa = summa + falt[i++];
 }
return falt[i];
}

int forloop(void){
int falt[7] = {10,20,30,40,50,60,70};

int summa = 0;
int i = 0;

  for (i = 0; i < 7; i++) {
   summa = summa + falt[i];
  }
  return summa;
}

int recursion(void){

    int falt[7] = {10,20,30,40,50,60,70};
    int summa;
    int n;

    summa = recursion(falt,7);

    if (n < 0) {
     return 0;

   } 

   else
     return (falt[n] + recursion(falt, n-1));
 }

