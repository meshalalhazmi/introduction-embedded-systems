/******************************************************************************
 * Copyright (C) 2022 by Meshal Alhazmi
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are
 * permitted to modify this and use it to learn about the field of embedded
 * software. Meshal Alhazmi is not liable for any
 * misuse of this material.
 *
 *****************************************************************************/
/**
 * @file <Add File Name>
 * @brief <Add Brief Description Here >
 *
 * This is a c sample code to analyze an array of unsigned char data items and report analytics on the maximum, minimum, mean, and median of the data set.
 * In addition to reordering the data set from large to small. All statistics are rounded down to the nearest integer.
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */

/**
 * @brief
 *
 * A function that prints the statistics of an array including minimum, maximum, mean, and median.
 *
 * @param arry An unsigned char pointer to an n-element data array
 * @param array_size  An unsigned integer as the size of the array
 *
 * @return void
 */
void print_statistics(unsigned char array[], unsigned int array_size);
/**
 * @brief <Add Brief Description of Function Here>
 *
 * Given an array of data and a length, prints the array to the screen
 *
 * @param arry An unsigned char pointer to an n-element data array
 * @param array_size  An unsigned integer as the size of the array
 *
 * @return void
 */
void print_array(unsigned char array[], unsigned int array_size);
/**
 * @brief <Add Brief Description of Function Here>
 *
 * Given an array of data and a length, returns the median value
 *
 * @param arry An unsigned char pointer to an n-element data array
 * @param array_size  An unsigned integer as the size of the array
 *
 * @return unsigned char of the median value in the supplied array
 */
unsigned char find_median(unsigned char array[], unsigned int array_size);
/**
 * @brief <Add Brief Description of Function Here>
 *
 * Given an array of data and a length, returns the mean
 *
 * @param arry An unsigned char pointer to an n-element data array
 * @param array_size  An unsigned integer as the size of the array
 *
 * @return unsigned char of the mean value of the supplied array
 */
unsigned char find_mean(unsigned char array[], unsigned int array_size);
/**
 * @brief <Add Brief Description of Function Here>
 *
 * Given an array of data and a length, returns the maximum
 *
 * @param arry An unsigned char pointer to an n-element data array
 * @param array_size  An unsigned integer as the size of the array
 *
 * @return unsigned char of the maximum value in the supplied array
 */
unsigned char find_maximum(unsigned char array[], unsigned int array_size);
/**
 * @brief <Add Brief Description of Function Here>
 *
 * Given an array of data and a length, returns the minimum
 *
 * @param arry An unsigned char pointer to an n-element data array
 * @param array_size  An unsigned integer as the size of the array
 *
 * @return unsigned char of the minimum value in the supplied array
 */
unsigned char find_minimum(unsigned char array[], unsigned int array_size);
/**
 * @brief <Add Brief Description of Function Here>
 *
 * Given an array of data and a length, sorts the array from largest to smallest.
 (The zeroth Element should be the largest value, and the last element (n-1) should be the smallest value. )
 *
 * @param arry An unsigned char pointer to an n-element data array
 * @param array_size  An unsigned integer as the size of the array
 *
 * @return void
 */
void sort_array(unsigned char array[], unsigned int array_size);

#endif /* __STATS_H__ */
