#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={-1,23,24,25,26,27,28};
    int n=sizeof(arr)/sizeof(arr[0]);
    int maxsum=INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum=0;
            for(int k=i;k<=j;k++){
                sum=sum+arr[k];
            }
            
            maxsum=max(maxsum,sum);
        }
    }
    cout<<maxsum<<" ";
    
    
}