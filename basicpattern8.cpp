#include<iostream>
using namespace std;

int main(){

int rows;
cin>>rows;
for (int i = 1; i <= rows; i++)
{
    for (int k = 1; k <= rows-i; k++)
    {
    cout<<" ";
    }
    
    for (int j = 1; j <= rows; j++)
    {
        cout<<"*";
    }
    cout<<"\n";
}


    return 0;
}