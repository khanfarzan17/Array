#include<iostream>
using namespace std;
int disjoint(int arr1[],int arr2[],int n,int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr1[i]==arr2[j]){
                return 0;
            }
        }
    }
    return 1;
}
int main(){
    int n;
    cin>>n;
    int arr1[n];
    for(int i=0;i<=n;i++){
        cin>>arr1[i];
    }
    int m;
    cin>>m;
    int arr2[m];
 for(int i=0;i<n;i++){
    cin>>arr2[i];
 }
 if(disjoint(arr1,arr2,n,m)){
    cout<<"yes";//it tells it is a dijoint array//
 }
 else{
    cout<<"no";//no means it tells it is not a disjoint set//
 }
 



}