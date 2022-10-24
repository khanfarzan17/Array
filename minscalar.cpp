#include<iostream>
using namespace std;
int main(){
   int n;
   cin>>n;
   int arr1[n];
   for(int i=0;i<n;i++){
    cin>>arr1[i];
   }
   int arr2[n];
   for(int i=0;i<n;i++){
    cin>>arr2[i];
   }
    for(int i=0;i<n;i++){
       for(int j=i+1;j<n;j++){
        if(arr1[i]>arr2[j]){
            int temp=arr1[i];
            arr1[i]=arr1[j];
            arr1[j]=temp;
        }

       }
    }
    for(int i=0;i<n;i++){
       for(int j=i+1;j<n;j++){
        if(arr2[i]<arr2[j]){
            int temp=arr2[i];
            arr2[i]=arr2[j];
            arr2[j]=temp;
        }

       }
    }
    int product=0;
    for(int i=0;i<n;i++){
        product += arr1[i]*arr2[i];
        
    }
    cout<<product;
    
}