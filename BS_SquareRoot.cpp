#include<iostream>
using namespace std;
long long getSqrt(int n)
{
    int start = 0;
    int end = n;
    long long int ans = -1;

    while(start <= end)
    {
        int mid = start + (end - mid)/2;
        long long int square = mid * mid;

        if(square == n)
        {
            return mid;
        }
        //Ho sakta hai es liye Store kiea value
        else if(square < n)
        {
            ans = mid;
            start = mid + 1;
        }
        else //Jab Largest Hoga uske liye
        {
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}
double morePrecision(int n,int precision,int tempsol)
{
    double factor = 1;
    double ans = tempsol;

    for(int i = 0; i < precision; i++)
    {
        factor = factor/10;
        for(double j = ans; j*j<n; j =j+factor)
        ans = j;
    }
    return ans;
}
int main()
{
    int n;
    cout<<"Enter The Number"<<endl;
    cin>>n;

    int tempSqrt = getSqrt(n);
    cout<<"The Sqrt Of Number "<< morePrecision(n,3,tempSqrt)<<endl;

    return 0;
    
    
}