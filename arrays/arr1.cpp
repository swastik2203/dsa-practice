#include <iostream>
using namespace std;


int linearsearch(int arr[],int n,int key){

    for (int i = 0; i < n; i++)
    {
        if (arr[i]==key)
        {
            
            return i;
        }
        
    }
    return 0;
}
int binarysearch(int arr[],int n,int key){
    int s=0;
    int e=n-1; // e=n is also workable
    int mid;

    while (s<=e)
    {
        mid=(s+e)/2;

        if (arr[mid]==key)
        {
            return mid;
        }
        else if (arr[mid]>key)
        {
            e=mid-1;    
        }
        else if (arr[mid]<key)
        {
            s=mid+1;    
        }
        
    }
    

return -1;


}

int main(){
    int n;
    cin>>n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int key;
    cin>>key;

   // cout<<"the index of found number : "<<linearsearch(arr,n,key);
    cout<<"the index of found number : "<<binarysearch(arr,n,key);





    




    return 0;
}