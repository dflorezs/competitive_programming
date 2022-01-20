#include <stdio.h>
#include <stdlib.h>

void solve(int, int, int);
int distance(int, int);

int main() {
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);
    solve(A, B, C);
    return 0;
}
/* Compares the distance of each cat to the mouse and 
validate which distance is smaller and print the name 
a cat whit distance is smaller.*/
void solve(int g1, int g2, int r) {
    int dg1 = distance(g1, r), dg2 = distance(g2, r);
    if(dg1 > dg2) printf("gato B");
    else if(dg1 == dg2) printf("raton C");
    else printf("gato A");
}
/* Calculate the distance betwen cat and mouse*/
int distance(int g, int r) {
    return abs(g - r);
}

