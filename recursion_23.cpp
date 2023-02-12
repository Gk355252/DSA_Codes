//Quick sort
#include<iostream>
using namespace std;
int partition (int a[],int s,int e){
    int pivot = a[s];
    int count =0;
    for (int i=s+1;i<=e;i++){
        if (a[i]<=pivot){
        count++;
        }
    }
    int pivotindex = s+count;
    swap(a[pivotindex],a[s]);
    int i,j;
    i = s;
    j = e;
    while (i<pivotindex && j>pivotindex){
        while (a[i]<=pivot){
            i++;
        }
        while (a[j]>pivot){
            j--;
        }
        if (i<pivotindex && j>pivotindex){
            swap (a[i++],a[j--]);
        }

    }
   /* if (a[i]<a[pivot_index]){
        i++;
    }
    else if (a[j]>a[pivot_index]){
        j--;
    }
    else {
        swap (a[i++],a[j--]);
    }*/
return pivotindex;
}
void quicksort (int a[],int s,int e){
    //base condition
    if (s>=e){
        return;
    }
  
    int c = partition(a,s,e);
    quicksort(a,s,c-1);
    quicksort(a,c+1,e);
    
}
int main()
{
    int n = 7;
int a[7]={5,3,6,4,6,9,3};

quicksort(a,0,n-1);
for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}
    return 0;
}
