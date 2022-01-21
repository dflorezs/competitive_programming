#include <iostream>
using namespace std;

void solve(string, char);

int main() {
    string p;
    char l;
    cin>>p>>l;
    solve(p, l);
    return 0;
}
/* Iterate over the word and count the occurrences of the letter l in the word.*/
void solve(string s, char l) {
    int count = 0;
    for(int i = 0; i < s.length(); i++) if(s[i] == l) count++;
    printf("%d", count); 
}
