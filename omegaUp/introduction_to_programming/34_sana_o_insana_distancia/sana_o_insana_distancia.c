#include <stdio.h>
#include <math.h>

void solve(int, int, int, int);
double distance(int, int, int, int);

int main() {
    int xA, yA, xB, yB;
    scanf("%d %d %d %d", &xA, &yA, &xB, &yB);
    solve(xA, yA, xB, yB);
    return 0;
}
/* This function calculate the distance between two points*/
double distance(int x1, int y1, int x2, int y2) {
    return sqrt(pow(((x1 - x2 ) * 1.0), 2.0) + pow(((y1 - y2) * 1.0), 2.0));
}

/* The solution validates the range of the 
   distance and prints the string sana o insana
   according to the problem conditions*/
void solve(int x1, int y1, int x2, int y2) {
   double d = distance(x1, y1, x2, y2);
   if(150 <= d) printf("sana");
   else printf("insana");
}
