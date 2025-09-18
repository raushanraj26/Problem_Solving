// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
string str="Move#Hash#to#Front";                 //outout-###MoveHashtoFront
int n=str.size();
int i=n-1;
int idx=n;
while(i>=0){
    if(str[i]!='#'){
        str[--idx]=str[i];
        
    }
    i--;
    
}
idx--;   //qki idx tk element bhra hoga so,decrease krke has fill kr do
while(idx>=0){
    str[idx]='#';
    idx--;
}
cout<<"Ans is- "<<str;
    return 0;
}