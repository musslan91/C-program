
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

        printf("V�lj vilka storheter du vill ber�kna\n"
        "V�lj 1 f�r: OHMS LAG\n"
        "V�lj 2 f�r: Rtot i parallella kretsar h�gst 3 resistanser\n"
        "V�lj 3 f�r: EFFEKTLAGEN ENKEL P=U*I\n"
        "V�lj 4 f�r: SKENBAR EFFEKT ENFAS S=U*I\n"
        "V�lj 5 f�r: AKTIV EFFEKT/MEDELEFFEKT ENFAS P=U*I*cos()Fi\n"
        "V�lj 6 f�r: SKENBAR EFFEKT 3-FAS S=U*I*cos()Fi\n"
        "V�lj 7 f�r: AKTIV EFFEKT 3-FAS P=U*I*cos()Fi*sqrt(3)\n"
        "V�lj 0 f�r: F�R ATT AVSLUTA\n");
        }

    
    }

    return 0;
}
