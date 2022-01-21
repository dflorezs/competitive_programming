#include <iostream>
using namespace std;

void solve(string);
bool isPalindrome(string);

int main() {
    string p;
    cin>>p;
    solve(p);
    return 0;
}
/* If the word is palindrome print SI, else print NO*/
void solve(string s) {
    if(isPalindrome(s)) cout<<"SI";
    else cout<<"NO";
}

/* If the length of the word is even then iterate to length / 2 otherwise 
iterate to (length - 1 / 2) and validate if the end position is equal.
iterate to (length - 1) / 2 and validate if the end of the position is
 equal, if it is equal in all iterations return true otherwise return falsel*/
bool isPalindrome(string s) {
    if(s.length() % 2 == 0) {
        for(int i = 0; i < s.length() / 2; i++) if(s[i] != s[s.length() - 1 - i]) return false;
        return true;
    }
    else {
        for(int i = 0; i < (s.length() - 1) / 2; i++) if(s[i] != s[s.length() - 1 - i]) return false;
        return true;
    }
}

