#include<iostream>
using namespace std;
int getPeakValue(int arr[],int n)
{
    int start = 0;
    int end = n - 1;
    int mid = 0;

    //1st Step
    while(start < end)
    {
        mid = start + (end - start)/2;
        //2nd Step(Condition)
        if(arr[mid] < arr[mid+1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - mid)/2;
    }
    return start;
}
int main()
{
    int arr[5] = {12,34,56,78,21};
    cout<<"The Maximun Number of Array Element at index  "<<getPeakValue(arr,5)<<endl;

    return 0;
}