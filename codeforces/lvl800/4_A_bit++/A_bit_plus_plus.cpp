#include <iostream>
using namespace std;

void solve(string, int*);

int main() {
    int n, x = 0;
    cin>>n;
    string s;
    for(int i = 0; i < n; i++) {
        cin>>s;
        solve(s, &x);
    }
    cout<<x<<endl;
    return 0;
}
/* analyzes each statement, if it increments x then it 
   adds one unit to x. If it decrements x then it subtracts 
   one unit from x. Finally it prints on the screen the value 
   of the variable x.*/
void solve(string s, int *x) {
    if(s[1] == '+') *x = *x + 1;
    else if(s[1] == '-') *x = *x - 1;
}
