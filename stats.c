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
 * @date 2018/June/13
 *
 */


#include <stdio.h>
#include <stdlib.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

// - The main entry point for your program
int main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
	print_statistics(test,SIZE);
	return(0);
}

// - A function that prints the statistics of an array including
// minimum, maximum, mean, and median.
void print_statistics(ARRAY_TYPE *data, ARRAY_SIZE_TYPE n) {
	printf("Starting Array is:\n");
	print_array(data,n);
	printf("minimum value in data array is %d\n", find_minimum(data,n));
	printf("maximum value in data array is %d\n", find_maximum(data,n));
	printf("mean value in data array is %d\n", find_mean(data,n));
	printf("median value in data array is %d\n", find_median(data,n));
	printf("Sorted Array is:\n");
	print_array(data,n);
}

// - Given an array of data and a length, prints the array to the screen
void print_array(ARRAY_TYPE *data, ARRAY_SIZE_TYPE n) {
	ARRAY_SIZE_TYPE i;
	for (i=0; i<(n-1); i++) {
		/* print all of the elements except the last one */
		printf("%3d, ", data[i]); /* with a trailing comma and space */
		if ((i%8)==7) {
			printf("\n");	/* split into lines of 8 elements */
		}
	}
	printf("%d.\n",data[n-1]); /* with a trailing period and newline */
}

// - Given an array of data and a length, returns the median value
ARRAY_TYPE find_median(ARRAY_TYPE *data, ARRAY_SIZE_TYPE n) {
	/* average would be simple, add up all the numbers and divide by N.
	Unfortunately median requires sorting the numbers and picking the
	middle one just to add a challenge there are an even number of numbers
	in the supplied array so we need to give the average of the two numbers
	closest to the middle of the sorted array. */
	
	sort_array(data,n);
	if ((n%2)==0) {
		/* even number of elements in the array, average the two
		closest to the middle */
		/* beware: this will fail if the data array has only one element */
		return((data[(n/2)-1]+data[n/2])/2);
	} else {
		/* simply take the middle element */
		/* due to the magic of integer arithmetic, N/2 always 
		rounds down if N is odd */
		return(data[n/2]);
	}
}

// - Given an array of data and a length, returns the mean
ARRAY_TYPE find_mean(ARRAY_TYPE *data, ARRAY_SIZE_TYPE n) {
	/* add up all of the numbers and divide by N */
	long	sum = 0;
	ARRAY_SIZE_TYPE i;
	for (i=0; i<n; i++) {
		sum += data[i];
	}
	return (sum/n);
}

// - Given an array of data and a length, returns the maximum
ARRAY_TYPE find_maximum(ARRAY_TYPE *data, ARRAY_SIZE_TYPE n) {
	ARRAY_SIZE_TYPE i;
	ARRAY_TYPE max;
	max = data[0];
	for (i=1; i<n; i++) {
		if (data[i] > max) {
			max = data[i];
		}
	}
	return(max);
}

// - Given an array of data and a length, returns the minimum
ARRAY_TYPE find_minimum(ARRAY_TYPE *data, ARRAY_SIZE_TYPE n) {
	ARRAY_SIZE_TYPE i;
	ARRAY_TYPE min;
	min = data[0];
	for (i=1; i<n; i++) {
		if (data[i] < min) {
			min = data[i];
		}
	}
	return(min);
}

// - Given an array of data and a length, sorts the array
// from largest to smallest. (The zeroth Element should be
// the largest value, and the last element (n-1) should be
// the smallest value. 
int cmpfunc (const void * a, const void * b) {
   return ( (*(ARRAY_TYPE*)a) < (*(ARRAY_TYPE*)b) );
}
void sort_array(ARRAY_TYPE *data, ARRAY_SIZE_TYPE n) {
	// I was too lazy to write a sorting alg, so just call
	// qsort() from the standard library
	qsort(data, n, sizeof(ARRAY_TYPE), cmpfunc);
}
