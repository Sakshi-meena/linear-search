#include<iostream>
using namespace std;


int binarysearch(int arr[],int size,int key)
{
    int start=0;
    int end = size-1;

    int mid=(start+end)/2;

    while(start<=end)
    {
        if(arr[mid]==key)
        {
            return mid;
        }

        if(arr[mid]<key)
        {
            end=mid+1;
        }

        else
        {
            start=mid-1;
        }
        int mid=(start+end)/2;
    }
    return -1;
}

int main()
{
    int even[6] = {3,5,9,8,7,4};
    int odd[5]  = {7,1,3,4,9};


    int index=binarysearch(even,6,8);
    cout<<"index of 8 is "<<index<<endl;

    // int index=binarysearch(odd,5,9);
    // cout<<"index of 9 is "<<index<<endl;

} 

