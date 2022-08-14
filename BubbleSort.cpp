#include<iostream>
using namespace std;
//Bubble Sort Algorithm
void BubbleSort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]= temp;
            }
        }
    }

    for(int k=0;k<n;k++)
    {
        cout<<arr[k]<<" ";
    }
}

int main()
{
    int arr[]={-1,4,1,60,4,-6};
    int n=sizeof(arr)/sizeof(arr[0]);

    BubbleSort(arr,n);
    return 0;
}