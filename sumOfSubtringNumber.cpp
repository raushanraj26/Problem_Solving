
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    // string s="321";             //3+2+1+32+21+321=380
                       
    string s="12";            //1+2+12=15  
    int sum=0;
    for(int i=0;i<s.size();i++){
        string temp="";
        for(int j=i;j<s.size();j++){
            temp+=s[j];
            sum += stoi(temp);
        }
    }
    
    cout<<"sum is "<<sum;

    return 0;
}



//o(n2) ---for optimization do sersach