
/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    
    unordered_map<char,int>freq;
    for(int i=0;i<s.size();i++){
        freq[s[i]]++;
    }
    
    
    unordered_map<int,int>mp;
    for(auto& i:freq){
        mp[i.second]++;
    }
    
    int key=0;
    int value=INT_MIN;
    for(auto& i:mp){
        if(i.second==value){ //if freq same hai then uske key me jo pahle aata hai uske according lo
            key=min(key,i.first);
        }else if(i.second>value){    //freq jyada hai then value and key dono update kr do
            value=i.second;
            key=i.first;
        }
    }
cout<<key;
    return 0;
}