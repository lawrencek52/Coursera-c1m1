/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <stats.h>
 * @brief <holon file for statistics functions>
 *
 * <series of basic statistical functions>
 *
 * @author <Lawrence King>
 * @date <2018/June/13>
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

typedef	unsigned char	ARRAY_TYPE;
typedef	int		ARRAY_SIZE_TYPE;
/**
 * @brief <Add Brief Description of Function Here>
 *
 * <Add Extended Description Here>
 *
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 *
 * @return <Add Return Informaiton here>
 */


// - A function that prints the statistics of an array including
// minimum, maximum, mean, and median.
void print_statistics(ARRAY_TYPE *data, ARRAY_SIZE_TYPE n);


// - Given an array of data and a length, prints the array to the screen
void print_array(ARRAY_TYPE *data, ARRAY_SIZE_TYPE n);

// - Given an array of data and a length, returns the median value
ARRAY_TYPE find_median(ARRAY_TYPE *data, ARRAY_SIZE_TYPE n);

// - Given an array of data and a length, returns the mean
ARRAY_TYPE find_mean(ARRAY_TYPE *data, ARRAY_SIZE_TYPE n);

// - Given an array of data and a length, returns the maximum
ARRAY_TYPE find_maximum(ARRAY_TYPE *data, ARRAY_SIZE_TYPE n);

// - Given an array of data and a length, returns the minimum
ARRAY_TYPE find_minimum(ARRAY_TYPE *data, ARRAY_SIZE_TYPE n);

// - Given an array of data and a length, sorts the array
// from largest to smallest. (The zeroth Element should be
// the largest value, and the last element (n-1) should be
void sort_array(ARRAY_TYPE *data, ARRAY_SIZE_TYPE n);

#endif /* __STATS_H__ */
