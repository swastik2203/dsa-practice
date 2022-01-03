#include <iostream>
using namespace std;

void maxtill_i(int arr[], int n)
{
    int maxi = arr[0];

    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, arr[i]);
        cout << maxi;
    }
}
/* // Prints all subarrays in arr[0..n-1]
void subArray(int arr[], int n)
{
    // Pick starting point
    for (int i=0; i <n; i++)
    {
        // Pick ending point
        for (int j=i; j<n; j++)
        {
            // Print subarray between current starting
            // and ending points
            for (int k=i; k<=j; k++)
                cout << arr[k] << " ";
 
            cout << endl;
        }
    }
} */
int sum_subarray(int arr[],int n )
{
int sum=0;
for (int i = 0; i <n; i++)
{
    for (int j = 0; j <=i; j++)
    {
        int l=j;
        for (int k =n-i; k >0; k--)
        {
        cout<<arr[l]<<endl;
            sum+=arr[l];
            l++;
        }
        
    }
    
}
return sum;
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

    /* cout << "modified array: " << endl;
    maxtill_i(arr, n); */
   // cout<<"sum of subarrays:  "<<endl;
    cout<<sum_subarray(arr,n);

    return 0;
}