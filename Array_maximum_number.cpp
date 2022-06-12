#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[5] = {12,34,56,78,11};
    cout<<"Array Element"<<endl;
    for(int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<endl;
    }
    cout<<"The Maximum Number of Array "<<*max_element(arr,arr+5)<<endl;

    return 0;
}