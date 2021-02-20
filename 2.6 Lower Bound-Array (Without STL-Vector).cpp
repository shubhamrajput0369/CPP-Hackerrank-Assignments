//Author: Shubham Bhagwansing Rajput
//C++

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N,Q,Y,e,flag;
    
    cin>>N;
    int v[N];
    for(int i=0;i<N;i++){
    cin>>v[i];
    //v.push_back(e);
    }
    
    cin>>Q;
    
       for(int i=0;i<Q;i++)
            {   
                flag=0;
                cin>>Y;
                
                for(int j=0;j<N;j++)
                {if(Y==v[j]){
                cout<<"Yes "<<j+1<<"\n";
                flag=1;
                break;}
                }
                if(flag==0)
                {
				
                    for(int k=0;k<N;k++)
                    {   Y++;
                        for(int m=0;m<N;m++)
                        {   if(Y==v[m]){
                            cout<<"No "<<m+1<<"\n";
                            flag=1;
                            break;}
                        }
                    if(flag==1)
                    break;
                    }
                    }
            }
    return 0;
}

