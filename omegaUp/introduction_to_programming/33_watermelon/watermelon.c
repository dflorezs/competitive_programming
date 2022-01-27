#include <stdio.h>
void solve(int w);
int main(){
    int w;
    scanf("%d", &w);
    solve(w);
    return 0;
}
/*The function validates the weight if the pair is even 
it displays YES otherwise it displays NO*/
void solve(int w){
    w > 2 && w % 2 == 0 ? printf("SI") : printf("NO");
}
