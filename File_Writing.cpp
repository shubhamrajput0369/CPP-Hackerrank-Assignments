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
        cin>>c;
    }
 
   cout<<"Data written in file successfully";
 
    of.close();

    ifstream ifs("File.txt",ios::in);

    cout<<"Data is :-";
 
   while(ifs)
    {
        c = ifs.get();
        if(c!='#')
 
