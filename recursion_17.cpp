//calculate length of string
#include<iostream>
using namespace std;
int length (char s[]){
    if (s[0]=='\0'){
        return 0;
    }
    int smallstring = length(s+1);
    return 1+smallstring;
}
int main()
{
 char str[100];
 cin>>str;
 int l = length(str);
 cout<<l<<endl;
    return 0;
    
}