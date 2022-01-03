#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    int rowstart=0;
    int rowend=n-1;
    int colstart=0;
    int colend=m-1;

    while (rowstart<rowend)
    {
        for (int i = 0; i <= colend; i++)
        {
            cin<<arr[rowstart][colend];
        }
        rowstart++;
        for (int i = rowstart; i <= rowend; i++)
        {
             cin<<arr[rowstart][colend];
        }
        
        
        
    }
    






    return 0;
}