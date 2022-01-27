#include <stdio.h>

void plusMinus(int, int *);

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
    plusMinus(n, arr);
    return 0;
}
/* Iterate over the matrix and count the positive numbers, negative
 numbers and zeros and print the proportion of each.*/
void plusMinus(int arr_count, int* arr) {
    int countPositives = 0, countNegatives = 0, countZeros = 0;
    float ratioPositives, ratioNegatives, ratioZeros;
    for(int i = 0; i < arr_count; i++) {
        if(arr[i] > 0) countPositives++;
        else if (arr[i] < 0) countNegatives++;
        else countZeros++;
    }
    ratioPositives = countPositives / (arr_count * 1.0);
    ratioNegatives = countNegatives / (arr_count * 1.0);
    ratioZeros = countZeros / (arr_count * 1.0);
    printf("%f\n%f\n%f", ratioPositives, ratioNegatives, ratioZeros);   
}
