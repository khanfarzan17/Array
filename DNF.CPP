#include<iostream>
using namespace std;
void swap(int arr[],int i ,int j){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
void dnfsort(int arr[],int n){
    int low=0;
    int mid=0;
    int high=n-1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr,low,mid);
            low++;high++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr,mid,high);
            high--;
        }
    }
}
int main(){
    int arr[]={1,0,0,1,0,0};
    dnfsort(arr,6);
    for(int i=1;i<6;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
