#include<bits/stdc++.h>
using namespace std;
int findcommon(int arr1[],int arr2[],int arr3[],int n1,int n2,int n3){
    int i=0,j=0,k=0;
    while(i<n1 && j<n2 && k<n3){
        if(arr1[i]==arr2[j] && arr2[j]==arr3[k]){
            cout<<arr1[i]<<" ";
            i++;
            j++;
            k++;
        }
        else if(arr1[i]<arr2[j]){
            i++;
        }
        else if(arr2[j]<arr3[k]){
            j++;
        }
        else{
            k++;
        }

    }

}
int main(){
    int arr1[]={10,20,30};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int  arr2[]={20,40,4};
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    int arr3[]={20};
    int n3=sizeof(arr3)/sizeof(arr3[0]);

    cout<<findcommon(arr1,arr2,arr3,n1,n2,n3);
    return 0;



}