#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	//Rensning.
	system("cls");

	//Variabler
	double fahrenheit;
	double celsius;
	
	//Strängar
	char val[1];
	char inlasning[50];

	printf("FAHRENHEIT - CELSIUS\n");
	printf("====================\n\n");

printf("Ange temperaturen i fahrenheit :  ");
scanf("%s", &inlasning);//Läser från min array.


//Kollar i min sträng ifall det är ett komma någonstans eller punkt.
for(int i=0; i<strlen(inlasning); i++){

	if(inlasning[i] == ','){

		inlasning[i] = '.';

	}
}

//Scannar in min sträng.
sscanf(inlasning, "%lf", &fahrenheit);
//Uträkning av celsius.
celsius = (5.0/9.0) * (fahrenheit-32);


printf("Temperaturen \x84r  %.1lf", celsius); 
printf("C\n\n\n");

printf("En g\x86ng till (J/N)?\n");

//Mina strängar som jag jämför med varandra med bara 1 tecken.
scanf("%s", val);
	if(!strcmp(val, "J") || !strcmp(val, "j"))
	{
		return main();
	}

		else if(!strcmp(val, "N") || !strcmp(val, "n"))
		{

		return 0;	
		}

}

