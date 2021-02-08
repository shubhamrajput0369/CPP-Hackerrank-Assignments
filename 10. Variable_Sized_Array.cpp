//Author: Shubham B. Rajput
//C++

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, q, s, r, c;
    int **arr=new int*[s];
    int *a;
    cin>>n>>q;
    
    for(int i=0;i<n;i++)
    {
        cin>>s;
        a=new int[s];
        for(int j=0;j<s;j++)
        {
            cin>>a[j];
        }
        *(arr+i)=a;
    }
    for(int x=0;x<q;x++)
    {
        cin>>r>>c;
        cout<<arr[r][c]<<"\n";
    }
    delete []a;
    delete []arr;
    return 0;
}
