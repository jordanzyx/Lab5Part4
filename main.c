#include <stdio.h>
#include "header.h"

int main() {
    FILE *infile = NULL;
    FILE *outfile = NULL;

    double largest = 0,smallest = 0,temp = 0;
    infile = fopen("C:\\Users\\Jordan\\CLionProjects\\Lab5Part4\\data.txt","r");
    outfile = fopen("C:\\Users\\Jordan\\CLionProjects\\Lab5Part4\\output.txt","w");

    largest = read_double(infile);
    smallest = largest;

    while (!feof(infile)){
        temp = read_double(infile);
        largest = chose_largest(largest,temp);
        smallest = chose_smallest(smallest,temp);
    }

    save_info(outfile,largest,smallest);

    return 0;
}