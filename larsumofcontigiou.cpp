#include<iostream>
using namespace std;
int main(){
    int arr[]={-2,-3,4,-1,-2,1,5,-3};
    int n=sizeof(arr)/sizeof(arr[0]);

    int mx=INT8_MIN;
    for(int i=1;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum=sum+arr[j];
            mx=max(mx,sum);
        }
    }
    cout<<mx<<" ";

}