#include <iostream>
#include <climits>
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
    
   
    for (int i = 0; i < n/2; i++)
    {
        int j=(n-1)-i;
        int temp;
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;


    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
  
 
    return 0;
}