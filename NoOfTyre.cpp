
// Problem Statement –

// A function is there which tells how many dealerships there are and the total number of cars in each dealership.

// Your job is to calculate how many tyres would be there in each dealership.


// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
   int t;
   cout<<"How many Dealeship?";
   cin>>t;
   while(t--){
       int arr[2];
       for(int i=0;i<2;i++){
           cin>>arr[i];
       }
       
       int totalTyre=0;
      totalTyre += arr[0]*4;
       totalTyre += arr[1]*2;
      
   
   cout<<"ANS is "<< totalTyre;
   }

    return 0;
}