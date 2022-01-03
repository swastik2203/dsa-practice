#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    int maxi = arr[0]; //we can also use int max=INT_MIN;
    int mini = arr[0]; //int min=INT_MAX;      include<climits>
    int sum = 0;
    cout << "enter the num you want to search"<<endl;
    int n1;
    cin >> n1;

    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, arr[i]);
        mini = min(mini, arr[i]);
        sum += arr[i];

        if (arr[i] == n1)
        {
            cout << "found"<<endl;
            
        }

        /*  if (arr[i] > max)
        {
            max = arr[i];   
        }
        if (arr[i] < min)
        {
            max = arr[i];
        } */
    }
    cout << maxi << endl;
    cout << mini << endl;
    cout << sum << endl;

    return 0;
}