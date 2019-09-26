//
// Created by Jordan on 9/26/2019.
//

#include <stdio.h>
#include "header.h"

double chose_largest(double one, double two) {
    return one > two ? one : two;
}

double chose_smallest(double one, double two) {
    return one < two ? one : two;
}

double read_double(FILE *infle) {
    double val;
    fscanf(infle, "%lf", &val);
    return val;
}

void save_info(FILE *outfile,double largest,double smallest){
    fprintf(outfile,"The Largest value was %.2lf\n",largest);
    fprintf(outfile,"The Smallest value was %.2lf",smallest);
}