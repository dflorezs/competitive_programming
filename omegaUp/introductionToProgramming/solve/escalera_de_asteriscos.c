#include <stdio.h>
#include <string.h>

void solve(int);

int main() {
    int N;
    scanf("%d", &N);
    solve(N);
    return 0;
}
/* Concatenates and prints the symbol N times*/
void solve(int N) {
    char s[16] = {"#"};
    printf("%s\n", s);
    for(int i = 1; i < N; i++) {
        strcat(s, "#");
        printf("%s\n", s);
    }
}
