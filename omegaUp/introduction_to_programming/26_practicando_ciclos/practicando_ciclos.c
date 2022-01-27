#include <stdio.h>

void solve(int, int, int);
int sum(int);

int main() {
    int N, A, B;
    scanf("%d %d %d", &N, &A, &B);
    solve(N, A, B);
    return 0;
}
/* As long as the value of N is less 
than 1000 then if N is even it increases 
the value of N in the sum of all the elements 
of the range of A if not it increases the value 
of N in the sum of all the elements of the range of B */
void solve(int N, int A, int B) {
    int sA = sum(A), sB = sum(B);
    while(N < 1000) {
        if(N % 2 == 0) N += sA;
        else N += sB;   
    }
    printf("%d", N);
}
/* Sum the elements in the given range */
int sum(int n) {
    int s = 0;
    for(int i = 1; i <= n; i++) s += i;
    return s;
}



