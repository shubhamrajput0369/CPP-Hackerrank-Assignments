#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N,tmp,Q;
    vector<int>v;
    cin>>N;

    for(int i=0;i<N;i++){
        cin>>tmp;
        v.push_back(tmp);
    }
    cin>>Q;
    for(int i=0;i<Q;i++){
        cin>>tmp;
        
        vector<int>::iterator low = lower_bound(v.begin(), v.end(), tmp);
        
        if(v[low-v.begin()]==tmp)
        cout<<"Yes "<<low-v.begin()+1<<"\n";
        else
        cout<<"No "<<low-v.begin()+1<<"\n";    
    }
    return 0;
}

