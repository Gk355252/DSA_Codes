//Given an integer N, count and return the number of zeros that are present in the given integer using recursion.
#include<iostream>
using namespace std;
int countZeroes(int n){
    if(n==0){
        return 1;
    }
    if(n<10){
        return 0;
    }
    int small = countZeroes(n/10);
    if (n%10==0){
        return small+1;
    }
    
    else{
        return small;
    }
}
int main() 
{
int n;
cin>>n;
count(n);
cout<<count(n)<<endl;
    return 0;
}