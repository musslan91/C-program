
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <limits.h>
#include <stdbool.h>
#include "funktioner.h"

int main()
{
    system("chcp 1252");
    system("cls");
    bool exit = false;

    while (exit == false)
    {
        printf("\n");
        char val[8];

        printf("Välj vilka storheter du vill beräkna\n"
        "Välj 1 för: OHMS LAG\n"
        "Välj 2 för: Rtot i parallella kretsar högst 3 resistanser\n"
        "Välj 3 för: EFFEKTLAGEN ENKEL P=U*I\n"
        "Välj 4 för: SKENBAR EFFEKT ENFAS S=U*I\n"
        "Välj 5 för: AKTIV EFFEKT/MEDELEFFEKT ENFAS P=U*I*cos()Fi\n"
        "Välj 6 för: SKENBAR EFFEKT 3-FAS S=U*I*cos()Fi\n"
        "Välj 7 för: AKTIV EFFEKT 3-FAS P=U*I*cos()Fi*sqrt(3)\n"
        "Välj 0 för: FÖR ATT AVSLUTA\n");
        }

    
    }

    return 0;
}
