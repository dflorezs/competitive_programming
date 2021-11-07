#include <stdio.h>

void solve(int l1, int t1, int l2, int t2);

int main(){
    int l1, t1, l2, t2;
    scanf("%d %d %d %d", &l1, &t1, &l2, &t2);
    solve(l1, t1, l2, t2);
    return 0;
}
/*validates the characteristics of bone 1 are greater than
 those of bone 2 and vice versa and prints which one has better characteristics*/
void solve(int l1, int t1, int l2, int t2){
    if ((l1 > l2) && (t1 > t2)) printf("Hueso 1");
    else if ((l1 < l2) && (t1 < t2)) printf("Hueso 2");
    else printf("Perrito confundido :(");
}
