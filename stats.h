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
 * @brief <print statistics about the data array>
 *
 * <A function that prints the statistics of an array including
 * minimum, maximum, mean, and median.>
 *
 * @param <ARRAY_TYPE *data> <pointer to an array of data>
 * @param <ARRAY_SIZE_TYPE n> <number of elements in array>
 *
 * @return <void>
**/
void print_statistics(ARRAY_TYPE *data, ARRAY_SIZE_TYPE n);


/**
 * @brief <print out the elements of the array>
 *
 *  <Given an array of data and a length, prints the array to the screen>
 *
 * @param <ARRAY_TYPE *data> <pointer to an array of data>
 * @param <ARRAY_SIZE_TYPE n> <number of elements in array>
 *
 * @return <void>
**/
void print_array(ARRAY_TYPE *data, ARRAY_SIZE_TYPE n);

/**
 * @brief <find the median of an array>
 *
 * < Given an array of data and a length, returns the median value>
 * The median is also the number that is halfway into the set.
 * To find the median, the data should be arranged in order from
 * least to greatest. If there is an even number of items in the
 * data set, then the median is found by taking the mean (average)
 * of the two middlemost numbers.
 *
 * @param <ARRAY_TYPE *data> <pointer to an array of data>
 * @param <ARRAY_SIZE_TYPE n> <number of elements in array>
 *
 * @return <Add Return Informaiton here>
**/
ARRAY_TYPE find_median(ARRAY_TYPE *data, ARRAY_SIZE_TYPE n);

/**
 * @brief <Add Brief Description of Function Here>
 *
 * <Add Extended Description Here>
 *
 * @param <ARRAY_TYPE *data> <pointer to an array of data>
 * @param <ARRAY_SIZE_TYPE n> <number of elements in array>
 *
 * @return <Add Return Informaiton here>
**/
// - Given an array of data and a length, returns the mean
ARRAY_TYPE find_mean(ARRAY_TYPE *data, ARRAY_SIZE_TYPE n);

/**
 * @brief <Add Brief Description of Function Here>
 *
 * <Add Extended Description Here>
 *
 * @param <ARRAY_TYPE *data> <pointer to an array of data>
 * @param <ARRAY_SIZE_TYPE n> <number of elements in array>
 *
 * @return <Add Return Informaiton here>
**/
// - Given an array of data and a length, returns the maximum
ARRAY_TYPE find_maximum(ARRAY_TYPE *data, ARRAY_SIZE_TYPE n);

/**
 * @brief <Add Brief Description of Function Here>
 *
 * <Add Extended Description Here>
 *
 * @param <ARRAY_TYPE *data> <pointer to an array of data>
 * @param <ARRAY_SIZE_TYPE n> <number of elements in array>
 *
 * @return <Add Return Informaiton here>
**/
// - Given an array of data and a length, returns the minimum
ARRAY_TYPE find_minimum(ARRAY_TYPE *data, ARRAY_SIZE_TYPE n);

/**
 * @brief <sort an arraye>
 *
 * < Given an array of data and a length, sorts the array
 * from largest to smallest. (The zeroth Element should be
 * the largest value, and the last element (n-1) should be
 * the smallest element. >
 *
 * @param <ARRAY_TYPE *data> <pointer to an array of data>
 * @param <ARRAY_SIZE_TYPE n> <number of elements in array>
 *
 * @return <void>
**/
void sort_array(ARRAY_TYPE *data, ARRAY_SIZE_TYPE n);

#endif /* __STATS_H__ */
