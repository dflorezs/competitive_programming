#include <stdio.h>

void solve(int, int *, int *);

int main() {
    int n, num, min = 301, max = -1;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &num);
        solve(num, &min, &max);
    }
    printf("%d %d", min, max);
    return 0;
}
/* Compares the value of the min and max variable
   on each of the array elements and finds the minimum
   and maximum value and prints the values.*/
void solve(int num, int *min, int *max) {
    if(*min > num) *min = num;
    if(*max < num) *max = num;
}