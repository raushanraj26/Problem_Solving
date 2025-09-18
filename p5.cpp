// You are given an array of strings of length N.
// For each string, you must remove all vowels (a, e, i, o, u, A, E, I, O, U).
// After removing vowels, you look at the remaining letters of each string.
// Then, you need to calculate the number of permutations possible with those remaining characters.
// 👉 The answer is the maximum permutation count among all processed strings.
// --
// 📝 Important Notes
// 1. Each occurrence of a character is treated as unique.
// Example: word "doll" → after removing vowels → "dll".
// Even though there are 2 'l' letters, we treat them as different positions.
// So "dll" has 3 characters → 3! = 6 permutations.
// 2. If a string has only vowels (and nothing left after removal), then it has no characters to permute → answer = 0.
// 3. Case sensitivity matters (uppercase and lowercase are considered different letters).
// ---
// ⚙️ Steps to Solve
// . For each string in the array:
// Remove vowels.
// Count the length of the remaining string (say k).
// If k > 0, calculate factorial(k) = number of permutations.
// If k == 0, permutations = 0.
// 2. Find the maximum permutation count among all strings.
// 3. Return that maximum value.
// ---
// 📌 Example Walkthrough
// Example 1
// Input:
// input1 = {"code", "chef"}  
// input2 = 2
// "code" → remove vowels → "cd" → length = 2 → permutations = 2! = 2
// "chef" → remove vowels → "chf" → length = 3 → permutations = 3! = 6
// 👉 Maximum permutation count = 6
// Output:
// 6
// --
// Example 2
// Input:
// input1 = {"eio"}  
// input2 = 1
// "eio" → remove vowels → "" → length = 0 → no characters → permutations = 0
// 👉 Maximum permutation count = 0
// Output:
// 0








// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
    int n;
    cin>>n;
    string str[n];
    
    for(int i=0;i<n;i++){
        cin>>str[i];
    }
    
    int maxi=0;
    for(int i=0;i<n;i++){
        string word=str[i];
        int conson=0;
        for(int j=0;j<word.size();j++){
            if(word[j]=='a' || word[j]=='e' || word[j]=='i' || word[j]=='o' || word[j]=='u' || word[j]=='A' || word[j]=='E' ||word[j]=='I' ||word[j]=='O' || word[j]=='U'){
                continue;
            }else{
                conson++;
            }
        }
        int fact=1;
        for(int j=1;j<=conson;j++){
            fact =fact*j;
            
        }
        maxi=max(maxi,fact);
    }
cout<<maxi;
    return 0;
}