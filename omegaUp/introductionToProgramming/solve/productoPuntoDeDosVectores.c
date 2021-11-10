#include <stdio.h>

int solve(int n, int *a, int *b);

int main(){
    int n, element;
    scanf("%d", &n);
    int a[n], b[n];
    for (int i = 0; i < 2*n; i++){
        scanf("%d", &element);
        if (i <= 2) a[i] = element;
        else b[i] = element; 
    }
    printf("%d", solve(n, a, b));
    return 0;
}

/*The function iterates over the vectors and adds up
the product of its components*/
int solve(int n, int *a, int *b){
    int ans;
    for (int i = 0; i < n; i++) {
        printf("%d", a[i]);
    }
    return ans;
}