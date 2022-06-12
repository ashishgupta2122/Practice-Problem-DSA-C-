#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[5] = {12,34,56,78,64};
    cout<<"Array Elements"<<endl;
    for(int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<endl;
    }
    cout<<"Array Reverse Number"<<endl;
    reverse(arr,arr+5);
    for(int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}