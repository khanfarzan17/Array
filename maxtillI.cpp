#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=1;i<n;i++){
        cin>>arr[i];
    }
    int mx=INT8_MIN;
    for(int i=1;i<n;i++){
        mx=max(mx,arr[i]);
        cout<<mx<<endl;
    }
    return 0;
}