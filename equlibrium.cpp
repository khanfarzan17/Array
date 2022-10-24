#include<iostream>
using namespace std;
int equilibrium(int arr[],int n){
    int sum=0;
    int left_sum=0;
    for(int i=1;i<n;i++){
        sum=sum+arr[i];
        for(int i=1;i<n;i++){
            sum=sum-arr[i];
            if(left_sum==arr[i]){
                return i;
            }
            left_sum=left_sum+arr[i];
        }
        return -1;
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=1;i<n;i++){
        cin>>arr[i];
    }
    cout<<equilibrium(arr,n)<<" ";
}
