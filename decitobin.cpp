#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout << "enter the decimal number" << endl;
    int deci;
    cin >> deci;
    int bin = 0;
    int temp = 0;
    int quo = deci, rem;
    while (quo != 0)
    {
        rem = quo % 2;
        bin += rem * pow(10, temp);
        quo = quo / 2;
        temp++;
    }
    cout << bin<<endl;
    int count = 0;

    cout << "enter the binary number" << endl;
    int bia;
    cin >> bia;
    int dec = 0;

    int r, q = bia;
    while (q != 0)
    {
        r = q % 10;
        dec += r * pow(2, count);
        q = q / 10;
        count++;
    }
    cout << dec;

    return 0;
}