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
    
cout<<fact;

    
return 0;
}


int main(){
    int n;
    cin>>n;
    fact(n);





return 0;
}