#include<iostream>
using namespace std;
int main()
{
    int n = 5;

    //Outer Loop(Row Ke Liye)
    for(int i = n; i >= 1; --i)
    {
        //Inner Loop(Col Ke Liye)
        for(int j = 1; j <= i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}