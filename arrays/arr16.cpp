#include <iostream>
using namespace std;
void merge(int left[], int right[], int arr[],int l,int r)
{
    int i = 0, j = 0, k = 0;
  
    while (i < l && j < r)
    {
        if (left[i] <= right[j])
        {
            arr[k] = left[i];
            i++;
        }
        else
        {
            arr[k] = right[j];
            j++;
        }

        k++;
    }
    while (i<l)
    {
        arr[k]=left[i];
        i++;
        k++;
    }
    while (j<r)
    {
        arr[k]=right[j];
        j++;
        k++;
    }
    
}

void mergesort(int arr[], int n)
{
    if (n==1)
    {
        return;
    }
    
    int mid = n / 2;
    int l = mid;
    int r = n - mid;
    int left[l];
    int right[r];
    for (int i = 0; i < l; i++)
    {
        left[i] = arr[i];
    }
    for (int i = 0; i < r; i++)
    {
        right[i] = arr[mid + i];
    }
    mergesort(left, l);
    mergesort(right, r);
    merge(left, right, arr,l,r);
    

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
    mergesort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    

    return 0;
}