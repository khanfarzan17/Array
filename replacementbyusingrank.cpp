#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<=n;i++){
        cin>>arr[i];
    }
    int temp[n];
    for(int i=0;i<n;i++){
        temp[i]=arr[i];
        sort(temp,temp+n);
    }
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            if(temp[j]=arr[i]){
                arr[i]=j+1;
                break;
            }
        }
    }
    for(int i=0;i<=n;i++){
        cout<<arr[i]<<" ";
    }
}