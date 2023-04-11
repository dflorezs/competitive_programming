//
// Created by dafcode on 4/9/2023.
//
#include <stdio.h>

int simpleArraySum(int ar_count, int* ar);
void test();

/*int main(){
    test();
    return 0;
}*/


int simpleArraySum(int ar_count, int* ar){
    int sum = 0;

    for (int i = 0; i < ar_count; i++) sum += *(ar+i);

    return sum;
}

void test(){
    static int arr[] = {1, 2, 3, 4, 10, 11};
    int n = sizeof(arr) / sizeof(int);

    printf("%d", simpleArraySum(n, arr));
}