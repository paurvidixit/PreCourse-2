/*
Time Complexity: O(lon(n)) because with each iteration in the while loop, the search reduced to half giving it logarithmic TC.
Space Complexity: O(1) It took no extra space.
Did this code successfully run on Leetcode : Yes
Any problem you faced while coding this : No
*/
#include <stdio.h> 
  
// A recursive binary search function. It returns 
// location of x in given array arr[l..r] is present, 
// otherwise -1 
int binarySearch(int arr[], int l, int r, int x) 
{   
    while (l<=r) {
        int mid = l + (r-l)/2;
        if (arr[mid] == x) return mid;
        if (arr[mid] > x) r = mid -1;
        else l = mid + 1;
    }
    return -1;
} 
  
int main(void) 
{ 
    int arr[] = { 2, 3, 4, 10, 40 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int x = 10; 
    int result = binarySearch(arr, 0, n - 1, x); 
    (result == -1) ? printf("Element is not present in array") 
                   : printf("Element is present at index %d", 
                            result); 
    return 0; 
} 