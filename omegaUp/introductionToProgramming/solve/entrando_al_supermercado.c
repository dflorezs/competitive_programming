#include <stdio.h>

void solve(int*, int, int);

int main() {
    int N, M;
    scanf("%d %d", &N, &M);
    int C[N];
    for(int i = 0; i < N; i++) scanf("%d", &C[i]);
    solve(C, N, M);
    return 0;
}

void solve(int *C, int N, int M) {
    int count1 = C[0];
    for(int i = 0; i < N; i++) {
        if(count1 <= M) {
            printf("pasa\n");
            count1 += C[i + 1];
        }else {
            printf("espera\n");
            count1 -= C[i];
            count1 += C[i + 1];   
        }
    }
}