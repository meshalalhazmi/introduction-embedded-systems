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
#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main()
{

  unsigned char test[SIZE] = {34, 201, 190, 154, 8, 194, 2, 6,
                              114, 88, 45, 76, 123, 87, 25, 23,
                              200, 122, 150, 90, 92, 87, 177, 244,
                              201, 6, 12, 60, 8, 2, 5, 67,
                              7, 87, 250, 230, 99, 3, 100, 90};
  print_statistics(test, SIZE);

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
}

/*
 * A function that prints the statistics of an array including minimum, maximum, mean, and median.
 */
void print_statistics(unsigned char array[], unsigned int array_size)
{
  unsigned char minimum = find_minimum(array, array_size);
  unsigned char maximum = find_maximum(array, array_size);
  unsigned char mean = find_mean(array, array_size);
  unsigned char median = find_median(array, array_size);
  printf("minimum: %d, maximum: %d, mean: %d, and median: %d \n", minimum, maximum, mean, median);

  printf("sorted array is: \n");
  print_array(array, array_size);
}
/*
 *
 * Given an array of data and a length, prints the array to the screen
 */
void print_array(unsigned char array[], unsigned int array_size)
{
  for (int i = 0; i < array_size; i++)
  {
    printf("array[%d] : %d \n", i, array[i]);
  }
}
/*
 *
 * Given an array of data and a length, returns the median value
 */
unsigned char find_median(unsigned char array[], unsigned int array_size)
{
  if (array_size > 0)
  {

    sort_array(array, array_size);

    float median = 0;

    // case: even
    if (array_size % 2 == 0)
      median = (array[(array_size - 1) / 2] + array[array_size / 2]) / 2.0;
    // case: odd
    else
      median = array[array_size / 2];

    return median;
  }
  else
  {
    return 0;
  }
}
/*
 *
 * Given an array of data and a length, returns the mean
 */
unsigned char find_mean(unsigned char array[], unsigned int array_size)
{
  unsigned int mean = 0;
  for (unsigned int i = 0; i < array_size; i++)
  {

    mean += (unsigned int)array[i];
  }
  return (mean / array_size);
}
/*
 *
 * Given an array of data and a length, returns the maximum
 */
unsigned char find_maximum(unsigned char array[], unsigned int array_size)
{
  unsigned int maximum = 0;
  for (unsigned int i = 0; i < array_size; i++)
  {
    if (array[i] > array[maximum])
      maximum = i;
  }
  return array[maximum];
}
/*
 *
 * Given an array of data and a length, returns the minimum
 */
unsigned char find_minimum(unsigned char array[], unsigned int array_size)
{
  unsigned int minimum = 0;
  for (unsigned int i = 0; i < array_size; i++)
  {
    if (array[i] < array[minimum])
      minimum = i;
  }
  return array[minimum];
}
/*
*
* Given an array of data and a length, sorts the array from largest to smallest.
 (The zeroth Element should be the largest value, and the last element (n-1) should be the smallest value. )
*/
void sort_array(unsigned char array[], unsigned int array_size)
{

  int temp = 0;

  for (int i = 0; i < array_size; i++)
  {
    for (int j = 0; j < array_size - 1; j++)
    {
      if (array[j] < array[j + 1])
      {
        temp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = temp;
      }
    }
  }
}