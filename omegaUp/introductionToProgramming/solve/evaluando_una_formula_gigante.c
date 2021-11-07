#include <stdio.h>
#include <math.h>

void solve(float *x, float *y, float *z);

int main(){
    float x, y, z;
    scanf("%f %f %f", &x, &y, &z);
    solve(&x, &y, &z);
    return 0;
}

void solve(float *x, float *y, float *z){
    printf("%f", (((2 * *x + *y) / *z) * (pow(*y, 3) - *z)) / ((*x + 2 * *y + 3 * *z) / (*z - 2 * *y - 3 * *x) + pow(*x, 2) + pow(*z, 2)));
}

