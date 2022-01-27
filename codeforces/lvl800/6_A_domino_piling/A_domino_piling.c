#include <stdio.h>

void solve(int, int);

int main() {
    int M, N;
    scanf("%d %d", &M, &N);
    solve(M, N);
    return 0;
}

void solve(int M, int N) {
    if(N % 2 == 0) printf("%d", (N / 2) * M);
    else printf("%d", (N / 2) * M + (M / 2));
}