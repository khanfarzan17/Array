#include<iostream>
using namespace std;
int main(){
    int arr[]={-1,4,7,2};
    int n=sizeof(arr)/sizeof(arr[0]);
  
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum=0;
            for(int k=i;k<=j;k++){
                sum=sum+arr[k];
            }cout<<endl;
            
            cout<<"sum of each subarray is "<<sum<<endl;
        }
    }
}