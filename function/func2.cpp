#include<iostream>
#include<math.h>
using namespace std;

int fibo(int num){
    int i=0,j=1,m;


    for (int k = 1; k <= num; k++)
    {
        m=i+j;
        cout<<i;
        i=j;
        j=m;
    }
    
return 0;
}


int main(){
    int n;
    cin>>n;
    fibo(n);





return 0;
}