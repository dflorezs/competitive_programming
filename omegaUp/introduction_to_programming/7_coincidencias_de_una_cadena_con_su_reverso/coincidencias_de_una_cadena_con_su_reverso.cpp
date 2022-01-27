#include <iostream>
using namespace std;

int solve(string s);

int main() {
    string s;
    cin>>s;
    cout<<solve(s);
    return 0;
}

int solve(string s) {
    int ans = 0;

    for(int i = 0; i < s.length() / 2; i++) {
        if(tolower(s[i]) == tolower(s[s.length() - 1 - i])) ans++;
    }

    if(s.length() % 2 == 0) return 2 * ans;
    else return 2 * ans + 1;
}
