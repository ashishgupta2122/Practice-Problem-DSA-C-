#include<iostream>
using namespace std;
int main()
{
    int m = 5;
    int n = 5;

    //Outer Loop(Row Ke Liye)
    for(int i = 1; i <= m; i++)
    {
        //Inner Loop(Col Ke Liye)
        for(int j = 1; j <= n; j++)
        {
            if(i == 1 || j == 1 || i == m || j == n)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";//Space Print Karne Ke Liye
            }
        }
        cout<<endl;
    }
    return 0;
}