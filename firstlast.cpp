#include<iostream>
using namespace std;
int main(){
    int l,f,n;
    int arr[]={1,2,3,4,5};
    n=sizeof(arr)/sizeof(arr[0]);
    f=arr[0];
    l=arr[n-1];
    cout<<f<<endl;
    cout<<l<<endl;
    
}