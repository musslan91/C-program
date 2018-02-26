#include <stdio.h>
#include <stdlib.h>
#include "funktioner.h"

// Omkrets
int rakna_en_omkrets()
{
    while(1)
    {
    int omkrets;
    int tal1,tal2,tal3,tal4;

    printf("\nSkriv in fyra värden:\n");

    printf("Skriv tal 1:\n");
    scanf("%d", &tal1);

    if(tal1 <= 0 || tal1 >= 1000)
    {
        printf("fel värde...\n");
    }

    
    printf("Skriv tal 2:\n");
    scanf("%d", &tal2);

    if(tal2 <= 0 || tal2 >= 1000)
    {
        printf("fel värde...\n");
    }
    
    printf("Skriv tal 3:\n");
    scanf("%d", &tal3);

    if(tal3 <= 0 || tal3 >= 1000)
    {
        printf("fel värde...\n");
    }

    
    printf("Skriv tal 4:\n");
    scanf("%d", &tal4);

    if(tal4 <= 0 || tal4 >= 1000)
    {
        printf("fel värde...\n");
    }

    omkrets = tal1 + tal2 + tal3 + tal4;

    printf("Omkretsen är: %d\n", omkrets);
}
}

// Area
int rakna_en_area()
{
    int area;
    int tal1,tal2;
    printf("\nskriv in bredd och längd:\n");

    
    printf("bredd:\n");
    scanf("%d", &tal1);

    if(tal1 <= 0 || tal1 >= 1000)
    {
        printf("fel värde...\n");

    }
    

    printf("Skriv längd:\n");
    scanf("%d", &tal2);

    if(tal2 <= 0 || tal2 >= 1000)
    {
        printf("fel värde...\n");

    }

    area = tal1 * tal2;

    printf("Arean är: %d\n", area);
}

// Volym
int rakna_en_volym()
{
    int volym;
    int tal1,tal2,tal3;
    printf("\nskriv in längden, bredden, höjden:\n");

    printf("Skriv längd:\n");
    scanf("%d", &tal1);

    if(tal1 <= 0 || tal1 >= 1000)
    {
        printf("fel värde...\n");
    }
    
    printf("Skriv bredd:\n");
    scanf("%d", &tal2);

    if(tal2 <= 0 || tal2 >= 1000)
    {
        printf("fel värde...\n");
    }
    
    printf("Skriv höjden:\n");
    scanf("%d", &tal3);

    if(tal3 <= 0 || tal3 >= 1000)
    {
        printf("fel värde...\n");
    }

    volym = tal1 * tal2 * tal3;

    printf("Volymen är: %d\n", volym);
}

