#include <stdio.h>

int speed(int, int, int, int);
void solve(int*, int*, int);

int main() {
    int N;
    scanf("%d", &N);
    int times[N];
    int distances[N];

    for(int i = 0; i < N; i++) scanf("%d %d", &times[i], &distances[i]);

    solve(times, distances, N);    
    return 0;
}
// Calculates the velocity between two points
int speed(int t0, int d0, int ti, int di) {
    return (di - d0) / (ti - t0);
}

/* Searches for the maximum speed and displays it on the screen*/
void solve(int *times, int *distances, int N) {
    int speedMax = 0;
    for(int i = 0; i < N - 1; i++) {
        int sp = speed(times[i], distances[i], times[i + 1], distances[i + 1]);
        if (speedMax < sp) speedMax = sp; 
    }
    printf("%d", speedMax);
}

