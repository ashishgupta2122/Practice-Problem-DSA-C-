#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[5] = {12,90,56,10,54};
    cout<<"Array Element"<<endl;
    for(int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<endl;
    }
    cout<<"Ascending Ordrer"<<endl;
    sort(arr,arr+5);
    for(int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}