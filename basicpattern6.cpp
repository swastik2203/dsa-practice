#include<iostream>
using namespace std;

int main(){

int rows;
cin>>rows;
int k=0;
for (int i = rows; i >=1; i--)
{
     
    for (int j = 1; j <= rows-k; j++)
    {
        cout<<j;
    }
    cout<<"\n";
    k++;
}


    return 0;
}