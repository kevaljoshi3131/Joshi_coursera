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
 * @file stats.c
 * @brief This file contain main funciton as well as function defination of all the functions
 *			defined in the stats.h file.
 *
 * 
 *
 * @author Keval Joshi
 * @date 26/06/2020
 *
 */

#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

	unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
		                      114, 88,   45,  76, 123,  87,  25,  23,
		                      200, 122, 150, 90,   92,  87, 177, 244,
		                      201,   6,  12,  60,   8,   2,   5,  67,
		                        7,  87, 250, 230,  99,   3, 100,  90};
	int size = SIZE;
	
	print_statistics(test,size);
			
}

unsigned char find_mean(unsigned char* arr, int n){
	unsigned char sum = 0;
	int i ;
	for(i = 0; i<n ; i++ ){
		sum += arr[i];
	}
	
	return sum/n;
}
unsigned char find_median(unsigned char* arr, int n){
	sort_array(arr,n);
	return arr[(n-1)/2];
}

void sort_array(unsigned char* arr,int n){ 
    int i, key, j; 
    for (i = 1; i < n; i++) { 
        key = arr[i]; 
        j = i - 1; 
  
        /* Move elements of arr[0..i-1], that are 
          greater than key, to one position ahead 
          of their current position */
        while (j >= 0 && arr[j] > key) { 
            arr[j + 1] = arr[j]; 
            j = j - 1; 
        } 
        arr[j + 1] = key; 
	} 
}
unsigned char find_maximum(unsigned char* arr,int n ){
	unsigned char max = 0 ;
	int i;
	for(i = 0; i < n; i++ ){
		if(arr[i]>max)
			max = arr[i]
	}	
	
	return max
} 

unsigned char find_minimum(unsigned char* arr,int n ){
	unsigned char min = arr[0] ;
	int i;
	for(i = 0; i < n; i++ ){
		if(arr[i]>min)
			min = arr[i]
	}
		
	return min
} 

void print_statistics(unsigned char* arr,int n){
	unsigned char min = find_minumum(arr,n);
	unsigned char max = find_maximun(arr,n);
	unsigned char median = find_median(arr,n);
	unsigned char mean = find_mean(arr,n);
	
	print_array(arr,n);
	printf("The min element of above character array is %d \n ", min);
	printf("The max element of above character array is %d \n ", max);
	printf("The mean value  of above character array is %d \n ", mean);
	printf("The medianvalue of above character array is %d \n ", median;
}

void print_array(unsigned char* arr, int n){
	int i ;
	printf("the content of char array is as given below \n ");
	for(i = 0 ; i < n ; i++){
		printf("%d ",arr[i];
	}
	printf("\n");
}
