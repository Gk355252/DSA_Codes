//Given two integers M & N, calculate and return their multiplication using recursion. You can only use subtraction and addition for your calculation. No other operators are allowed.
#include<iostream>
using namespace std;
int multi(int m, int n){
    if(m==0||n==0){
        return 0;
    }
    int answer = multi(m,n-1);
    int final = m+answer;
    return final;
}
int main()
{
int m , n;
cin>>m>>n;
multi(m,n);
cout<<multi(m,n)<<endl;
    return 0;
}