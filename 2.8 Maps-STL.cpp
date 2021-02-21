//Author: Shubham Bhagwansing Rajput
//C++

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    map<string,int>m;
    int Q,qry;
    string str;
    cin>>Q;
    
    for(int i=0, tmp;i<Q;i++)
    {   
        cin>>qry;
        cin>>str;
        if(qry==1)
        {
            cin>>tmp;
            m[str]=tmp+m[str];
        }
        
        if(qry==2)
            m[str]=0;
        
        if(qry==3)    
            cout<<m[str]<<"\n";
    }   
    return 0;
}

