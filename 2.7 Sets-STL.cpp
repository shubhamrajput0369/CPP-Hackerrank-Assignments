#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
   set<int>s;
   int Q,tmp,val;
 
   cin>>Q;
   for(int i=0;i<Q;i++)
   {
       cin>>tmp;
       if(tmp==1){
       cin>>val;
       s.insert(val);
       }
       
       if(tmp==2){
       cin>>val;
       s.find(val);
       s.erase(val);
       }
       
       if(tmp==3){
       cin>>val;
       set<int>::iterator itr = s.find(val);
       if(itr==s.end())
       cout<<"No\n";
       else
       cout<<"Yes\n";
       }
   }    
    return 0;
}
