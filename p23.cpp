// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    // Write C++ code here
   string s;
   getline(cin,s);
   int n=s.size();
   int i=0;
   unordered_map<string,int>mp;
   string str;
   while(i<s.size()){
       if(s[i]!='.'){
           str += s[i];
       }else{
           if(str.size()!=0){
               mp[str]++;
           }
           str="";
       }
       i++;
   }
   if(str.size()>=1){
       mp[str]++;
   }
   int size=mp.size();
   cout<<size;
    return 0;
}





//-----------------------set+stringstream meathod--------------------------






//  unordered_set<string>st;
//    stringstream ss(s);
//    string bark;
//    while(getline(ss,bark,'.')){
//        if(bark.size()>=1){
//            st.insert(bark);
//        }
//    }
//    int size=bark.size();
//    cout<<size;