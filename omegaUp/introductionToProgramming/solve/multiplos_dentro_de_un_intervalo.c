#include <stdio.h>

void solve(int, int);

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    solve(a, b);
    return 0;
}
/* as long as the multiplos variable is less 
than b prints the multiplot and updates the 
multiplos variable by adding a to it.*/
void solve(int a, int b) {
    int multiplos = a;
    do{
        printf("%d ", multiplos);
        multiplos += a;
    }while(multiplos <= b);
}
