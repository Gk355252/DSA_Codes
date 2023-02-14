//string
#include<iostream>
using namespace std;
int main()
{
    //dyanmically alocation
    string* sp = new string;
    *sp = "def";
     cout<<sp<<endl;
     cout<<*sp<<endl;
     //getline function - to use space operator
     string p;
     getline(cin,p);
     cout<<p<<endl;
     //use of size , substr function, sum of two string
string s = "abc";
cin>>s;
cout<<s[0];
string s1 = "hello";
cout<<s+" "+s1<<endl;
cout<<s.size()<<endl;
cout<<s.substr(3,3)<<endl;
return 0;
}