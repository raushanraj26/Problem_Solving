/*
    This code counts the number of indices (from 0 to n-2) where the difference
    between the prefix sum (sum of elements from 0 to i) and the suffix sum
    (sum of elements from i+1 to n-1) is even.
*/

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int arr[5]={10,10,3,7,6};
    int n=5;
    int suffixsum=0;
    for(int i=0;i<n;i++){
        suffixsum += arr[i];
    }
    
    int prefixsum=0;
    int cnt=0;
    
    //arr.size-1 because last tk chlega then right me koi element nii bach paaayega,so minimum ek element last hona chaye
     for(int i=0;i<n-1;i++){
         prefixsum +=arr[i];
         suffixsum -= arr[i];
         if(abs(prefixsum-suffixsum)%2==0){
             cnt++;
         }
     }
    
    cout<<cnt;
    return 0;
}