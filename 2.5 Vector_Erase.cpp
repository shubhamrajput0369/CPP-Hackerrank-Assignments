//Author: Shubham Bhagwansing Rajput
//C++

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



int main() {
    vector<int>v;
    int n,x,t,a,b;
    
    cin>>n;
    for(int i=0;i<n;i++)
    {    cin>>t;
        v.push_back(t);
    }
    
    /*for(auto t:v)
    cout<<t<<" ";*/
    
    cin>>x>>a>>b;
    v.erase(v.begin()+(x-1));
    
    

    v.erase(v.begin()+(a-1),v.begin()+(b-1));
    cout<<v.size()<<"\n";
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
    //v.erase()   
    /*for(auto e:v)
    cout<<x<<" ";*/    
    
    return 0;
}

