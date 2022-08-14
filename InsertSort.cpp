#include<iostream>
using namespace std;

//Insert Sort
void InsertSort(int arr[],int n)
{

int key,j;
for(int i=1;i<n;i++)
{
    key=arr[i];
    j=i-1;

    while(j>=0 && arr[j]>key)
    {
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=key;
}

for(int k=0;k<n;k++)
{
    cout<< arr[k]<< " ";
}

}

int main()
{
    int arr[]={-1,4,1,60,4,-6};
    int n=sizeof(arr)/sizeof(arr[0]);

    InsertSort(arr,n);
    return 0;
}