#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,2,6,6,6,6,7,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=4;
    int x=n/k;
    sort(arr,arr+n);
    for(int i=0;i<n;){
        int count=1;
        while((i+1)<n && arr[i]==arr[i+1]){
            count++;
            i++;
            
        }

        if(count>x){
            cout<<arr[i]<<" ";
        }
        i++;
        
    }
}