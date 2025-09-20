// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;


int main() {
    // Write C++ code here
   int n,l,r;
   cin>>n>>l>>r;
   int arr[n];
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   int mini=0;
   int maxi=0;
   int dopa=0;
   for(int i=0;i<n;i++){
       if(arr[i]>=l && arr[i]<=r){   //jo range me hai ,increase kro
           dopa++;
           
       }else{   //out of range ,decrease kro
           dopa--;
       }
       //last me max and min ko update krte jaao
       mini=min(dopa,mini);
           maxi=max(dopa,maxi);
   }
cout<<maxi<<" "<<mini;
    return 0;
}