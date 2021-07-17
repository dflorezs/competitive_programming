#include<bits/stdc++.h>
using namespace std;

void solve(int xA, int xB, int xF, int yA, int yB, int yF);

int main(){
    int numTest, xA, xB, xF, yA, yB, yF;
    cin>>numTest;
    
    for (int i = 0; i < numTest; i++){
        cout<<endl;
        
        cin>>xA>>yA;
        cin>>xB>>yB;
        cin>>xF>>yF;
        
        solve(xA, xB, xF, yA, yB, yF);
    }
    return 0;
}

void solve(int xA, int xB, int xF, int yA, int yB, int yF){
    int shortestWay = 0;
    
    if (((xA == xB && xB == xF) && (yA > yF && yF > yB)) || ((xA == xB && xB == xF) && (yB > yF && yF > yA))) shortestWay = abs(yA - yB) + 2;
    else if (((yA == yB && yB == yF) && (xA > xF && xF > xB)) || ((yA == yB && yB == yF) && (xB > xF && xF > xA))) shortestWay = abs(xA - xB) + 2;
    else shortestWay = abs(xA - xB) + abs(yA - yB);
    
    cout<<shortestWay<<endl;
}

