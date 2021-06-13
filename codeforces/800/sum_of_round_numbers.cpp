#include<bits/stdc++.h>
 
using namespace std;
 
vector<int> solve(string num)
{
    vector<int> numeros;
    int cuenta = 1;
 
    for(int i = num.size()-1; i >= 0; i--)
    {
        int actual = num[i] - 48;
        if (actual != 0)
        {
            actual *= cuenta;
            numeros.push_back(actual);    
        }
        cuenta*=10;
    }
 
    return numeros;    
}
 
 
int main()
{
    int casos;
    cin>>casos;
 
    for(int i = 0; i<casos; i++)
    {
        string num;
        cin>>num;
        vector<int>resultado = solve(num);
        cout<<resultado.size()<<endl;
        
        for (int j = 0; j<resultado.size(); j++)
        {
            cout<<resultado[j]<<" ";
        }
 
        // salto lineal
        cout<<endl;
        /*for(auto x : resultado)
        {
            
        }*/
           
    }
 
}