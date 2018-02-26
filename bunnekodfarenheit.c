#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>


double compute(double fahrenheit);

int main()
{
    system("chcp 1252");
    /*Variabler som behövs
     *loop för att hålla programmet i liv
     *tills användaren väljer att avsluta.

     *fahrenheit för att lagra användarens
     *input värde.

     *celsius för att lagra det nya värdet
     *efter omräkningen från fahrenheit till
     *celsisus

     *choice för att kolla om användaren
     *vill fortsätta eller inte*/
    bool loop = true;
    double fahrenheit = 0;
    double celsius = 0;
    char choice;
    /*While-loop som håller programmet i liv
     *så länge som variabeln "loop" är true*/
    while(loop){
        //Rensar kommandotolkfönstret
        system("cls");

        printf("FAHRENHEIT - CELCIUS\n");
        printf("====================\n\n");

        printf("Ange temperaturen i Fahrenheit : ");
        scanf("%lf", &fahrenheit);

        //Räknar om fahrenheit till celsius
        celsius = compute(fahrenheit);

        printf("\n\nTemperaturen är %.1f C", celsius);
        printf("\n\nEn gång till (J/N)?");
        scanf(" %c", &choice);

        /*Ifall användaren skriver in ett litet "j"
         *så ändras det om till ett stort 'J'*/
        choice = toupper(choice);
        //Kollar om användaren vill fortsätta eller inte
        if(choice != 'J'){
            loop = false;
        }
    }
}
/*Funktion för att räkna om från fahrenheit till celsius*/
double compute(double fahrenheit){
  double celsius = (fahrenheit - 32) * 5/9;
  return celsius;
}
