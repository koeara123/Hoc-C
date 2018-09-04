#include <stdio.h>

int main()
{
    double* (*elephant)[3]; // pointer to array of 3 pointers to double
    double *pdarry[3]; // array of 3 pointers do double
    double darry[3] = { 1.1, 2.2, 3.3 }; // array of 3 double

    int i;

    elephant = &pdarry; // assign elephant to &pdarry

    for (i = 0; i < 3; ++i)
        pdarry[i] = &darry[i];
    
    for (i = 0; i < 3; ++i)
        printf("%f\n", *(*(*elephant)+i));

    return 0;
}
