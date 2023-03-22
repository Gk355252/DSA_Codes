//print keypad combinations approach using include and execlude method
#include<iostream>
using namespace std;
string printKeypad(int d){
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
void keypad (int input, string output){
    if (input==0){
        cout<<output<<endl;
        return;
    }
   
   int lastno = input%10;
    int smallno = input/10;
    string optionforlastdigit = printKeypad(lastno);
    
    for (int i=0;i<optionforlastdigit.length();i++){


keypad(smallno,optionforlastdigit[i]+output);

    }

}

int main()
{
int input;
cin>>input;
string output = "";
keypad(input,output);
    return 0;
}