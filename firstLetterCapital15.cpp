// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    string s="raushan is Learning programming";
    for(int i=0;i<s.size();i++){
        if(i==0 || s[i-1]==' '){
            if(s[i]>='a' && s[i]<='z'){
                s[i]=s[i]-'a'+'A';
            }
        }
    }
cout<<"Ans is.. "<<s;
    return 0;
}