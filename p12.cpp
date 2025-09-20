/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    vector<int>ans;
    for(int i=0;i<n;i++){
        int cnt=0;
        if((arr[(i+1)%n])>arr[i]){
            cnt++;
        }
        if(arr[(i+n-1)%n]>arr[i]){
            cnt++;
        }
        ans.push_back(cnt);
    }
    
for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
}
    return 0;
}