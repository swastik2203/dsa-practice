#include <iostream>
#include <bits/stdc++.h>
//#include <math.c>
using namespace std;
int setbit(int n)
{
    if (n == 0 || n % 2 != 0)
        return 0;

    else
    {
        int count = 0;
        while (n != 0)
        {
            n = n / 2;
            count++;
        }
        return count - 1;
    }
}
bool indices(int n, int m)
{
    if (m > n && (n ^ m) < m)
    {
        return true;
    }
    if (n > m && (n ^ m) < n)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int T;
    cin >> T;
    while (T != 0)
    {
        int N, K;
        cin >> N >> K;
        int arr[N];
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }
        int p, i = 0,nop=0;
        while (arr[N - 1] != 0)
        {
             if(arr[i]%2!=0)
            {
                p = setbit(arr[i]);
                cout<<p<<endl;
                 int m=pow(2, p);
                arr[i] = (arr[i] ^ m);
                if (arr[i]==0)
                {
                    i++;
                }
                nop++;
                
            }
            else if (indices(arr[i], arr[i + 1]))
            {
                if (arr[i] < arr[i + 1])
                {
                    p = setbit(arr[i]);
                }
                else
                {
                    p = setbit(arr[i + 1]);
                }
                cout<<p<<endl;
                int m=pow(2, p);
                arr[i] = (arr[i] ^ m);
                arr[i + 1] = (arr[i + 1] ^ m);
                if (arr[i]==0)
                {
                    i++;
                }
                nop++;
            }
            else
            {
                p = setbit(arr[i]);
                cout<<p<<endl;
                 int m=pow(2, p);
                arr[i] = (arr[i] ^ m);
                if (arr[i]==0)
                {
                    i++;
                }
                nop++;
                
            }
           
            
        }

         cout<<nop<<endl;
         for (int i = 0; i < N; i++)
        {
            cout<<arr[i];
        }

        T--;
    }

    return 0;
}