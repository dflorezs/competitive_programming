#include <stdio.h>

void solve(int *a, int *b, int *c);

int main(){
    unsigned a ,b, c;
    scanf("%u %u %u", &a, &b, &c);
    solve(&a, &b, &c);    
    return 0;
}
/*validate each condition of the problem and print False or True as the case may be*/
void solve(int *a, int *b, int *c){
    *a < *b ? printf("True ") : printf("False ");
    *c > *a ? printf("True ") : printf("False ");
    *a == *b ? printf("True ") : printf("False ");
    *a != *c ? printf("True ") : printf("False ");
    *c <= *b ? printf("True") : printf("False");
}
