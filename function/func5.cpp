#include <iostream>
#include <cmath>
using namespace std;
int fact(int num)
{

    int fact = 1;
    int ncr;
    while (num > 0)
    {
        fact = fact * (num);
        num--;
    }

    return fact;
}

void pas(int num)
{
    int a;

    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            a = fact(i) / (fact(i - j) * fact(j));
            cout << a << " ";
        }
        cout << "\n";
    }

    return;
}

int main()
{
    int n;

    cin >> n;

    pas(n);

    return 0;
}