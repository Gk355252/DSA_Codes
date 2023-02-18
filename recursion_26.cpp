//Return Keboard Approach

#include<iostream>
using namespace std;
string getstring(int d){
    if (d == 2){
        return "abc";
    }
    if (d == 3){
        return "def";
    }
    if (d == 4){
        return "ghi";
    }
    if (d == 5){
        return "jkl";
    }
    if (d == 6){
        return "mno";
    }
    if (d == 7){
        return "pqrs";
    }
    if (d == 8){
        return "tuv";
    }
    if (d == 9){
        return "wxyz";
    }
    return " ";
}
int keypad(int input,string output[]){
    //base case
    if(input == 0){
        output[0]= "";
        return 1;
    }
    int lastdigit = input%10;
    int smallnumber = input/10;
    int smalloutputsize = keypad(smallnumber,output);
// ab dhekna hai ki last digit ke corresponding kya option availabe hai
string option = getstring (lastdigit);
// option ka length 4 hai tab 3 copy banana hoaga ya length 3 hai to 2 copy banana hoga
for (int i=0;i<option.length()-1;i++){//ek loop laga ke option ke jo jo element aayege usse se baki se multiply kare ge ,loop tab tak chalaye ge jab tak option ke sare element khatam na hojaye
for (int j=0;j<smalloutputsize;j++){
    output[j+(i+1)*smalloutputsize]= output[j];
}
}
int k=0;
for (int i=0;i<option.length();i++){
for (int j=0;j<smalloutputsize;j++){
    output[k] = output[k]+option[i]; 
    k++;
}

}
return smalloutputsize*option.length();
}
int main()
{
    int n;
    cin>>n;
    string output[1000];
    int count = keypad(n,output);
    for(int i =0;i<count;i++){
        cout<<output[i]<<endl;
    }

   // return 0;
}