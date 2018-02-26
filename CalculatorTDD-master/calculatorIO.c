#include <stdio.h>
#include <stdlib.h>
#include "calculatorFunc.h"
#include <ctype.h>
#include <windows.h>

void clearSTDINBuffer() {
	while (getchar() != '\n');
}

int checkIfNumber(char c){
  if(isdigit(c)){
    return 1;
  }
  else{
    return 0;
  }
}

int main()
{

  char val, val2 = 'J';

  while(toupper(val2) == 'J'){
    double tal1, tal2;
    system("cls");
    printf("V\x84lj r\x84knes\x84tt?\n");
    printf("Addition:1 Subtraktion:2 Multiplikation:3 Division:4\n");
    scanf("%c", &val);
    if(checkIfNumber(val)){
      if(val=='1')
      {
          printf("ADDITION\n");
          printf("Ange tal 1: ");
          scanf("%lf", &tal1);
          printf("Ange tal 2: ");
          scanf("%lf", &tal2);
          printf("%lf\n",addtion(tal1, tal2));
      }
      else if(val=='2')
      {
          printf("SUBTRAKTION\n");
          printf("Ange tal 1: ");
          scanf("%lf", &tal1);
          printf("Ange tal 2: ");
          scanf("%lf", &tal2);
          printf("%lf\n",subtraction(tal1, tal2));
      }
      else if(val=='3')
      {
          printf("MULTIPLIKATION\n");
          printf("Ange tal 1: ");
          scanf("%lf", &tal1);
          printf("Ange tal 2: ");
          scanf("%lf", &tal2);
          printf("%lf\n",multiplication(tal1, tal2));
      }
      else if(val=='4')
      {
          printf("DIVISION\n");
          printf("Ange tal 1: ");
          scanf("%lf", &tal1);
          printf("Ange tal 2: ");
          scanf("%lf", &tal2);
          printf("%lf\n",division(tal1, tal2));
      }
    }
    else{
      printf("Fel inmatning!");
    }
    printf("En g\x86ng till (J/N)?");
    clearSTDINBuffer();
    val2 = getc(stdin);
    clearSTDINBuffer();
  }
  return 0;
}
