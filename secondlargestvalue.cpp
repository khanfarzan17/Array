#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<=n;i++){
        cin>>arr[i];
    }
    int largestvalue=INT8_MIN;
    int secondlargestvalue=INT8_MIN;
    for(int i=0;i<=n;i++){
        if(arr[i]>largestvalue){
            secondlargestvalue=largestvalue;
            largestvalue=arr[i];
            
        }
        else if(arr[i]>secondlargestvalue && arr[i]<largestvalue){
            secondlargestvalue=arr[i];
        }
    }

    for(int i=0;i<=n;i++){
        cout<<secondlargestvalue<<" ";
    }cout<<endl;
return 0;
}