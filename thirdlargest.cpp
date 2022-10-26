#include<bits/stdc++.h>
using namespace std;
int thirdlargest(int arr[],int n){
   if(n<3){
    cout<<" Array size is less than 3  ";
    return 0;
   }
    int first=arr[0];
    int second=INT_MIN;
    int third=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>first){
            third=second;
            second=first;
            first=arr[i];
        }
        else if(arr[i]>second){
            third=second;
            second=arr[i];
        }
        else if(arr[i]>third){
            third=arr[i];
        }
    }
    cout<<"Third largest Element is "<<third;
    
}
int main(){
    int arr[]={12,1,67,89,87};
    int n=sizeof(arr)/sizeof(arr[0]);
    thirdlargest(arr,n);
    return 0;
}