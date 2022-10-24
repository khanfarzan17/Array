#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<=n;i++){
        cin>>arr[i];
    }
    int max=INT8_MAX;
    for(int i=0;i<=n;i++){
        int sum=0;
        for(int j=0;j<=n;j++){
            int x=arr[i]-arr[j];
        
        if(x<0){
            sum=sum+(-x);
        }
        else{
            sum=sum+x;
        }
        }
        if(sum<max){
            max=sum;

        }
        

    }
    cout<<"the sum of maximum absolute difference is "<<max<<" ";

}