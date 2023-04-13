#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<=n;i++){
        int count=0;
        for(int j=i+1;j<=n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
            else if (count==1){
                cout<<arr[j]<<" ";
            }
        }
        
    }
}
