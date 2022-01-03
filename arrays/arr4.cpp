#include <iostream>
using namespace std;

//
//      I N S E R T I O N         S O R T
//
//
//
int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << endl;

    int temp;
    for (int i = 1; i < n; i++)
    {
        temp = arr[i];
        int j = i - 1;
        /* for (j=i-1; j >= 0; j--)
        {
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }
        } */

        while (arr[j] > temp && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
    cout << "arrays after sorting: " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}