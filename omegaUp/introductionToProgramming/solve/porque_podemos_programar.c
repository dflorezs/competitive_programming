#include <stdio.h>
#include <math.h>

void solve(float);

int main() {
    float x;
    scanf("%f", &x);
    solve(x);
    return 0;
}
/* Performs the arithmetic calculations and prints the result */
void solve(float x) {
    float ans = ((x + pow(x, 2)) / (5 * x + 3) + x) * (((x + pow(x, 2)) / (5 * x + 3)) / ((x + pow(x, 2)) / ((5 * x + 3)) + 2 * x));
    printf("%f", ans);
}
