#include<bits/stdc++.h>
using namespace std;
int merge(int arr1[],int arr2[],int m,int n){
    for(int i=0;i<m;i++){
        if(arr1[i]>arr2[0]){
            int temp=arr1[i];
            arr1[i]=arr2[0];
            arr2[0]=temp;
            
        }
        int j=0;
        while((j+1<n) && (arr2[j]>arr2[j+1])){
            int temp=arr2[j];
            arr2[j]=arr2[j+1];
            arr2[j+1]=temp;
            j++;
        }
    }
}

int main(){
    int arr1[]={1,2,6,8};
    int m=sizeof(arr1)/sizeof(arr1[0]);

    int arr2[]={3,5,7};
    int n=sizeof(arr2)/sizeof(arr2[0]);

    merge(arr1,arr2,m,n);
     cout<<"\nfirst array after merging  ";
    for(int i=0;i<m;i++){
    
        cout<<arr1[i]<<" ";
    }
    cout<<"\nsecond array after merging  ";
    for(int j=0;j<n;j++){
        cout<<arr2[j]<<" ";
    }
}