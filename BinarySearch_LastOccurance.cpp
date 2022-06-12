#include<iostream>
using namespace std;
int Last_Occurance(int arr[],int n,int key)
{
    int start = 0;
    int end = n - 1;
    int mid = 0;
    int ans = -1;
    
    //1st Step
    while (start <= end)
    {
        //2nd Step
        mid = start + (end - start)/2;
        if(arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if(key > arr[mid])////Go to Right Part
        {
            start = mid + 1;
        }
        else ////Go to Left Part
        {
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
    
}
int main()
{
    int arr[5] = {1,2,3,3,5};
    int key = 3;
    int index = Last_Occurance(arr,5,key);
    cout<<"Index of Last Occurance "<< index <<endl;

    return 0;
}