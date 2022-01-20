#include <stdio.h>

void solve(int, int);

int main() {
    int A, B;
    scanf("%d %d", &A, &B);
    solve(A, B);
    return 0;
}
/* Print int the sreen all numbers in the range betwen A and B*/
void solve(int A, int B) {
    for(int i = A; i <= B; i++) printf("%d\n", i);
}
