#include<iostream>
using namespace std;
int minjumps(int arr[],int n){
    int range=arr[0];
    int steps=arr[0];
    int jumps=1;
    for(int i=1;i<n;i++){
       if(arr[i]+i>range){
        range=arr[i]+i;
        steps--;
       }
       if(steps==0){
        jumps++;
        steps=range-i;
       }

    }
    return jumps;


}
int main(){
    int arr[]={1,3,5,8,9,2,6,7,6,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<" the minimum number of jumps "<<minjumps(arr,n);
    return 0;
}