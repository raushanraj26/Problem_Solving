// You are given an integer array A representing the pulse strength of incoming N data ues using a stack, where each pushed elem sury packets. You have to process these values element tracks a pulse skip count ie, the number of smaller or equal elements rehadveld before it was pushed. Below are the processing rules:
// For each element Alil in the sequence
// Remove elements from the stack until the stack is empty or A[i] > top of the stack
// Count the number of elements removed (this becomes the pulse skip count for Ali).
// Push Alil along with ils skip count onto the stack
// Leor Your task is to find and return an integer value representing the total sum of pulse skip counts for all processed elements in the sequence.
// Input Specification:
// input1: An integer value N, representing the number of data packets
// input2: An integer array A, representing the pulse strengths of the data packets.
// Output Specification
// Return an integer value representing the total sum of puse skip counts for all014251

// Output: 4


// Explanation:

// Here, there are 6 data packets with pulis strengths as (3,1,4,2,5,1). We can find the pulse skip count as below.

// For 3: Since it is the first elynent so stack will be [3]. The skip count will be 0.

// For 1: Since 1 < 3, stack will be [3,1]. The skip count will be 0.

// For 4: Remove 1 and 3 and push 4, skip count will be 2. So, stack will be [4].

// For 2: Since 2 < 4, stack will be [4,2]. The skip count will be 0.

// For 5: Remove 2 and 4 and push 5, skip count will be 2. So, stack will be [5].

// For 1: Since 15, stack will be [5.1]. The skip count will be 0.

// Sum of all skip count is 2+2= 4. Hence, 4 is returned as the output





// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
  int n=6;
  int arr[]={3,1,4,2,5,1};
  stack<int>st;
  int cnt=0;
  for(int i=0;i<n;i++){
      while(!st.empty() && st.top()<=arr[i]){
          cnt++;
          st.pop();
      }
    //   if(!st.empty()){
    //       st.push(arr[i]);
    //   }
      st.push(arr[i]);
      
  } 
  

cout<<"Ans is- "<<cnt<<endl;
cout<<"Printing the stack element..."<<endl;
  while(!st.empty()){
      cout<<st.top()<<endl;
      st.pop();
      
  }
    return 0;
}