
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int mindiff(int arr[],int n,int k){
    sort(arr,arr+n);
    int ans=arr[n-1]-arr[0];
    int tempmax=arr[n-1];
    int tempmin=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]-k<0){
            continue;
        }
        tempmin=min(arr[0]+k,arr[i]-k);
        tempmax=max(arr[i-1]+k,arr[n-1]-k);
        ans=min(ans,tempmax-tempmin);

    }
    return ans;


}
int main(){
    int n=6,k=6;
    int arr[]={1,10,14,14,14,15};
    int ans=mindiff(arr,n,k);
    cout<<ans;
}