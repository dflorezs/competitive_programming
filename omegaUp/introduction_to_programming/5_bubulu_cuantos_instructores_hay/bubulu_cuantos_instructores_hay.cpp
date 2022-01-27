#include <iostream>
#include <string>
using namespace std;

void solve(string str);

int main(){
    string input;
    getline(cin, input);
    solve(input);
    return 0;
}

void solve(string str){
    int count = 1;
    for (int i = 0; i < str.length(); i++) if (str[i] == ' ') count ++; 
    cout<<count;
}


