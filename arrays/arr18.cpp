#include <iostream>
using namespace std;
int partition(int arr[], int start, int end)
{
    int pivot = arr[end];
    int p_index = start;
    for (int i = start; i < end; i++)
    {
        if (arr[i] <= pivot)
        {
            swap(arr[i], arr[p_index]);
            p_index++;
        }
    }
    swap(arr[p_index], arr[end]);

    return p_index;
}

void quicksort(int arr[], int start, int end)
{
    if (start < end)
    {
        int p_index = partition(arr, start, end);
        quicksort(arr, start, p_index - 1);
        quicksort(arr, p_index + 1, end);
    }
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

    quicksort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }

    cout<<"greatest element is: "<<arr[n-1]<<endl;
    cout<<"smallest element is: "<<arr[0]<<endl;
    

    return 0;
}