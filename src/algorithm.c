#include "../include/algorithm.h"

// ########## Definition Functions Section ##########
// Utility functions
void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
int min(int a, int b)
{
    return (a < b)? a:b;
}
int max(int a, int b)
{
    return (a > b)? a:b;
}

// Array utilities
void reverse(int *first, int *last)
{
    while(first != --last)
    {
        int tmp = *first;
        *first = *last;
        *last = tmp;
        first++;
    }
}
void fill(int arr[], int n, int value);
int count_value(int arr[], int n, int value);
int find(int arr[], int n, int value);       // return index or -1
int find_if(int arr[], int n, int (*pred)(int));

// Searching algorithms
int linear_search(int arr[], int n, int value)
{
    for(int i=0; i<n; i++) 
    {
        if(arr[i] == value)
            return i;
    }
    return -1;
}
int binary_search(int arr[], int n, int value)
{
    int low = 0;
    int high = n-1;
    int mid = low +  (high - low) / 2;
    while(low <= high)
    {
        if(arr[mid] == value)
            return mid;
        
        if(arr[mid] > value)
            high = mid - 1;
        else 
            low = mid + 1;

        mid = low +  (high - low) / 2;
    }
    return -1;
}
int interpolation_search(int arr[], int n, int value)
{
    int low = 0;
    int high = n-1;
    
    while(low <= high && value >= arr[low] && value <= arr[high])
    {
        // To avoid divide by ZERO
        if(arr[high] = arr[low])
        {
            if(arr[low] == value)
                return low;
            else 
                return -1;
        }

        int mid = low + ((high - low) * (value - arr[low])) / (arr[high] - arr[low]);
        
        if(arr[mid] == value)
            return mid;
        
        if(arr[mid] > value)
            high = mid - 1;
        else 
            low = mid + 1;

        mid = low + ((high - low) * (value - arr[low])) / (arr[high] - arr[low]);
    }
    return -1;
}

// Sorting algorithms
void bubble_sort(int arr[], int n)
{
    char swapped;
    for(int i=0; i<n; i++) {
        swapped = 0;
        for(int j=0; j<n-i-1; j++) {
            if(arr[j] > arr[j+1])   
            {
                swap(arr+j, arr+j+1);
                swapped = 1;
            }
        }
        if(!swapped) 
            return;
    }
}
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
