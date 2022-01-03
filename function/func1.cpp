#include <iostream>
#include <cmath>
using namespace std;

void prime(int a)
{

    int temp,i;
    for (i = 2; i <a; i++)
    {
        if (a % i == 0)
        {
            
            break;
        }
        
        
        
         
    }
    if (i == a)
    {
        cout << i << " ";
    }
   
}

int main()
{
    int a, b;
    cin >> a >> b;

    for (int i = a; i <= b; i++)
    {
        prime(i);
    }

    return 0;
}