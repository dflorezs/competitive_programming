#include <stdio.h>

void miniMaxSum(int, int*);

int main() {
    int n = 5, nums[n];
    for(int i = 0; i < n; i++) scanf("%d", &nums[i]);   
    miniMaxSum(n, nums);
    return 0;
}
/* Iterate over the array and search the min and max element
   now sum all elements the array and print the diference beetwen
   sum and max elemetn and sum and min element*/
void miniMaxSum(int arr_count, int* arr) {
   long int min = arr[0], max = arr[0], sum = 0;
    // Search the element min and max the array
    for(int i = 0; i < arr_count; i++) {
        if(min > arr[i]) min = arr[i];
        if(max < arr[i]) max = arr[i];
    }
    // Sum the elements of array
    for(int i = 0; i < arr_count; i++) sum += arr[i];
    printf("%ld %ld", sum - max, sum - min); 
}
