#include <stdio.h>
#include <math.h>
#include "calculations.h"

int showMenu() {
  int val;
  printf("\n");
  printf("Välj vilka storheter du vill beräkna:\n");
  printf("Välj 1 för: OHMS LAG\n");
  printf("Välj 2 för: Rtot\n");
  printf("Välj 3 för: EFFEKTLAGEN ENKEL\n");
  printf("Välj 4 för: SKENBAR EFFEKT ENFAS\n");
  printf("Välj 5 för: AKTIV EFFEKT/MEDELEFFEKT ENFAS\n");
  printf("Välj 6 för: SKENBAR EFFEKT 3-FAS\n");
  printf("Välj 7 för: AKTIV EFFEKT 3-FAS\n");
  printf("Välj 0 för: för ATT AVSLUTA\n");
  scanf("%d", &val);
  return val;
}

void errorMessage() {
  printf("För högt värde, Försök igen: \n");
}

double ohmsLaw() {
  printf("Ohms lag spänningen(volt/V) betäckning U lika med Resistansen(Ohm) betäckning R \n");
  printf("gånger Strömmen(Ampere) med betäckningen I. Kort U=R*I. \n\n");
  double r, i;
  printf("Skriv resistans R < 20 000ohm: \n ");
  scanf("%lf", &r);
  if(r > 20000)
  {
      errorMessage();
      return 0;
  }
  printf("Skriv ström I < 440 Ampere: \n");
  scanf("%lf", &i);
  if(i > 440)
  {
    errorMessage();
    return 0;
  }

  return multiplication(r ,i);
}

double rTot() {
  printf("Resistans sammankopplade i parallella kretsar är lika med 1 delat Resistans R total är lika med\n");
  printf("Resistans 1/R1 + 1/R2 + 1/R3 då vi högst använder tre resistanser.\n\n");
  double r1,r2,r3;
  printf("Skriv resistans R1 < 20 000ohm: \n ");
  scanf("%lf", &r1);
  if(r1 > 20000)
  {
      errorMessage();
      return 0;
  }
  printf("Skriv resistans R2 < 20 000ohm: \n ");
  scanf("%lf", &r2);
  if(r2 > 20000)
  {
      errorMessage();
      return 0;
  }
  printf("Skriv resistans R3 < 20 000ohm: \n ");
  scanf("%lf", &r3);
  if(r3 > 20000)
  {
      errorMessage();
      return 0;
  }
  return res_tot(r1, r2, r3);
}

double powerLaw() {
  printf("Effektlagen enkel För likström är effekten P i Watt (W) lika med spänningen U i volt(V)\n");
  printf("gånger Strömmen I i Ampere(A): \n\n");
  double u, i;
  printf("Skriv spänningen U i volt(V): \n ");
  scanf("%lf", &u);
  printf("Skriv ström Ampere I < 440A: \n");
  scanf("%lf", &i);
  if(i > 440)
  {
      errorMessage();
      return 0;
  }
  return multiplication(u, i);
}

double apparentEffect() {
  printf("Skenbar effekt enfas räknas med storheten VA(VoltAmpere) som är lika med spänningen U i volt(V)\n");
  printf("gånger Strömmen I i ampere(A)\n\n");
  double u, i;
  printf("Skriv spänningen U i volt: \n ");
 scanf("%lf", &u);
  printf("Skriv ström I < 440A: \n");
  scanf("%lf", &i);
  if(i > 440)
  {
    errorMessage();
    return 0;
  }
  return multiplication(u, i);
}

double activeEffect() {
  printf("Aktiv medelefdekt enfas är lika med effekt P i watt(W) lika med spänningen U i volt(V) gånger Strömmen I \n");
  printf("i Ampere gånger cosinus fi/efkektfaktor < 1:\n\n");
  double u, i, cos;
  printf("Skriv spänning U i volt: \n ");
  scanf("%lf", &u);
  printf("Skriv ström I: \n");
  scanf("%lf", &i);
  if(i > 440){
      errorMessage();
      return 0;
  }
  printf("Skriv in effektfaktorn cos > 0 && cos < 1:\n");
  scanf("%lf", &cos);
  if (cos < 0 && cos > 1)
  {
      errorMessage();
      return 0;
  }
  return aktiv_eff(u, i, cos);
}

double apparentEffectPhase() {
  printf("3-fas skenbar effekt är växelspänning är skenbar effekt S i voltampere(VA) lika med spänningen U i volt(V) \n");
  printf("gånger Strömmen I i ampere(A) gånger roten ur 3 SQRT(3).\n\n");
  double u, i;
  printf("Skriv spänning U i volt(V) < 400V: \n ");
  scanf("%lf", &u);
  if(u > 400)
  {
      errorMessage();
      return 0;
  }

  printf("Skriv ström I i ampere < 440: \n");
  scanf("%lf", &i);
  if(i > 440)
  {
      errorMessage();
      return 0;
  }
  return sken_3fas(u, i);
}

double activeEffectPhase() {

  printf("3-fas aktiv effekt är effekten P i Watt(W) lika med spänningen U i volt(V) gånger Strömmen I i ampere(A)\n");
  printf("gånger cos < 1 && cos > 0 gånger roten ur 3 SQRT(3).\n\n");
  double u, i, cos;
  printf("Skriv spänningen U i volt(V): \n ");
  scanf("%lf", &u);
  if(u > 400)
  {
    errorMessage();
    return 0;
  }
  printf("Skriv ström I i ampere(A): \n");
  scanf("%lf", &i);
  if(i > 440)
  {
    errorMessage();
    return 0;
  }

  printf("Skriv in effektfaktorn cos > 0 && cos < 1: \n");
  scanf("%lf", &cos);
  if (cos < 0 && cos > 1)
  {
    errorMessage();
    return 0;
  }

  return aktiv_3fas(u, i, cos);
}
