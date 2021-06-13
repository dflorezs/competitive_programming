#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int problems, p, v, t, yes, result_sum;
    cin>>problems;
    yes = 0;
    while(problems--){
        cin>>p>>v>>t;
        result_sum = p + v + t;
        if (result_sum >= 2){
            yes += 1;
        }
    }
    cout<<yes;
 return 0;   
}