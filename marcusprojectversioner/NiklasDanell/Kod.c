#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <stdbool.h>
int val;

double multiplication (double a, double b){
  double sum = a*b;
  return sum;
}

double res_tot(double r1, double r2, double r3){
    double rtot= (1/r1) + (1/r2) + (1/r3);
    rtot= 1/rtot;
    return rtot;
}
int startup (void){
  printf("\nVälj vilka storheter du vill beräkna:\n"
  "Välj 1 för: OHMS LAG\n"
  "Välj 2 för: Rtot\n"
  "Välj 3 för: EFFEKTLAGEN ENKEL\n"
  "Välj 4 för: SKENBAR EFFEKT ENFAS\n"
  "Välj 5 för: AKTIV EFFEKT/MEDELEFFEKT ENFAS\n"
  "Välj 6 för: SKENBAR EFFEKT 3-FAS\n"
  "Välj 7 för: AKTIV EFFEKT 3-FAS\n"
  "Välj 0 för: FÖR ATT AVSLUTA\n");
  scanf("%d", &val);
return val;
}
void ohms (void){
  printf("Ohms lag spänningen(volt/V) betäckning U lika med Resistansen(Ohm) betäckning R \n"
  "gånger Strömmen(Ampere) med betäckningen I. Kort U=R*I. \n\n");
  double r, i;
  printf("Skriv resistans R < 20 000ohm: \n ");
    scanf("%lf", &r);
        while(r > 20000)
        {
          printf("För högt värde, försök igen: \n");
          scanf("%lf", &r);
          }
    printf("Skriv ström I < 440 Ampere: \n");
    scanf("%lf", &i);
              while(i > 440)
              {
                  printf("För högt värde, försök igen: \n");
                  scanf("%lf", &i);
              }
    printf("%f V\n", multiplication(r, i));
}

void rtot (void){
  printf("Resistans sammankopplade i parallella kretsar är lika med 1 delat Resistans R total är lika med\n"
  "Resistans 1/R1 + 1/R2 + 1/R3 då vi högst använder tre resistanser.\n\n"
  "Skriv resistans R1 < 20 000ohm: \n ");
  double r1,r2,r3;
  scanf("%lf", &r1);
          while(r1 > 20000)
          {
              printf("För högt värde, försök igen: \n");
              scanf("%lf", &r1);
          }
    printf("Skriv resistans R2 < 20 000ohm: \n ");
    scanf("%lf", &r2);
          while(r2 > 20000)
          {
              printf("För högt värde, försök igen: \n");
              scanf("%lf", &r2);
          }
    printf("Skriv resistans R3 < 20 000ohm: \n ");
    scanf("%lf", &r3);
          while(r3 > 20000)
          {
              printf("För högt värde, försök igen: \n");
              scanf("%lf", &r3);
          }
  printf("%f Ohm\n", res_tot(r1, r2, r3));
}

void el_lag(void){
    printf("Effektlagen enkel för likström är effekten P i Watt (W) lika med spänningen U i volt(V)\n"
    "gånger strömmen I i Ampere(A): \n\n"
    "Skriv spännngen U i volt(V): \n ");
    double u, i;
    scanf("%lf", &u);
    printf("Skriv ström Ampere I < 440A: \n");
    scanf("%lf", &i);
      while(i > 440)
      {
          printf("För högt värde, försök igen: \n");
          scanf("%lf", &i);
      }
  printf("%f W\n", multiplication(u, i));
}

void enfas (void){
    printf("Skenbar effekt enfas räknas med storheten VA(VoltAmpere) som är lika med spänningen U i volt(V)\n"
    "gånger strömmen I i ampere(A)\n\n"
    "Skriv Spänningen U i volt: \n ");
    double u, i;
    scanf("%lf", &u);
    printf("Skriv ström I < 440A: \n");
    scanf("%lf", &i);
      while(i > 440)
      {
          printf("För högt värde, försök igen: \n");
          scanf("%lf", &i);
      }
  printf("%f VA\n", multiplication(u, i));
}

void aktiv_effekt (void){
    printf("Aktiv medelefdekt enfas är lika med effekt P i watt(W) lika med"
    " spänningen U i volt(V) gånger strömmen I \n"
    "i Ampere gånger cosinus fi/efkektfaktor < 1:\n\n"
    "Skriv spänning U i volt: \n ");
    double u, i, cos;
    scanf("%lf", &u);
    printf("Skriv ström I: \n");
    scanf("%lf", &i);
      while(i > 440){
          printf("För högt värde, försök igen:\n");
          scanf("%lf", &i);
      }
    printf("Skriv in effektfaktorn cos > 0 && cos < 1:\n");
    scanf("%lf", &cos);
      while (cos < 0 && cos > 1)
      {
          printf("Fel värde, försök igen\n");
          scanf("%lf", &cos);
      }
  printf("%f W\n", (multiplication(u, i)*cos));
}

void skenbar_3fas(void) {
    printf("3-fas skenbar effekt är växelspänning är skenbar effekt S i"
    " voltampere(VA) lika med spänningen U i volt(V) \n"
    "gånger strömmen I i ampere(A) gånger roten ur 3 SQRT(3).\n\n"
    "Skriv spänning U i volt(V) < 400V: \n ");
    double u, i;
    scanf("%lf", &u);
      while(u > 400)
      {
          printf("För högt värde, försök igen: \n");
          scanf("%lf", &u);
      }
    printf("Skriv ström I i ampere < 440: \n");
    scanf("%lf", &i);
      while(i > 440)
      {
          printf("För högt värde, försök igen: \n");
          scanf("%lf", &i);
      }
  printf("%f VA\n", (multiplication(u, i)* sqrt(3)));
}

void aktiv_3fas (void){
    printf("3-fas aktiv effekt är effekten P i Watt(W) lika med spänningen U"
    " i volt(V) gånger strömmen I i ampere(A)\n"
    "gånger cos < 1 && cos > 0 gånger roten ur 3 SQRT(3).\n\n"
    "Skriv Spänningen U i volt(V): \n ");
    double u, i, cos;
    scanf("%lf", &u);
      while(u > 400)
      {
          printf("För högt värde, försök igen.\n");
          scanf("%lf", &u);
      }
    printf("Skriv ström I i ampere(A): \n");
    scanf("%lf", &i);
      while(i > 440)
      {
          printf("För högt värde, försök igen.\n");
          scanf("%lf", &i);
      }
    printf("Skriv in effektfaktorn cos > 0 && cos < 1: \n");
    scanf("%lf", &cos);
      while (cos < 0 && cos > 1)
      {
          printf("För högt värde, försök igen: \n");
          scanf("%lf", &cos);
      }
  printf("%f W\n", (multiplication(u ,i)* sqrt(3) * cos));
}

int main()
{
    system("chcp 1252");
    system("cls");
    while (1){
      switch (startup()){
          case 1:
            ohms();
            break;
          case 2:
            rtot();
            break;
          case 3:
            el_lag();
            break;
          case 4:
            enfas();
            break;
          case 5:
            aktiv_effekt();
            break;
          case 6:
            skenbar_3fas();
            break;
          case 7:
            aktiv_3fas();
            break;
          case 8:
            default:
            printf("Fel alternativ försök igen!: \n");
            break;
          case 0:
            return 0;
          }
 }
}