#include<iostream>
#include<algorithm>
using namespace std;
int kthmaximum(int arr[],int n,int k){
sort(arr,arr+n);
return arr[n-k];
}
int main(){
    int n;
    cin>>n;
    int k=3;
    int arr[n];
    for(int i=1;i<n;i++){
        cin>>arr[i];
    }
    cout<<"kth maximum element "<<kthmaximum(arr,n,k);
}