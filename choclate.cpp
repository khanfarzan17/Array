#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,3,4,7,9,9,12,56};
    int n=sizeof(arr)/sizeof(arr[0]);
    int m=5;
    int mini=INT_MAX;
    sort(arr,arr+n);
    for(int i=0;i+m-1<n;i++){
        int diff=arr[i+m-1]-arr[i];
        if(diff<mini){
            mini=diff;
        }
    }
    cout<<"the minimum number of difference is "<<mini<<" ";
}