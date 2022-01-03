#include<iostream>
using namespace std;

int main(){

int rows;
cin>>rows;
for (int i = 1; i <= rows; i++)
{
    
    for (int k = 1; k <= rows-i; k++)
    {
    cout<<"  ";
    }
    
    for (int j =i; j >=1; j--)
    {
        cout<<"*"<<" ";
    }
    for (int k = 1; k <=i; k++)
    {
        if (k==1)
        {
            continue;
        }
        
        cout<<"*"<<" ";
    }
    
    cout<<"\n";
}
for (int i = rows; i >=1; i--)
{
    for (int k = i; k < rows; k++)
    {
    cout<<"  ";
    }
    
    for (int j =i; j >=1; j--)
    {
        cout<<"*"<<" ";
    }
    for (int k = 1; k <=i; k++)
    {
        if (k==1)
        {
            continue;
        }
        
        cout<<"*"<<" ";
    }
    
    cout<<"\n";
}


    return 0;
}