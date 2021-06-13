#include<bits/stdc++.h>
using namespace std;
 
string string_to_number(int number){
    string result;
    ostringstream convert;
 
    convert << number;
    result = convert.str();
    
    return result;
}
 
void solve(string word){
    
    if (word.size() > 10){
        cout<<word[0] + string_to_number((word.size() - 2)) + word[(word.size() - 1)];
    }
    else{
        cout<<word;
    }
}
 
 
int main(){
    
    int cases;
    string word;
    vector<string>array_string;
    
    cin>>cases;
    
    for (int i = 0; i < cases; i++){
        cin>>word;
        array_string.push_back(word);    
    }
    for (int i = 0; i < array_string.size(); i++){
        solve(array_string[i]);
        cout<<endl;
        
    }
    return 0;
}