#include <stdio.h>

void solve(int, int);

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    solve(n, m);
    return 0;
}
/*  If the remainder is equal to zero print quotient, if not
print the mixed fraction*/
void solve(int n, int m) {
    int b = n % m, a = n / m;
    if(b == 0) printf("%d", a);
    else printf("%d %d/%d", a, b, m);
}