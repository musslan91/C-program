#include <stdio.h>
#include <stdlib.h>
#include "frac.h"

int main(void){
    struct frac;
    system("chcp 1252");
    system("cls");
    int val;
    puts("V�lj 1 f�r plus br�ktal:");
    puts("V�lj 2 f�r minus br�ktal:");
    puts("V�lj 3 f�r multiplikation br�ktal");
    puts("V�lj 4 f�r division br�ktal:");
    scanf("%d", &val);

    if(val == 1) {

    frac f1, f2, a;
    puts("Du har valt plus: ");
    puts("Skriv in t�ljare t: ");
    scanf("%d %d", &f1.t, &f1.n);
    puts("Skriv in n�mnare: ");
    scanf("%d %d", &f2.t, &f2.n);
    a = plus(f1, f2);
    printFrac(a);
}
    else if(val == 2) {
    frac f1, f2, a;
    puts("Du har valt minus: ");
    puts("Skriv in t�ljare t: ");
    scanf("%d %d", &f1.t, &f1.n);
    puts("Skriv in n�mnare: ");
    scanf("%d %d", &f2.t, &f2.n);
    a = minus(f1, f2);
    printFrac(a);
}
    else if(val == 3) {
    frac f1, f2, a;
    puts("Du har valt multiplikation: ");
    puts("Skriv in t�ljare t: ");
    scanf("%d %d", &f1.t, &f1.n);
    puts("Skriv in n�mnare: ");
    scanf("%d %d", &f2.t, &f2.n);
    a = times(f1, f2);
    printFrac(a);
}
    else if(val == 4) {
    frac f1, f2, a;
    puts("Du har valt multiplikation: ");
    puts("Skriv in t�ljare t: ");
    scanf("%d %d", &f1.t, &f1.n);
    puts("Skriv in n�mnare: ");
    scanf("%d %d", &f2.t, &f2.n);
    a = division(f1, f2);
    printFrac(a);

}
    return 0;
}
