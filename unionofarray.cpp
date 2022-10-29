#include<iostream>
using namespace std;
void printunion(int arr1[],int arr2[],int n,int m){
    int i=0;
    int j=0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            cout<<arr1[i]<<" ";
            i++;
        }
        else if(arr2[j]<arr1[i]){
            cout<<arr2[j]<<" ";
            j++;
        }
        else{
            cout<<arr1[i]<<" ";
            i++;
            j++;
        }
    }
    while(i<n){
    cout<<arr1[i]<<" ";
    i++;
}
while(j<m){
    cout<<arr2[j]<<" ";
    j++;
}
}


int main(){
    int arr1[]={1,2,3,4,5,90,100};
    int n=sizeof(arr1)/sizeof(arr1[0]);
    int arr2[]={1,2,90,100};
    int m=sizeof(arr2)/sizeof(arr2[0]);
    cout<<"union ";
    printunion(arr1,arr2,n,m);
    return 0;
}