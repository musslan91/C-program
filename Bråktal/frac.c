#include <stdio.h>
#include <stdlib.h>
#include "frac.h"

void printFrac(frac res){
    printf("%d %d", res.t, res.n);
}

struct frac plus(frac f1, frac f2){
    frac res;
    res.t = f1.t * f2.n + f1.n * f2.t;
    res.n = f1.n * f2.n;
    return res;
}

struct frac minus(frac f1, frac f2){
    frac res;
    res.t = f1.t * f2.n - f1.n * f2.t;
    res.n = f1.n * f2.n;
    return res;
}

struct frac times(frac f1, frac f2){
    frac res;
    res.t = f1.t * f2.n;
    res.n = f1.n * f2.t;
    return res;
}

struct frac division(frac f1, frac f2){
    frac res;
    res.t = f1.t / f2.n;
    res.n = f1.n / f2.t;
    return res;
}
