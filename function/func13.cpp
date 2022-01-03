#include <iostream>
#include <cmath>
using namespace std;
int d_to_hexd(int num)
{
    int quo = num;
    int rem;
    char ch;

    int hexd = 0;
    int temp = 0;
    while (quo > 0)
    {
        rem = quo % 16;
       /*  if (rem >= 10 && rem <= 15)
        {
            ch=(char)(rem - 10 + 65);

            hexd += ch * pow(10, temp);
        } */
         if (rem>=0 && rem<=9)
        {
            hexd += (rem) * pow(10, temp);
           
        }
        

        quo = quo / 16;
        temp++;
    }
     cout<<hexd;

    return 0;
}

int main()
{
    int n;

    cin >> n;

    cout << d_to_hexd(n);

    return 0;
}