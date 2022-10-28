#include<bits/stdc++.h>
using namespace std;
void sort(int arr[],int n){
    sort(arr,arr+n);
}

void rearrange(int arr[],int n){
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            if(i!=j){
                swap(arr[i],arr[j]);
                j++;
            }
        }
    }
}
void displayall(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
int main(){

    int arr[]={-1,-2,33,45,-3,-5,-6,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    rearrange(arr,n);
    displayall(arr,n);
    sort(arr,arr+n);
    return 0;
}