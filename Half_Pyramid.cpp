#include<iostream>
using namespace std;
int main()
{
    int n = 5;

    //Inner Loop(Row Ke Liye)
    for(int i = 1; i <= n; i++)
    {
        //Outer Loop(Col Ke Liye)
        for (int j = 1; j <= i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }
    return 0;
}