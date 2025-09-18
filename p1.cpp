// You are given a string S consisting of lowercase English letters. You have to generate a new expanded string where each character in S repeats equal to its first index occurrence. Your task is to find and return a string formatted as described. The characters should be separated by hyphens ('-') in the output.
// ​Note: Assume 1-based indexing
// ​Input Specification:
// ​input1 : A string S consisting of lowercase English letters.
// ​Output Specification:
// ​Return a string formatted as described. The characters should be separated by hyphens ('-') in the output.
// ​Example 1:
// ​input1 : abcaba
// ​Output : a-bb-ccc-a-bb-a
// ​Explanation:
// ... the string S is abcaba. We can find the new string as below. ... so it repeats 1 time. The formatted str...













#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
  string str="abcaba";
  unordered_map<char,int>mp;
  for(int i=0;i<str.size();i++){
      if(mp.count(str[i]) == 0){
          mp[str[i]]=i+1;
      }
  }
  string ans="";
  for(int i=0;i<str.size();i++){
      int n=mp[str[i]];
      while(n--){
          ans += str[i];
      }
      if(i<str.size()-1){
          ans += "-";
      }
      
  }
cout<<"Ans is "<<ans;
    return 0;
}