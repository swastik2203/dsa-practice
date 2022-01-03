#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n,r;
    cin>>n;
    int sum=0;
    int q=n;

    while (q>0)
    {
        r=q%10;
        sum+=pow(r,3);
        


        q=q/10;
    }
    if (sum==n)
    {
        cout<<"armstrong num";
    }
    else
    {
        cout<<"not any special";
    }
    
    
    


   

    return 0;
}