//443.https://leetcode.com/problems/string-compression/description/

int compress(vector<char>& chars) {
    int n = chars.size();   // total number of characters in the input
    int idx = -1;           // write pointer (where we write compressed chars)
    int i = 0;              // start index of the current group of characters
    int j = 0;              // scanning index
    int cnt = 0;            // count of characters in the current group

    // Traverse the characters using two pointers (i and j)
    while (j < n) {
        if (chars[i] == chars[j]) {
            // If current character matches the start of group
            cnt++;  // increase count
            j++;    // move scanning pointer forward
        } else {
            // Group ended when chars[j] != chars[i]

            if (cnt == 1) {
                // If only one occurrence → just write the character
                chars[++idx] = chars[i];
                i = j;  // move start of next group
            } else {
                // If multiple occurrences → write character + count
                chars[++idx] = chars[i];  // write the character
                string number = to_string(cnt); // convert count to string
                for (int k = 0; k < number.size(); k++) {
                    chars[++idx] = number[k];  // write each digit separately
                }
                i = j;  // move start of next group
            }
            cnt = 0; // reset count for next group
        }
    }

    // After loop ends, we may still have a group left
    if (cnt) {
        if (cnt == 1) {
            // Single character at the end
            chars[++idx] = chars[i];
        } else {
            // Multiple characters at the end
            chars[++idx] = chars[i];  // write the character
            string number = to_string(cnt); // convert count to string
            for (int k = 0; k < number.size(); k++) {
                chars[++idx] = number[k];  // write each digit separately
            }
        }
    }

    // Resize chars to the new compressed length (idx + 1)
    chars.resize(idx + 1);

    // Return the new length of the compressed string
    return idx + 1;
}





//online compiler

// // Online C++ compiler to run C++ program online
// #include <iostream>
// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     // Write C++ code here
// //   string s="aabbbbcddddfff";        //a2b4cd4f3

//  //string s="abbbbbbbbbbbb";        //ab12
// // string s="a";
//   int n=s.size();
//   int i=0;
//   int j=0;
//   int cnt=0;
//   string ans="";
//   while(j<n){
//       if(s[i]==s[j]){
//           cnt++;
//           j++;
//       }else{
//           if(cnt==1){
//               ans+= s[i];
//               i=j;
              
              
//           }else{
//               string number=to_string(cnt);
//               ans +=s[i];
//               ans+=number;
//               i=j;
//           }
//           cnt=0;
//       }
//   }
//   if(cnt){
//       if(cnt==1){
//               ans+= s[i];
              
              
              
//           }else{
//               string number=to_string(cnt);
//               ans +=s[i];
//               ans+=number;
            
//           }
      
//   }
//   cout<<"ans is "<<ans;

//     return 0;
// }