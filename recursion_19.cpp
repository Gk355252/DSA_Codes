//Replace Character Recursively Given an input string S and two characters c1 and c2, you need to replace every occurrence of character c1 with character c2 in the given string.
#include<iostream>
using namespace std;
void replaceCharacter(char s[],char c1,char c2){
if(s[0]=='\0'){
    return;
}
if (s[0]==c1){
    s[0]=c2;
}
return replaceCharacter(s+1,c1,c2);
    
}
int main()
{
char s[100];
cin>>s;
char c1;
cin>>c1;
char c2;
cin>>c2;
replaceCharacter(s,c1,c2);
cout<<s<<endl;
    return 0;
}