#include <stdio.h>

void solve(int, int);

int main() {
    int P, Q;
    scanf("%d %d", &P, &Q);
    solve(P, Q);
    return 0;
}
/* Validates the expression and prints the value of P and Q if it is fulfilled,
otherwise it prints nothing*/
void solve(int P, int Q) {
    if(P * P * P + Q * Q * Q * Q - 2 * P * P < 680) printf("%d\n%d", P, Q);
}
