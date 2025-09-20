// You are given a numeric string S consisting of digits from '1' to '9'.
// Each number can be mapped to a letter in the alphabet where:
// '1' → A
// '2' → B
// ...
// '26' → Z
// You can extract single digits or valid consecutive two-digit combinations (≤ 26).
// Your task is to find and return an integer value representing the count of unique alphabetic mappings possible from the given string S.
// Input Specification:
// input1: A string S representing the digits.
// Output Specification:
// Return an integer value representing the count of unique alphabetic mappings possible from the given string S.
// Example 1:
// input1 : 226
// Output : 5
// Explanation:
// Here, the string S is 226. We can count the valid alphabet mappings as below:
// 2 → B
// 6 → F
// 22 → V
// 26 → Z
// There are a total of 5 valid mappings. Hence, 5 is returned as the output.
// Example 2:
// input1 : 21292
// Output : 7






#include <bits/stdc++.h>
using namespace std;
//set use kro if duplicaate ni chheye
// pahle siigle digit store kro then doble digit jo range me hai into set then return size of set
int main() {
//    string s="11292";
string s="21292";
   int n=s.size();
   int cnt=n;   //every single digit mapping
   for(int i=1;i<n;i++){    //double digit check kro valid range
      string num ;
      num+=s[i-1];
      num+= s[i];
     // num=s.substr(i,2);
      
      if(stoi(num)<=26){
          cnt += 1;
  }
  }
   
//   for(int i=0;i<n-1;i++){
//       string num ;
//       num+= s[i];
//       num+=s[i+1];
//       if(stoi(num)<=26){
//           cnt += 2;
//   }else{
//       cnt += 1;
//   }
//   }
   cout<<cnt;

    return 0;
}