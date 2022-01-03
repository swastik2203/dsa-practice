#include<iostream>
using namespace std;

int main(){

int rows;
int i;
cin>>rows;
for ( i = 1; i <= rows; i++)
{
    for (int j = 1; j <= i; j++)
    {
        cout<<"*";
    }
    
    /*  for (int k = 1; k <=rows-i; k++)
    {
        cout<<" ";
    } */
    for (int p = 1; p <= 2*rows-2*i; p++)
    {
        cout<<" ";
    }
    for (int q = 1; q <= i; q++)
    {
        cout<<"*";
    }

    

    cout<<"\n";
}
int o=1;
for (int k = rows; k >=1; k--)
{
    for (int p = 1; p <= k; p++)
    {
        cout<<"*";
    }
    /* for (int j = 2*o; j >2 ; j--)
    {
        cout<<" ";
    
    } */
    for (int p = 1; p <= 2*rows-2*k; p++)
    {
        cout<<" ";
    }
    for (int m = 1;m <=k; m++)  {
        cout<<"*";
    }
    o++;
    
    cout<<"\n";
    
}



    return 0;
}