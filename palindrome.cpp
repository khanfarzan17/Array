#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<=n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<=n;i++){
        int ans=0;//intialise anser variable with 0//
    
        int temp=arr[i];//temporary variable which store index value of array//
        while(temp>0){//while loop will iterarte untill temp is greater than 0//
            int r=temp%10;//it will store all updated temp value//
            temp=temp/10;
            ans=(ans*10)+r;//print answer//
        }
        

    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        
    }cout<<endl;
}