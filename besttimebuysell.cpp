#include<iostream>
using namespace std;
int main(){
    int arr[]={7,1,5,3,6,4};
    int n=sizeof(arr)/sizeof(arr[0]);
     
    int currentprice=INT8_MAX;
    int profit=0;
    for(int i=0;i<n;i++){
        if(arr[i]<currentprice){
            currentprice=arr[i];
        }
        else if(arr[i]-currentprice>profit){
            profit=arr[i]-currentprice;
        }
    }
    cout<<profit<<" ";

}