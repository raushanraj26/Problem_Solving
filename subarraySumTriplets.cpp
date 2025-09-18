//leetcode---3392--https://leetcode.com/problems/count-subarrays-of-length-three-with-a-condition/submissions/1752911673/?utm_source=chatgpt.com


//go to this link for better understanding concept

// --------------single for loop se traverse kro-------------------




#include <iostream>
using namespace std;

int main() {
    int n = 8;
    int arr[] = {1,2,1,3,5,2,4,2};
    int ans = 0;

    for(int i = 0; i <= n - 3; i++) {
        if(arr[i] + arr[i+2] == arr[i+1]) {  // condition check
            ans++;
        }
    }

    cout << "ans is- " << ans;
    return 0;
}

//---------------------------------sliding window approach-------------------




// #include <iostream>
// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     // Write C++ code here
//     int n=8;
//     int arr[]={1,2,1,3,5,2,4,2};
//     int k=3;
//     int i=0;
//     int j=0;
//     int ans=0;
//     while(j<n){
//         while(j-i+1>3){
//             i++;
//         }
//         if(j-i+1==3){
//             if(arr[i]+arr[j]==arr[i+1]){
//                 ans++;
//             }
            
//         }
//         j++;
//     }
// cout<<"ans is- "<<ans;
//     return 0;
// }