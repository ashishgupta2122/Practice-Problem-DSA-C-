#include<iostream>
using namespace std;
int BinarySearch(int arr[],int n,int key)
{
    int start = 0;
    int end = n - 1;
    int mid = 0;
    int ans = 1;

    //1st step
    while(start <= end)
    {
        //2nd Step
        mid = start + (end - start)/2;
        if(arr[mid] == key)
        {
            ans = mid;
        }
        //Go to Right Part
        if(key > arr[mid])
        {
            start = mid + 1;
        }
        //Go to Left Part
        else
        {
            end = mid - 1;
        }
        //Update Value
        mid = start + (end - start)/2;
    }
    return ans;
}
int main()
{
    int arr[5] = {3,12,9,13,27};
    int key = 9;
    int index = BinarySearch(arr,5,key);
    cout<<"Index of First Occurance is "<< index <<endl;

    return 0;
}