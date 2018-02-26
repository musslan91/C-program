#include "calculatorFunc.h"

double addtion(double value1, double value2){

  return ((value1) + (value2));
}

double subtraction(double value1, double value2){
  return ((value1) - (value2));
}

double multiplication(double value1, double value2){
  return ((value1) * (value2));
}

double division(double value1, double value2){
  if(value2 == 0 || value2 == -0 ){
    return 0;
  }
  return ((value1) / (value2));
}
