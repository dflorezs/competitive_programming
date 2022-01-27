#include <stdio.h>

void solve(int, int);

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    solve(a, b);
    return 0;
}
/* Iterate from a to b and print the number */
void solve(int a, int b) {
    for(int i = a; i <= b; i++) printf("%d ", i);
}
