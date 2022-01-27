#include <stdio.h>

int solve(int n, int *v1, int *v2);

int main(){
    int n;
    scanf("%d", &n);
    int v1[n];
    int v2[n];
    for (int i = 0; i < n; i++) scanf("%d", &v1[i]);
    for (int i = 0; i < n; i++) scanf("%d", &v2[i]);
    printf("%d", solve(n, v1, v2));
    return 0;
}
/*iterates n times and in each iteration takes each component 
of each vector, multiplies them and adds them together.*/
int solve(int n, int *v1, int *v2){
    int sum = 0;
    for (int i = 0; i < n; i++) sum += v1[i] * v2[i]; 
    return sum;
}
