#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    int currentmin=arr[0];
    for(int i=1;i<=n;i++){
        if(arr[i]<currentmin){
            currentmin=arr[i];
        }
    }
    
        cout<<currentmin<<endl;
    
}