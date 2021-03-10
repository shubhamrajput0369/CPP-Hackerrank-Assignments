//Author: Shubham Bhagwansing Rajput
//C++

#include<iostream>
#include<fstream>

using namespace std;

int main()
{
 
   char c;
   ofstream of("File.txt",ios::out);
 

    cout<<"Enter The Data in The File(Enter '#' to Stop Writing in The File)";
    cin>>c;

    while(c!='#')
    {
        of<<c;
        cin>>c
