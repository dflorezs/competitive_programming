#include <iostream>
using namespace std;
void solve(int n);

int main(){
    int t, n;
    cin>>t;
    while(t--){
        cin>>n;
        solve(n);
    }
    return 0;
}

void solve(int n){
    cout<<(n+1)/10<<endl;
}

