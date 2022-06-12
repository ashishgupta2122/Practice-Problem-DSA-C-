#include<iostream>
using namespace std;
int main()
{
    int n = 5;
    int number = 1;

    //Outer Loop(Row Ke Liye)
    for(int i = 1; i <= n; i++)
    {
        //Inner Loop(Col Ke Liye)
        for(int j = 1; j <= i; j++)
        {
            cout<<number<<" ";
            number++;
        }
        cout<<endl;
    }
    return 0;
}