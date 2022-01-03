#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    int n, n1 = 0;
    cin >> n;
    int rem, quo;
    quo = n;
    int temp = 0;
    while (quo != 0)
    {
        temp++;
        quo = quo / 10;            
                           
    }
    temp--;
    quo=n;

    while (quo != 0)
    {
        rem = quo % 10;
        n1 += rem * pow(10, temp);
        quo = quo / 10;
        temp--;
    }
    cout << n1;

    return 0;
}