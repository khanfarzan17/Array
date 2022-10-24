#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    int s=0;
    int e=n;
    while(s<=e){
        int swap=arr[s];
        arr[s]=arr[e];
        arr[e]=swap;
        s--;
        e++;
    }

    for(int i=0;i<=n;i++){
        cout<<arr[i]<<" ";

    }cout<<endl;

}