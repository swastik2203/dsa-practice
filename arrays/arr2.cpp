#include <iostream>
using namespace std;




//
//      S E L E C T I O N         S O R T
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
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                temp= arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout << "arrays after sorting: " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}