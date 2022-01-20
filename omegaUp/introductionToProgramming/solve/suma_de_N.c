#include <stdio.h>

void solve(int);

int main() {
    int N;
    scanf("%d", &N);
    solve(N);
    return 0;
}
/* Add the remainder of N and update N 
with the integer part as long as N is 
different from zero.*/
void solve(int N) {
    int sum = 0;
    do{
        sum = sum + (N % 10);
        N = N / 10;
    }while(N != 0);
    printf("%d", sum);
}



