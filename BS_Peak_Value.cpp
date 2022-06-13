#include<iostream>
using namespace std;
int peakValue(int arr[],int n)
{
    int start = 0;
    int end = n - 1;
    int mid;

    //1st Step
    while(start < end)
    {
        mid = start + (end - start)/2;
        //2nd Approtues
        if(arr[mid] < arr[mid+1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        //Update Value
        mid = start + (end - start)/2;
    }
    return start;
}
int main()
{
    int arr[4] = {3,4,5,1};
    cout<<"The Maximum Number of Array "<<endl;

    return 0;
}
