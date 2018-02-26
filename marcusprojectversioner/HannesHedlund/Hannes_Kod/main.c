#include <stdlib.h>
#include <stdio.h>
#include "menufunctions.h"

int main()
{
    system("chcp 1252");
    system("cls");
    int Exit = 0;
    while (Exit == 0)
    {
        int val = showMenu();

        switch(val) {
          case 0:
            Exit = 1;
            break;
          case 1:
            printf("%lf", ohmsLaw());
            break;
          case 2:
            printf("%lf", rTot());
            break;
          case 3:
            printf("%lf", powerLaw());
            break;
          case 4:
            printf("%lf", apparentEffect());
            break;
          case 5:
            printf("%lf", activeEffect());
            break;
          case 6:
            printf("%lf",apparentEffectPhase());
            break;
          case 7:
            printf("%lf",activeEffectPhase());
            break;
          default:
            Exit = 1;
            errorMessage();
            return main();
        }
    }

    return 0;
}
