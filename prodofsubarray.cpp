#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int result=arr[0];
    for(int i=0;i<n;i++){
        int mul=arr[i];
        for(int j=i+1;j<n;j++){
            if(result>mul){
                result=mul;
                mul=mul*arr[j];
            }
        }
        if(mul>result){
            result=mul;
        }
        cout<<result;
    }
    

}