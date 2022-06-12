#include<iostream>
using namespace std;
int main()
{
    int n = 5;
    //1st Step Space Print Ke liye
    for(int i = n; i >= 1; --i)
    {
        for(int j = 1; j <= i; j++)
        {
            cout<<" ";
        }
        //2nd Solid Ke liye
        for(int j = 1; j <= n; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}