#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,4,5,9,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int count=0;
    int i=0;
    int j=n-1;
    while(i<j){
        if(arr[i]==arr[j]){
            i++;
            j--;
        }
        else if(arr[i]<arr[j]){
            arr[i+1]=arr[i]+arr[i+1];
            i++;
            count++;
        }
        else {
            arr[j-1]=arr[j]+arr[j-1];
            j--;
            count++;


        }
    }
    cout<<count;
}