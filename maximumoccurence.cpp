#include<iostream>
using namespace std;
int maximumoccurence(int arr[],int n){
    int maxcount=0;
    int mostfrequent;
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count>maxcount){
            maxcount=count;
            mostfrequent=arr[i];
        }
    }
    return mostfrequent;
}
int main(){
    int arr[]={12,7,9,9,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<maximumoccurence(arr,n);
    return 0;
}