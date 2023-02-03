//Write a recursive function that returns the sum of the digits of a given integer.
#include<iostream>
using namespace std;
int sumOfDigits(int n) {
    if (n==0){
        return 0;
    }
    if(n<10) {
        return n;

    }
    int answer = sumOfDigits(n/10);
    int a = n%10;
    int final = a+answer;
    return final;

}
int main()
{
int n;
cin>>n;
cout<<sumOfDigits(n);
    return 0;
}