#include<iostream>
using namespace std;
int BinarySearch(int arr[],int n,int key)
{
    int start = 0;
    int end = n - 1;
    int mid = 0;

    //1st step
    while(start <= end)
    {
        //2nd Step
        mid = start + (end - mid)/2;
        if(key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        //Update Value
        mid = start + (end - start)/2;
    }
    return -1;
}
int main()
{
    int arr[5] = {3,5,9,13,27};
    int key = 13;
    int index = BinarySearch(arr,5,key);
    if(index = -1)
    {
        cout<<"Key is not Available in Array"<<endl;
    }
    else
    {
        cout<<"Key is Available in Array at index "<<endl;
    }

    return 0;
}