#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=1;i<n;i++){
        cin>>arr[i];

    }
    int k=3;
    int temp[k];
    for(int i=1;i<k;i++){
        temp[k]=arr[i];
    }
    int x=k;
    for(int i=1;x<n;i++){
        arr[i]=arr[x++];
    }
    x=0;
    for(int i=n-k;i<n;i++){
        arr[i]=temp[x++];
    }
    for(int i=1;i<n;i++){
        cout<<arr[i]<<" ";
    }
}