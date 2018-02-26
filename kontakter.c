#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _person2_S {// Ge en typ ett nytt namn.
		char *namn;
		int alder;	
} person2;
//typedef int *ptr_to_int;

/*struct person {
		char *namn;
		int alder;	
} p1,p2;*/

person2 p1, p2, kontakt[10];

	
int main (void){
	
	//struct person *p, kontakter[1000];
	/*int pek = 2;
	ptr_to_int a;*/
	int ix, alder;
	char namn[64], alderstr[64];
	printf("Välkommen till kontakter!\n");
	for(ix = 0; ix < 3; ix++)
	{
		printf("Mata in kontakt nr %d\n", ix);
		printf("Ange namn:"); fflush(stdout);
		fgets(namn,64,stdin);
		kontakt[ix].namn = namn;
		printf("ange alder:\n"); fflush(stdout);
		fgets(alderstr,64,stdin);
		namn[strlen(namn)-1] = '\0';
		// kontakt[ix].namn = namn;
		// 1. Skapa ett nytt utrymme för sträng
		// och lägg i kontakt[ix].namn
		kontakt[ix].namn = malloc(strlen(namn));
		//2. Kopiera över det som finns i namn
		//till vårt nya utrymme
		strcpy(kontakt[ix].namn, namn);
		alder = atoi(alderstr);
		kontakt[ix].alder = alder;
		printf("namn: %s alder: %d\n", kontakt[ix].namn, kontakt[ix].alder);
	}
	
	for(ix = 0; ix < 3; ix++){
		printf("namn: %s alder: %d\n",
				kontakt[ix].namn, kontakt[ix].alder);
	}
	
	/*p1.namn = "Sven Svesson";
	p1.alder = 32;
	p2 = p1;
	/*printf("Person - Namn %s, Alder: %d\n",p1.namn,p1.alder);
	printf("Person - Namn %s, Alder: %d\n",p2.namn,p2.alder);*/
	
	//p = (struct person *) malloc(sizeof(struct person));
	//P = (person2 *)malloc(sizeof(person2));
	
	return 0;
}