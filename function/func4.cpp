#include<iostream>
#include<math.h>
using namespace std;

int fact(int num){
    
    int fact=1;
    while (num>0)
    {
        fact=fact*(num);
        num--;
    }
    


    
return fact;
}


int main(){
    int n;
    int r;
    int ncr;
    cin>>n>>r;
    

    ncr=fact(n)/(fact(n-r)*fact(r));

    cout<<ncr;
    





return 0;
}