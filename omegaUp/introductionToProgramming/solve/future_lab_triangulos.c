#include <stdio.h>

void solve(int*, int);
void selectionSort(int*, int);
int isTriangle(int, int, int);
int perimeter(int, int, int);

int main() {
    int N;
    scanf("%d", &N);
    int sides[N];
    for(int i = 0; i < N; i++) scanf("%d", &sides[i]);
    solve(sides, N);
    return 0;
}
/* Find the largest tern that forms a triangle
a triangle and print the perimeter if there is one, 
otherwise print -1*/
void solve(int *sides, int N) { 
    int l1, l2, l3, flag = 0;
    selectionSort(sides, N);
    for(int i = 0; i < N - 2; i++) {
        l1 = sides[N - 1 - i];
        l2 = sides[N - 2 - i];
        l3 = sides[N - 3 - i];
        if(isTriangle(l1, l2, l3)) {
            printf("%d", perimeter(l1, l2, l3));
            flag = 1;
            break;
        } 
    }
    if(flag == 0) printf("%d", -1);
}
/* Sort array*/
void selectionSort(int *arr, int size) {
    int minIndex, j;
    for(int i = 0; i < size; i++) {
        minIndex = i;
        for(j = i + 1; j < size; j++) if(arr[minIndex] > arr[j]) minIndex = j;
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }   
}
/* Validates if three sides forma triangle*/
int isTriangle(int l1, int l2, int l3) {
    if(((l1 + l2 > l3) && (l1 + l3 > l2)) && (l2 + l3 > l1)) return 1;
    else return 0;
}
/* Calculate the perimeter the triangle of sides l1, l2, l3*/
int perimeter(int l1, int l2, int l3) {
    return l1 + l2 + l3;
}
