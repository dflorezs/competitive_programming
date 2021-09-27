#include <iostream>
using namespace std;

bool solve (int n, int *a, int *b);
int main(){
    int n, element;
    cin>>n;
    int a[n], b[n];
    int c = 0;
    while (c<2){
        if (c == 0){
            for (int i = 0; i < n; i++){
            cin>>element;
            a[i] = element;
            }
            c++;
        }else if (c == 1){
            for (int i = 0; i < n; i++){
            cin>>element;
            b[i] = element;
            }
            c++;
        }
    }
    cout<<solve(n, a, b);
    return 0;
}

bool solve (int n, int *a, int *b){
    int pos = 0;
    while ((pos < n) && (a[pos] > b[pos])) pos++;
    return true ? pos == n : false;
}