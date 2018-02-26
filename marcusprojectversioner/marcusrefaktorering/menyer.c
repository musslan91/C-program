#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <limits.h>
#include <stdbool.h>
#include "funktioner.h"

    char menu[8];
    bool exit = true;

    scanf("%s", &menu);

        if(!strcmp(val, "1")
        {

            printf("Ohms lag spänningen(volt/V) betäckning U lika med Resistansen(Ohm) betäckning R \n"
            "gånger Strömmen(Ampere) med betäckningen I. Kort U=R*I. \n\n");
            double r, i;
            printf("Skriv resistans R < 20 000ohm: \n ");
            scanf("%lf", &r);
            if(r > 20000)
            {
                printf("För högt värde, försök igen: \n");
                continue;
            }

            printf("Skriv ström I < 440 Ampere: \n");
            scanf("%lf", &i);
            if(i > 440)
            {
                printf("För högt värde, försök igen: \n");
                continue;
            }

            printf("%f V\n", ohms_lag(r, i));

        }

        else if(!strcmp(val, "2")
        {
            printf("Resistans sammankopplade i parallella kretsar är lika med 1 delat Resistans R total är lika med\n"
            "Resistans 1/R1 + 1/R2 + 1/R3 då vi högst använder tre resistanser.\n\n");
            double r1,r2,r3;
            printf("Skriv resistans R1 < 20 000ohm: \n ");
            scanf("%lf", &r1);
            if(r1 > 20000)
            {
                printf("För högt värde, försök igen: \n");
                continue;
            }
            printf("Skriv resistans R2 < 20 000ohm: \n ");
            scanf("%lf", &r2);
            if(r2 > 20000)
            {
                printf("För högt värde, försök igen: \n");
                continue;
            }
            printf("Skriv resistans R3 < 20 000ohm: \n ");
            scanf("%lf", &r3);
            if(r3 > 20000)
            {
                printf("För högt värde, försök igen: \n");
                continue;
            }
            printf("%f Ohm\n", res_tot(r1, r2, r3));
        }

        else if(!strcmp(val, "3")
        {

            printf("Effektlagen enkel för likström är effekten P i Watt (W) lika med spänningen U i volt(V)\n"
            "gånger strömmen I i Ampere(A): \n\n");
            double u, i;
            printf("Skriv spännngen U i volt(V): \n ");
            scanf("%lf", &u);
            printf("Skriv ström Ampere I < 440A: \n");
            scanf("%lf", &i);
            if(i > 440)
            {
                printf("För högt värde, försök igen: \n");
                continue;
            }
            printf("%f W\n", eff_enk(u, i));
        }
        else if(!strcmp(val, "4")
        {

            printf("Skenbar effekt enfas räknas med storheten VA(VoltAmpere) som är lika med spänningen U i volt(V)\n"
            "gånger strömmen I i ampere(A)\n\n");
            double u, i;
            printf("Skriv Spänningen U i volt: \n ");
            scanf("%lf", &u);
            printf("Skriv ström I < 440A: \n");
            scanf("%lf", &i);
            if(i > 440)
            {
                printf("För högt värde, försök igen: \n");
                continue;
            }
            printf("%f VA\n", sken_eff(u, i));
        }

        else if(!strcmp(val, "5")
        {

            printf("Aktiv medelefdekt enfas är lika med effekt P i watt(W) lika med spänningen U i volt(V) gånger strömmen I \n"
            "i Ampere gånger cosinus fi/efkektfaktor < 1:\n\n");
            double u, i, cos;
            printf("Skriv spänning U i volt: \n ");
            scanf("%lf", &u);
            printf("Skriv ström I: \n");
            scanf("%lf", &i);
            if(i > 440){
                printf("För högt värde, försök igen:\n");
                continue;
            }
            printf("Skriv in effektfaktorn cos > 0 && cos < 1:\n");
            scanf("%lf", &cos);
            if (cos < 0 && cos > 1)
            {
                printf("Fel värde, försök igen\n");
                continue;
            }
            printf("%f W\n", aktiv_eff(u, i, cos));
        }
        else if(!strcmp(val, "6")
        {

            printf("3-fas skenbar effekt är växelspänning är skenbar effekt S i voltampere(VA) lika med spänningen U i volt(V) \n"
            "gånger strömmen I i ampere(A) gånger roten ur 3 SQRT(3).\n\n");
            double u, i;
            printf("Skriv spänning U i volt(V) =< 400V: \n ");
            scanf("%lf", &u);
            if(u > 400)
            {
                printf("För högt värde, försök igen: \n");
                continue;
            }

            printf("Skriv ström I i ampere =< 440: \n");
            scanf("%lf", &i);
            if(i > 440)
            {
                printf("För högt värde, försök igen: \n");
                continue;
            }
            printf("%f VA\n", sken_3fas(u, i));
        }

        else if(!strcmp(val, "7")
        {

            printf("3-fas aktiv effekt är effekten P i Watt(W) lika med spänningen U i volt(V) gånger strömmen I i ampere(A)\n"
            "gånger cos < 1 && cos > 0 gånger roten ur 3 SQRT(3).\n\n");
            double u, i, cos;
            printf("Skriv Spänningen U i volt(V) V <= 400V: \n ");
            scanf("%lf", &u);
            if(u > 400)
            {
                printf("För högt värde, försök igen.\n");
                continue;
            }
            printf("Skriv ström I i ampere(A) =< 440: \n");
            scanf("%lf", &i);
            if(i > 440)
            {
                printf("För högt värde, försök igen.\n");
                continue;
            }

            printf("Skriv in effektfaktorn cos > 0 && cos < 1: \n");
            scanf("%lf", &cos);
            if (cos < 0 && cos > 1)
            {
                printf("För högt värde, försök igen: \n");
                continue;
            }

            printf("%f W\n", aktiv_3fas(u ,i, cos));
        }

        else if(!strcmp(val, "0")
        {
            exit = true;
            printf("Fel alternativ försök igen!: \n");
        }

        else{

            return main();
        }
    }