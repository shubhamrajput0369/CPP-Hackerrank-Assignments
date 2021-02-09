//Author: Shubham B. Rajput
//C++
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int i,n,m;
    string num[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    cin>>n>>m;
    for(i=n; i<=m && i<10;i++)
    {
        if(i<10)
        cout<<num[i]<<"\n";
    }
    if(n>9)
    i=n;
    else
	for(int i=n;i<=m;i++)
    {
        if(i>9 && i<=m)
        {
            if(i==10)
            cout<<"even";
            if(i!=10 && i%2==0)
            cout<<"\neven";
            if(i%2!=0)
            cout<<"\nodd"; 
        }
    } 
    return 0;
}
