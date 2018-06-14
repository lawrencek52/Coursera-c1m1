/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 * modifications Copyright (c) 2108 Lawrence King 
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c
 * @brief series of basic statistics functions.
 *
 * <Add Extended Description Here>
 *
 * @author Lawrence King
 * @date 2018/June/10
 *
 */


#include <stdio.h>
#include <stdlib.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

// - The main entry point for your program
void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */

}

/* Add other Implementation File Code Here */

// - A function that prints the statistics of an array including
// minimum, maximum, mean, and median.
void print_statistics(ARRAY_TYPE *data, ARRAY_SIZE_TYPE n) {
}

// - Given an array of data and a length, prints the array to the screen
void print_array(ARRAY_TYPE *data, ARRAY_SIZE_TYPE n) {
	int i;
	for (i=0; i<(n-1); i++) {
		/* print all of the elements except the last one */
		printf("%3d, ", data[i]); /* with a trailing comma and space */
		if ((i%8)==0) {
			printf("\n");	/* split into lines of 8 elements */
		}
	}
	printf("%d.\n",data[n-1]); /* with a trailing period and newline */
}

// - Given an array of data and a length, returns the median value
ARRAY_TYPE find_median(ARRAY_TYPE *data, ARRAY_SIZE_TYPE n) {
}

// - Given an array of data and a length, returns the mean
ARRAY_TYPE find_mean(ARRAY_TYPE *data, ARRAY_SIZE_TYPE n) {
}

// - Given an array of data and a length, returns the maximum
ARRAY_TYPE find_maximum(ARRAY_TYPE *data, ARRAY_SIZE_TYPE n) {
}

// - Given an array of data and a length, returns the minimum
ARRAY_TYPE find_minimum(ARRAY_TYPE *data, ARRAY_SIZE_TYPE n) {
}

// - Given an array of data and a length, sorts the array
// from largest to smallest. (The zeroth Element should be
// the largest value, and the last element (n-1) should be
// the smallest value. 
int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}
void sort_array(ARRAY_TYPE *data, ARRAY_SIZE_TYPE n) {
	// I was too lazy to write a sorting alg, so just call
	// qsort() from the standard library
	qsort(data, n, sizeof(ARRAY_TYPE), cmpfunc);
}
