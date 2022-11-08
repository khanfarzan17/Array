#include<bits/stdc++.h>
using namespace std;
int maxprofit(int arr[],int n){
    int profit=0;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[i-1]){
            profit=profit+(arr[i]-arr[i-1]);
        }
    }
    return profit;
}
int main(){
    int arr[]={10,22,5,75,65,80};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Maximum profit can be "<<maxprofit(arr,n);


}