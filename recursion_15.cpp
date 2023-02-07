//Geometric Sum Given k, find the geometric sum 
#include<iostream>
#include<math.h>
using namespace std;
int gp(int k){
    double g = 1/(double)pow(2, k);
    if (k==0){
        return 1;
    }
    float answer = g+gp(k-1);
    return answer;

}
int main()
{
int k;
cin>>k;
cout<<gp(k)<<endl;
    return 0;
}