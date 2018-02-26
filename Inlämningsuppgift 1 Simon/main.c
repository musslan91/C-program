#include <stdio.h>
#include <stdlib.h>
#include "funktion.h"

int main (void) {
	frac f, f1, f2;
	char ch, val[10]; 
	
	printf("Mata in första bråktalet!\n");
	scanf("%d %d", &f1.t1, &f1.n1);
	print_frac(f1);
	printf("Mata in andra bråktalet!\n");
	scanf("%d %d", &f2.t1, &f2.n1);
	print_frac(f2);
	
	printf("Ange operation! (+, -, * /, \n");
	scanf("%s", val);
	ch = val[0];
	
	if(ch == '+'){
		f = frac_plus(f1, f2);
		print_frac(f);
	}
	else if(ch == '-'){
		frac frac_minus(frac f1, frac f);
		print_frac(f);
	}
	else if(ch == '*'){
		frac frac_times(frac f1, frac f2);
		print_frac(f);
	}
	else if(ch == '/'){
		frac frac_divide(frac f1, frac f2);
		print_frac(f);
	}
}