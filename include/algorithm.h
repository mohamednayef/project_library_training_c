/**
 * @brief
 */

#ifndef ALGORITHM_H
#define ALGORITHM_H

// ########## Include Library Section ##########
#include <stdio.h>

// ########## Decleration Functions Section ##########
// Utility functions
void swap(int *a, int *b);
int min(int a, int b);
int max(int a, int b);

// Array utilities
void reverse(int *first, int *last);
void fill(int arr[], int n, int value);
int count_value(int arr[], int n, int value);
int find(int arr[], int n, int value);       // return index or -1
int find_if(int arr[], int n, int (*pred)(int));

// Searching algorithms
int linear_search(int arr[], int n, int value);
int binary_search(int arr[], int n, int value);
int interpolation_search(int arr[], int n, int value);

// Sorting algorithms
void bubble_sort(int arr[], int n);
void selection_sort(int arr[], int n);
void insertion_sort(int arr[], int n);
void merge_sort(int arr[], int left, int right);
void quick_sort(int arr[], int low, int high);

// Numerical algorithms
int accumulate(int arr[], int n);                  // sum
int inner_product(int arr1[], int arr2[], int n);  // dot product

// Modifying algorithms
void copy_array(int src[], int dest[], int n);
void transform(int arr[], int n, int (*func)(int));

// Set operations (assume sorted arrays)
int set_union(int a[], int n, int b[], int m, int result[]);
int set_intersection(int a[], int n, int b[], int m, int result[]);
int set_difference(int a[], int n, int b[], int m, int result[]);

#endif // ALGORITHM_H