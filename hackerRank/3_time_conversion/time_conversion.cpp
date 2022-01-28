#include <iostream>
using namespace std;

string timeConversion(string);

int main() {
    string s;
    cin>>s;
    cout<<timeConversion(s)<<endl;
    return 0;
}
/* Convert a string the format AM/PM in military hour*/
string timeConversion(string s) {
    string temp;
    string ans = "";
    int num = 12;
    
    if((s[8] == 'A' && s[0] != '1') || (s[1] != '2' && s[8] == 'A')) for(unsigned int i = 0; i < s.size() - 2; i++) ans.push_back(s[i]);  
    else if((s[0] == '1' && s[1] == '2') && s[8] == 'A') {
        ans += "00";
        for(unsigned int i = 2; i < s.size() - 2; i++) ans.push_back(s[i]);
    }else if((s[8] == 'P' && s[0] != '1') || (s[8] == 'P' && s[1] != '2')) {
        temp.push_back(s[0]);
        temp.push_back(s[1]);
        num += stoi(temp);
        ans += to_string(num);
        for(unsigned int i = 2; i < s.size() - 2; i++) ans += s[i];
    }else if((s[0] == '1' && s[1] == '2') && s[8] == 'P') for(unsigned int i = 0; i < s.size() - 2; i++) ans.push_back(s[i]);  
    return ans;
    
}
