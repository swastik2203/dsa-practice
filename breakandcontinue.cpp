#include <iostream>
using namespace std;

int main()
{
    

    for (int num = 1; num <= 100; num++)
    {
        if (num % 3 == 0)
        {
            continue; //to skip the iteration and go on to next one
        }
       
        cout << num << endl;
        
    }

    return 0;
}