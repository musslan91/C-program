#include <stdio.h>
#include <stdlib.h>
#include "frac.h"

int main(void){
    struct frac;
    system("chcp 1252");
    system("cls");
    int val;
    puts("Välj 1 för plus bråktal:");
    puts("Välj 2 för minus bråktal:");
    puts("Välj 3 för multiplikation bråktal");
    puts("Välj 4 för division bråktal:");
    scanf("%d", &val);

    if(val == 1) {

    frac f1, f2, a;
    puts("Du har valt plus: ");
    puts("Skriv in täljare t: ");
    scanf("%d %d", &f1.t, &f1.n);
    puts("Skriv in nämnare: ");
    scanf("%d %d", &f2.t, &f2.n);
    a = plus(f1, f2);
    printFrac(a);
}
    else if(val == 2) {
    frac f1, f2, a;
    puts("Du har valt minus: ");
    puts("Skriv in täljare t: ");
    scanf("%d %d", &f1.t, &f1.n);
    puts("Skriv in nämnare: ");
    scanf("%d %d", &f2.t, &f2.n);
    a = minus(f1, f2);
    printFrac(a);
}
    else if(val == 3) {
    frac f1, f2, a;
    puts("Du har valt multiplikation: ");
    puts("Skriv in täljare t: ");
    scanf("%d %d", &f1.t, &f1.n);
    puts("Skriv in nämnare: ");
    scanf("%d %d", &f2.t, &f2.n);
    a = times(f1, f2);
    printFrac(a);
}
    else if(val == 4) {
    frac f1, f2, a;
    puts("Du har valt multiplikation: ");
    puts("Skriv in täljare t: ");
    scanf("%d %d", &f1.t, &f1.n);
    puts("Skriv in nämnare: ");
    scanf("%d %d", &f2.t, &f2.n);
    a = division(f1, f2);
    printFrac(a);

}
    return 0;
}
