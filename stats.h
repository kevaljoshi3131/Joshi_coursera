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
 * @file stats.h
 * @brief -: This file comtains all the function defination of functions 
 * 			that is to be defined in the stat.c file.
 *
 * @author -: Keval Joshi
 * @date -: 25/06/2020
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

unsigned char find_maximum(unsigned char *arr, int n);

/**
 * @brief find the max value in the given array 
 *
 * @param unsigned char pointer arr 
 * @param int n size of char pointer
 *
 * @return unsigned char max element in the array 
 */
unsigned char find_minimum(unsigned char *arr, int n);
/**
 * @brief find the min value in the given array 
 *
 * @param unsigned char pointer arr 
 * @param int n size of char pointer
 *
 * @return unsigned char min element in the array 
 */
 void print_statistics (unsigned char* arr, int n);
 /**
 * @brief print mean, median, min and max of a given char array. 
 *
 * @param unsigned char pointer arr 
 * @param int n size of char pointer
 *
 * @return void / it prints the info on stdout.
 */
 void print_array(unsigned char* arr,int n );
 /**
 * @brief print the values of char arr 
 *
 * @param unsigned char pointer arr 
 * @param int n size of char pointer
 *
 * @return void / print values in array  
 */
 unsigned char find_mean(unsigned char* arr, int n);
 /**
 * @brief find the mean value in the given array 
 *
 * @param unsigned char pointer arr 
 * @param int n size of char pointer
 *
 * @return unsigned char mean value of the array 
 */
 unsigned char find_median(unsigned char* arr, int n);
 /**
 * @brief find the median value in the given array 
 *
 * @param unsigned char pointer arr 
 * @param int n size of char pointer
 *
 * @return unsigned char median element in the array 
 */
 void sort_array(unsigned char* arr,int n);
 /**
 * @brief sort the given array using insertion sort. 
 *
 * @param unsigned char pointer arr 
 * @param int n size of char pointer
 *
 * @return void 
 */
#endif /* __STATS_H__ */
