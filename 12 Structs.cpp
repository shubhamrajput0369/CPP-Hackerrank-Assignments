//Author: Shubham Bhagwansing Rajput
//C++

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct Student{
    int age;
    char first_name[51];
    char last_name[51];
    int standard;
};

int main() {
    Student st;
    int flag1;
    int flag2;
    
    cin >> st.age >> st.first_name >> st.last_name >> st.standard;
    for(int i=0;st.first_name[i]!='\0';i++)
    if(st.first_name[i]>='a' || st.first_name[i]<='b')
    flag1 = 1; 
    
    for(int i=0;st.last_name[i]!='\0';i++)
    if(st.last_name[i]>='a' || st.last_name[i]<='b') 
    flag2 = 1;

    if(flag1==1 && flag2==1)
    cout << st.age << " " << st.first_name << " " << st.last_name << " " << st.standard;
    
    return 0;
}
