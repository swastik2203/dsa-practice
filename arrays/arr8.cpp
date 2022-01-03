#include <iostream>
#include <climits>
using namespace std;

 void first_repeating(int arr[], int n)
{
   
    for (int i = 0; i < n; i++)
    {
        int count=0;
        for (int j = i+1; j <n; j++)
        {
            if (arr[j]==arr[i])
            {
                count++;
                
            }
            
            
        }
        if (count>0)
        {
        cout<<arr[i];
        break;
        }
        
        
    }
    


    return ;
}

int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
   
    first_repeating(arr, n);

    return 0;
}