/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
string s="aartfu";
vector<int>freq(26,0);
for(int i=0;i<s.size();i++){
    int idx=s[i]-'a';
    freq[idx]++;
}
int evenmini=INT_MAX;
int oddmaxi=INT_MIN;
for(int i=0;i<26;i++){
    if(freq[i]%2==0){
        evenmini=min(evenmini,freq[i]);
        
    }else{
        oddmaxi=max(oddmaxi,freq[i]);
    }
}
int diff=abs(oddmaxi-evenmini);
cout<<diff;
    return 0;
}