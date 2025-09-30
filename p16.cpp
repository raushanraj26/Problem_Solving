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
    int n,p,q;
    cin>>n>>p>>q;
    int bus=n/80;
    int shulter=(n-bus*80)/8;     //  no of rest people/8
    if((n-shulter)%8!=0){
        shulter+=1;
    }
    int cost=0;
    cost += (bus*p*75);
    cost += (shulter*q*75);
    cout<<cost;
    return 0;
}