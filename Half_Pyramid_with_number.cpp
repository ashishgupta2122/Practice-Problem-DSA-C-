#include<iostream>
using namespace std;
int main()
{
    int n = 5;

    //Outter Loop(Row ke Liye)
    for(int i = 1; i <= n; i++)
    {
        //Inner Loop(Col Ke Liye)
        for(int j = 1; j <= i; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}