#include <iostream>
using namespace std;
int binarysearch(int arr[],int size,int key)
{
    int s =0;
    int e = size-1;
    int mid = s+(e-s)/2;
   int  i=0;
    while(s<=e)
    {
        if(arr[mid] == key)
        {
        return mid;
        }
        else if (arr[mid]>key)
        {
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
        mid = s+(e-s)/2;
    }
    return -1;
}
int main()
{
    int arr[100];
    int size,key;
    cin>>size;
    cin>>key;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int index = binarysearch(arr,size,key);
    cout<<"Element found at : "<<index+1;
}