//Return Subsequences of a String

#include<iostream>
#include<math.h>
using namespace std;
int subs(string input , string output[]){
    //base case 
    if(index >=input.length()){
        return 1;
    }
    string smallstring = input.substr(1);
    int smalloutputsize = subs(smallstring,output);
    for (int i=0;i<smalloutputsize;i++){
        output[i+smalloutputsize]= input[0]+output[i];
       
    }
    return 2*smalloutputsize;
}
int main()
{
string input;
cin>>input;
string* output = new string [1000];
int count = subs (input,output);
for (int i=0;i<count;i++){
cout<<output[i]<<endl;

}
    return 0;
}