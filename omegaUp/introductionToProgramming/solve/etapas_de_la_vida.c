#include <stdio.h>

void solve(int);

int main() {
    int L;
    scanf("%d", &L);
    solve(L);
    return 0;
}
/* Validates the age range and assigns a category to it*/
void solve(int age) {
    if(0 < age && age <= 3) printf("BEBE");
    else if(4 <= age && age <= 14) printf("NINO");
    else if(15 <= age && age <= 18) printf("JOVEN");
    else if(19 <= age && age <= 65) printf("ADULTO");
    else if(65 <= age) printf("ADULTO 3RA");
}
