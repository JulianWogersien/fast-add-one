#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "fast_add.h"

int add_one_slow(int n);

int main() {
    int iterations = 1000000000;
    clock_t t;
    int r1 = 0;
    int r2 = 0;
    int r3 = 0;
    t = clock();
    for(int i = 0; i < iterations; i++) {
        r1 = fast_add_one(i);
    }
    double tt1 = ((double)t) / CLOCKS_PER_SEC;
    printf("tt1 done \n");
    t = clock();
    for(int i = 0; i < iterations; i++) {
        r2 = add_one_slow(i);
    }
    double tt2 = ((double)t) / CLOCKS_PER_SEC;
    printf("tt2 done \n");
    int v = iterations - 1;
    t = clock();
    r3 = v + 1;
    double tt3 = ((double)t) / CLOCKS_PER_SEC;
    printf("tt3 done \n");

    printf("fast: %f, slow: %f, difference: %f  \n", tt1, tt2, tt2 - tt1);
    printf("multiadd: loop: %f, single: %f, difference: %f\n", tt1, tt3, tt1 - tt3);
    printf("results 1: %i, result 2: %i, result 3: %i \n", r1, r2, r3);
    return 0;
}

int add_one_slow(int n) {
    return n+1;
}

