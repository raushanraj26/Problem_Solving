



// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
//   string s1="ABD";
//   string s2="AABCCAD";

string s1="ABC";
   string s2="XYZ";

   vector<int>freq1(26,0);
   vector<int>freq2(26,0);
   for(int i=0;i<s1.size();i++){
       freq1[s1[i]-'A']++;
   }
   for(int i=0;i<s2.size();i++){
       freq2[s2[i]-'A']++;
   }
//   if equal freq ,no need to add delte or do anything
//   if freq1 jyada hua then delte krnge isme cost nii lgega
//   if freq2 jyada then jitna jyada utna cost lgega

int cost=0;
for(int i=0;i<26;i++){
    if(freq2[i]>freq1[i]){   // means freq2 jyada,add krna hoga->cost lgega
        cost += (freq2[i]-freq1[i]);
    }
}

cout<<cost;
    return 0;
}