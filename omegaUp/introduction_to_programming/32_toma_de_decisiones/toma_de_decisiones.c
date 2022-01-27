#include <stdio.h>

void solve(int, int);

int main() {
    int A, B;
    scanf("%d %d", &A, &B);
    solve(A, B);
    return 0;
}
/* Validates the flowchart conditions and prints the corresponding output.*/
void solve(int A, int B) {
    if(A + B == 5) {
        B += 3;
        printf("%d", 2 * A + B);
    }else {
        A -= 1;
        if((7 * A + B) % 2 == 0) printf("%d", A - B);
        else printf("%d", A * B);
    }
}
