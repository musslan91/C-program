#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>


double compute(double fahrenheit);

int main()
{
    system("chcp 1252");
    /*Variabler som beh�vs
     *loop f�r att h�lla programmet i liv
     *tills anv�ndaren v�ljer att avsluta.

     *fahrenheit f�r att lagra anv�ndarens
     *input v�rde.

     *celsius f�r att lagra det nya v�rdet
     *efter omr�kningen fr�n fahrenheit till
     *celsisus

     *choice f�r att kolla om anv�ndaren
     *vill forts�tta eller inte*/
    bool loop = true;
    double fahrenheit = 0;
    double celsius = 0;
    char choice;
    /*While-loop som h�ller programmet i liv
     *s� l�nge som variabeln "loop" �r true*/
    while(loop){
        //Rensar kommandotolkf�nstret
        system("cls");

        printf("FAHRENHEIT - CELCIUS\n");
        printf("====================\n\n");

        printf("Ange temperaturen i Fahrenheit : ");
        scanf("%lf", &fahrenheit);

        //R�knar om fahrenheit till celsius
        celsius = compute(fahrenheit);

        printf("\n\nTemperaturen �r %.1f C", celsius);
        printf("\n\nEn g�ng till (J/N)?");
        scanf(" %c", &choice);

        /*Ifall anv�ndaren skriver in ett litet "j"
         *s� �ndras det om till ett stort 'J'*/
        choice = toupper(choice);
        //Kollar om anv�ndaren vill forts�tta eller inte
        if(choice != 'J'){
            loop = false;
        }
    }
}
/*Funktion f�r att r�kna om fr�n fahrenheit till celsius*/
double compute(double fahrenheit){
  double celsius = (fahrenheit - 32) * 5/9;
  return celsius;
}
