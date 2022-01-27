#include <stdio.h>

void solve(int*, int);

int main() {
    int N;
    scanf("%d", &N);
    int heights[N];
    if(1 <= N && N < 40) {
        for(int i = 0; i < N; i++) scanf("%d", &heights[i]);
        solve(heights, N);
    }else printf("ERROR");
    
    return 0;
}

/* Iterate over the array and search for the maximum element 
in the array and print the index of the maximum element in the array.*/
void solve(int *h, int N) {
    int indexMaxheight = 0;
    for(int i = 1; i < N; i++) if(h[indexMaxheight] < h[i]) indexMaxheight = i;
    printf("%d", indexMaxheight + 1);
}