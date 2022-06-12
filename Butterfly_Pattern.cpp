#include<iostream>
using namespace std;
int main()
{
    int n = 5;

    //Outer Loop(Row Ke Liye)
    for(int i = 1; i <= n; i++)
    {
        //Inner loop(Col Ke Liye)
        for(int j = 1; j <= i; j++)
        {
            cout<<"*";
        }
        //Space Print Karne ke liye
        int space = 2*(n - i);
        for(int j = 1; j <= space; j++)
        {
            cout<<" ";
        }

        //2nd Part
        for(int j = 1; j <= i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    //lower side print
    for(int i = n; i >= 1; --i)
    {
        //Inner loop(Col Ke Liye)
        for(int j = 1; j <= i; j++)
        {
            cout<<"*";
        }
        //Space Print Karne ke liye
        int space = 2*(n - 1);
        for(int j = 1; j <= space; j++)
        {
            cout<<" ";
        }
        for(int j = 1; j <= i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}