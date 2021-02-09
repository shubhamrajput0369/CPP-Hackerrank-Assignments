//Author: Shubham Bhagwansing Rajput
//C++

#include <iostream>
#include <string>
using namespace std;

int main() {
	string a,b;
    char t;
    cin>>a>>b;
    
    cout<<a.size()<<" "<<b.size();
    cout<<"\n"<<a+b;
    t=a[0];
    a[0]=b[0];
    b[0]=t;
    cout<<"\n"<<a<<" "<<b;
    
    return 0;
}

