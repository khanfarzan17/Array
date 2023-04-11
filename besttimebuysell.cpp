#include<iostream>
using namespace std;
int main(){
   
    int arr[]={23, 56, 89, 90 };
     int n=sizeof(arr)/sizeof(arr[1]);

    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=n-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
           
        }
         cout<<arr[i]<<" ";
       
    }

}
