#include<iostream>
using namespace std;
int main()
{
    int n = 5;

    //Outer Loop(Row ke liye)
    for(int i = n; i>= 1; --i)
    {
        //Inner Loop(Col Ke liye)
        for(int j = 1; j <= i; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}