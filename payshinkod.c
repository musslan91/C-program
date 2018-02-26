#include <stdio.h>
#include <stdlib.h>

int main()
{
	float fahrenheit, celcius;
	
	printf("FAHRENHEIT - CELCIUS\n");
	printf("====================\n\n");
	printf("Ange temperaturen i Fahrenheit: ");
	scanf("%.0f\n", &fahrenheit);
	
	celcius = (fahrenheit - 32) * 5 / 9;
	
	printf("Temperaturen är %.0f", &celcius);
	printf("\n\n");
	printf("En gång till (J/N)?");
}

/*int tempLayout()
{
	
}

int convFahrToCel(double cc)
{
	T(°C) = (T(°F) - 32) * 5 / 9;
	
}*/