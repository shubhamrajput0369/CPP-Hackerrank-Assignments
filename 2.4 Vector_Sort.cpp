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
    int n,x;
    
    cin>>n;
    for(int i=0;i<n;i++)
    {   cin>>x;
        v.push_back(x);   
    }
    sort(v.begin(),v.end());
    
    for(auto x:v)
    cout<<x<<" ";
    
    return 0;
}

