#include <stdio.h>

void solve(int n);

int main(){
    int n;
    scanf("%d", &n);
    solve(n);
    return 0;
}
/* Iterate over the matrix and at the position of the main and secondary
 diagonal digraph fill it with an at sign otherwise fill it with a space*/
void solve(int n){
    char matriz[n][n];
    // Find matriz
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
           if ((i + j == n - 1) || (i == j)) matriz[i][j] = '@';
           else matriz[i][j] = ' '; 
        }
    }
    // Show matriz
    for (int i = 0; i < n; i++){
        for ( int j = 0; j < n; j++) {
            printf("%c", matriz[i][j]);
            if (j == n - 1) printf("\n");
        }
    }
}
