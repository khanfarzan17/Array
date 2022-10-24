#include<iostream>
using namespace std;
void printintersection(int arr1[],int arr2[],int n,int m){
    int i=0;
    int j=0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            i++;
        }
        else if(arr2[j]<arr1[i]){
            j++;
        }
        else{
            cout<<arr2[j]<<" ";
            i++;
            j++;
        }
    }
    
}
int main(){
    int arr1[]={1,2,3,4,5,90,78,89,67,677};
    int n=sizeof(arr1)/sizeof(arr1[0]);
    int arr2[]={1,2,3,5};
    int m=sizeof(arr2)/sizeof(arr2[0]);
    cout<<"intersection ";
    printintersection(arr1,arr2,n,m);
    


}