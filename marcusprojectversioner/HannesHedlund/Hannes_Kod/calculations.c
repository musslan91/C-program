#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

double multiplication(double r, double i){
    double u = i * r;
    return u;
}

double res_tot(double r1, double r2, double r3){
    double rtot= (1/r1) + (1/r2) + (1/r3);
    rtot= 1/rtot;
    return rtot;
}

double aktiv_eff(double u, double i, double cos){
    double p = u * i * cos;
    return p;
}

double sken_3fas(double u, double i){
    double s = u * i * sqrt(3);
    return s;
}

double aktiv_3fas(double u, double i, double cos){
    double p = u * i * sqrt(3) * cos;
    return p;
}
