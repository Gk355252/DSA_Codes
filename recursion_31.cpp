//binary search using recursion
#include<iostream>
using namespace std;
int binarySearch (int input[],int n ,int x){
if(n<=1){
    return 1;
}

else {
   int mid = n/2;
if (x == input[mid]){
    return mid;
    
}
else if (x>input[mid]){
    return binarySearch(input,mid+1,n);
}
else {
    return binarySearch(input,0,mid-1);
}
/*for (int i=0;i<n;i++){
    if (input[i]!= x){
        return -1;
    }
}*/
}
return -1;
}
int main()
{
int n;
cin>>n;
int input[n];

for (int i=0;i<n;i++){
    cin>>input[i];
}
int x;
cin>>x;
int index = binarySearch(input,n,x);
 
    cout<<index<<endl;
    return 0;
}