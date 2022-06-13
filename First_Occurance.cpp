#include<iostream>
using namespace std;
int firstOccurance(int arr[],int n,int key)
{
    int start = 0;
    int end = n - 1;
    int ans = -1;

    //1st Step
    while(start <= end)
    {
        //2nd Step
        int mid = start + (end - start)/2;
        if(arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        //3rd Step
        else if(key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - mid)/2;
    }
    return ans;
}
int main()
{
    int arr[5] = {1,2,3,3,5};
    cout<<"First Occurance of 3 is  "<< firstOccurance(arr,5,3) <<endl;

    return 0;
}