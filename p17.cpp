/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int d;
    cin>>d;
    int sum=0;
    for(int i=0;i<n;i++){
        if((i-d)<0){
            if(arr[i+d]<arr[i]){
                sum += arr[i];}
            }else if((i+d)>n-1){
                if(arr[i-d]<arr[i]){
                    sum += arr[i];
                }
            }else{
                if(arr[i-d]<arr[i] && arr[i]>arr[i+d]){
                    sum += arr[i];
                }
            }
        }
    
    cout<<sum;
    return 0;
}
