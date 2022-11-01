#include<bits/stdc++.h>
using namespace std;
int trappedwater(int arr[],int n){
    int res=0;
    for(int i=0;i<n-1;i++){
        
       int  left=arr[i];
        for(int j=0;j<n;j++){
         left=max(left,arr[j]);
        }
        int right=arr[i];
        for(int j=i+1;j<n;j++){
            right=max(right,arr[j]);
        }

        res=res+min(left,right)-arr[i];


    }
}
int main(){
    int arr[]={3,1,2,4,0,1,3,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<" the trapped water is "<<trappedwater(arr,n);
    return 0;
}