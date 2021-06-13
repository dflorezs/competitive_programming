#include<bits/stdc++.h>
using namespace std;
 
void solve(int weight){
    
    if (weight > 3 && weight % 2 == 0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}
 
int main(){
    
    int weight;
    cin>>weight;
 
    solve(weight);
    
    return 0;
}