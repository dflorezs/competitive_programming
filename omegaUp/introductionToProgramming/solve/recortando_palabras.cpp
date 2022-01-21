#include <iostream>
using namespace std;

void solve(string, int);

int main() {
    string p;
    int n;
    cin>>p>>n;
    solve(p,n);
    return 0;
}
/* Iterates n times and concatenates each element 
to form the initial substring and the same with the
 final sub end substring and print the concatenation 
of the initial substring to the final substring*/
void solve(string s, int n) {
    string si = "", sf = "";
    for(int i = 0; i < n; i++) {
        si += s[i];
        sf += s[s.length() - n + i];
    }
    cout<<si + sf; 
}
