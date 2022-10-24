#include<iostream>
#include<algorithm>
using namespace std;
void ascdec(int arr[],int n){
    sort(arr,arr+n);
    for(int i=0;i<=n/2;i++){
        cout<<arr[i]<<" ";
    }
    for(int j=n-1;j>=n/2;j--){
        cout<<arr[j]<<" ";
    }


}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<=n;i++){
        cin>>arr[i];
    }
    ascdec(arr,n);
    return 0;
}