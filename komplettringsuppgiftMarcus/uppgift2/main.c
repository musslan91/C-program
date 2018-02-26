#include <stdio.h>
#include <stdlib.h>
#include "funktioner.h"

int main ()
{
            printf("Tryck 1 för omkrets\n");
            printf("Tryck 2 för area\n");
            printf("Tryck 3 för volym\n");

            int val;
            scanf("%d", &val);
            system("cls");
            printf("Du har valt menyval: %d\n", val);

            if(val == 1)
            {
                rakna_en_omkrets();
                return main();
            }
            else if(val >= 4){
                printf("FEL!!! Börja om!!!\n");
                return main();
            }

            if(val == 2)
            {
                rakna_en_area();
                return main();
            }
            else if(val >= 4){
                printf("FEL!!! Börja om!!!\n");
                return main();
            }

            if(val == 3)
            {
                rakna_en_volym();
                return main();

            }
            else if(val >= 4){
                printf("FEL!!! Börja om!!!\n");
                return main();
            }
            return 0;
        }
