#include<iostream>
using namespace std;

int main(){

int rows=5;
for (int i = 1; i <= rows; i++)
{
      if (i==2||i==3||i==4)
        {
           cout<<"*";  

        } 
    for (int j = 1; j <= 4; j++)
    {
        
        
         
        if (i==2||i==3||i==4)
        {
          if (j==2||j==3)
          {
              cout<<" ";
          }
          
            continue;

        } 
        cout<<"*";
    }
     if (i==2||i==3||i==4)
        {
           cout<<"*";  

        } 
    cout<<"\n";
}


    return 0;
}