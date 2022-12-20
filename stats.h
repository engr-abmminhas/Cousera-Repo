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
 * @file <stats.h is a header file> 
 * @brief <it contains declaration of seven functions>
 *
 * <it is a first peer graded assignment of week#1>
 *
 * @author <Abdul Basit>
 * @date <21-12-2022>
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* This function will print the given array*/ 
void print_array(int, unsigned char *);
/*<it will send the values of array, and size of array and print the given array when it will be called>*/

 
/* This function will print the statisics data*/ 
void print_statistics(float, float, int, int);
/*<it will send the values of median, mean, maximum, and minimum value and print those values when it will be called>*/ 
	

/* This function will find the median*/ 
float find_median(int, unsigned char *);
/*<it will send the values of array, and size of array. and find out the median of a given array when it will be called>*/

/* This function will find the mean*/ 
float find_mean(int, unsigned char *);
/*<it will send the values of array, and size of array. and find out the mean of a given array when it will be called>*/

/* This function will find the maximum*/ 
int find_maximum(int, unsigned char *);
/*<it will send the values of array, and size of array. and find out the maximum value of a given array when it will be called>*/

/* This function will find the minimum*/ 
int find_minimum(int, unsigned char *);
/*<it will send the values of array, and size of array. and find out the minimum of a given array when it will be called>*/

/* This function will find the sort array*/ 
void sort_array(int, unsigned char *);
/*<it will send the values of array, and size of array. and sort out of a given array when it will be called>*/


#endif /* __STATS_H__ */
