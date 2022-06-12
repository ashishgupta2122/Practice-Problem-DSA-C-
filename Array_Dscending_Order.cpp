#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[5] = {12,34,56,78,54};
    cout<<"Array Element"<<endl;
    for(int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<endl;
    }
    cout<<"Dscending Ordrer"<<endl;
    sort(arr,arr+5,greater<int>());
    for(int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}