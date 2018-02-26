#include <stdio.h>
#include <stdlib.h>
#include "funktion.h"


void print_frac(frac res) { 
	printf("%d %d\n", res.t1, res.n1); //Vet inte hur jag ska flytta resultatet hit till APIn?!
}

frac frac_plus(frac f1, frac f2) {
		  frac res; 
	  	  res.t1 = f1.t1 * f2.n1 + f2.t1 * f1.n1;
	  	  res.n1 = f1.n1 * f2.n1;
	  	  return res;
}


frac frac_minus(frac f1, frac f2){
		frac res; 
		if(f1.n1 == f2.n1){
	  	res.t1 = f1.t1 - f2.t1;
	  	res.n1 = f1.n1;
		}else{
	  	res.t1 = f1.t1 * f2.n1 - f2.t1 * f1.n1;
	  	res.n1 = f1.n1 * f2.n1;
	  	return res;
		}
}

frac frac_times(frac f1, frac f2){
		frac res; 
		res.t1 = f1.t1 * f2.t1;
		res.n1 = f1.n1 * f2.n1;
		return res;
}

frac frac_divide(frac f1, frac f2){
		frac res; 
		res.t1 = f1.t1*f2.n1;
		res.n1 = f1.n1*f2.t1;
		return res;
}