#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++) {
       cin>>arr[i];
    }       
    
    int n1,n2;
    cout<<"enter the no. to be checked and in how many segments :"<<endl;
    cin>>n1>>n2;
    int count=0,temp=0;
    
    while(n2!=n) {
        
        for(int i=temp;i<n2;i++){
            if(arr[i]==n1){
                count++;
                break;
            }
            else
            {
                count=0;
                
            }

        }
        temp=n2+1;
        n2=n2+3;
    
    
    }
    if (count>0)
    {
        cout<<"element found in every segment";
    }
    else
    {
         cout<<"element not found in every segment";
    }
    
    

    
    
    
	
	return 0;
}