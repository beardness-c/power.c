#include <stdio.h>
#include "power.h"

int main()
{
    int ib, ip;
    long lb, lp;
    float fb, fp;
    double db, dp;

    ib = 3;
    ip = 3;

    lb = 3L;
    lp = 3L;

    fb = 3.F;
    fp = 3;

    db = 3.0;
    dp = 3;

    printf("| int    | base %4i | pow %4i | result %4i |\n", ib, ip, int_power(ib, ip));
    printf("| long   | base %4li | pow %4li | result %4li |\n", lb, lp, long_power(lb, lp));
    printf("| float  | base %4.0f | pow %4.0f | result %4.0f |\n", fb, fp, float_power(fb, fp));
    printf("| double | base %4.0f | pow %4.0f | result %4.0f |\n", db, dp, double_power(db, dp));
    /*
    | int    | base    3 | pow    3 | result   27 |
    | long   | base    3 | pow    3 | result   27 |
    | float  | base    3 | pow    3 | result   27 |
    | double | base    3 | pow    3 | result   27 |
    */

    return 0;
}