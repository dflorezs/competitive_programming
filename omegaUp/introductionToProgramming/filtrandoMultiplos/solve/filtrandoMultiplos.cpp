#include <iostream>
using namespace std;
void solve(int k, int n, int *arr);

int main(){
    int n, k, element;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>element;
        arr[i] = element;
    }
    cin>>k;

    solve(k, n, arr);

    return 0;
}
/*we go through each of the elements of the array 
and if the element is a multiple of k 
then we replace it by an X*/
void solve(int k, int n, int *arr){
    for (int i = 0; i < n; i++) arr[i] % k == 0 ? cout<<arr[i]<<" " : cout<<"X ";
}