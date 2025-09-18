// you are given a string Scopelsting of lowercase English letters and digits, where the letters represent iters and the digits represent packaging lines. You have to count how many items are wrapped by packaging lines, Le how many letters have a digit on the left and a digit on the right in the string. Your task is to find and return an integer value representing the number of items wrapped in packaging lines.

// Input Specification:

// amallavinia

// usgamallav

// input1: A string S containing only lowercase English letters and digits (0-9).

// Output Specification:

// lines. Return an integer value representing the number of items wrapped in packaging

// Example 1:

// input1: 1a2b3c4d5  ;    //char ke dono side digit hona chaheye

// Output: 4



// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    
//  string s="1a2b3c4d5"; 
string s="5aart6i7io8o5o56";
 int n=s.length();
 int cnt=0;
 for(int i=1;i<n-1;i++){
     if(isalpha(s[i]) && isdigit(s[i-1]) && isdigit(s[i+1])){
         cnt++;
     }
 }
 cout<<"Ans is- "<<cnt<<endl;
  
    return 0;
}