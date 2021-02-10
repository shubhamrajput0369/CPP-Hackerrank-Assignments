//Author: Shubham Bhagwansing Rajput
//C++

#include <iostream>
#include <sstream>
using namespace std;

class Student
{
    int a,s;
    string fn, ln;
    
    public:
    void set_age(int av)
    {
        a=av;
    }
    void set_first_name(string fnv)
    {
        fn=fnv;
    }
    void set_last_name(string lnv)
    {
        ln=lnv;
    }
    void set_standard(int sv)
    {
        s=sv;
    }
    
    int get_age()
    {
        return a;
    }
    string get_first_name()
    {
        return fn;
    }
    string get_last_name()
    {
        return ln;
    }
    int get_standard()
    {
        return s;
    }
    string to_strings()
    {
        stringstream ss;
        char ch=',';
        ss>>a>>ch>>fn>>ch>>ln>>ch>>s;
        return to_string(a)+","+fn+","+ln+","+to_string(s);
    }
    
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_strings();
    
    return 0;
}
