#include <stdio.h>

void solve(int*, int);

int main(){
    int N;
    scanf("%d", &N);
    int nums[N];
    
    for(int i = 0; i < N; i++) scanf("%d", &nums[i]);
    
    solve(nums, N);
    return 0;
}
//Iterates N/2 times over the array and displays the sum of the extreme elements
void solve(int *nums, int N) {
    for(int i = 0; i < N / 2; i++) printf("%d ", nums[i] + nums[N - 1 - i]);
} 
