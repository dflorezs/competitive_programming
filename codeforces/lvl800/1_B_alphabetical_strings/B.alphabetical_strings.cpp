#include<bits/stdc++.h>
using namespace std;

int initialLetter = 97, position = 0, leftPosition = 0, rightPosition = 0, validate = 0;
bool in = false;

vector<char> addStartEnd(string s, int t);
bool searchPosition(vector<char> v);
void solve(vector<char> v);

int main(){
    //Number of test
    int numTest;
    cin>> numTest;
    string chain;
    vector<string> vChain;
    vector<char> v;
    //Inputs
    for (int i = 0; i < numTest; i++){
        cin>>chain;
        vChain.push_back(chain);
    }
    //
    for (int i = 0; i < vChain.size(); i++){
        //Add '*' to the start and end to each input (string)
        v = addStartEnd(vChain[i], vChain[i].size());
        //Search for the position of 'a'
        searchPosition(v);
        solve(v);
    }
    return 0;
}

//funtion add '*'
vector<char> addStartEnd(string s, int t){
    vector<char> arr(t + 2, '*');
     
    for (int i = 0; i < t ; i++){
         arr[i+1] = s[i]; 
    }
    return arr;
 }

bool searchPosition(vector<char> v){
    initialLetter = 97;
    in = false;
    for (int i = 0; i < v.size(); i++){
        if (v[i] == initialLetter){
            in = true;
            position = i;
            leftPosition = position - 1;
            rightPosition = position + 1;
            return 1;
        }
    }
}

void solve(vector<char> v){
    if (in == 1){
        initialLetter = 97;
        validate = 0;
        for (int i = 0; i < v.size()-3; i++){
            initialLetter++;
            if (v[leftPosition] == initialLetter){
                leftPosition --;
                validate += 1;
            }
            else if (v[rightPosition] == initialLetter){
                rightPosition ++;
                validate += 1;
            }
            else break;
        }
        if (validate == v.size()-3) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    else cout<<"NO"<<endl;
}


  


 

 