#include <iostream>
using namespace std;


//
//      B U B B L E         S O R T
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

    /* int temp;
    for (int k = 0; k < n-1; k++)
    {
      for (int i = 0; i < n - 1; i++)
    {
        int j=i+1;
        
            if (arr[j] < arr[i])
            {
                temp= arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        
    }
    }
 */
    int counter =1;
    int temp;
     while(counter<n)
    {
      for (int i = 0; i < n - counter; i++)
    {
        
        
            if (arr[i+1] < arr[i])
            {
                temp= arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        
    }
    counter++;
    }
    
    
    cout << "arrays after sorting: " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}