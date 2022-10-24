//maximum element in array//
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
        int arr[n];
        for(int i=0;i<=n;i++){
            cin>>arr[i];
        }

        int currentmax=arr[0];
        for(int i=0;i<=n;i++){
            if(arr[i]>currentmax){
                currentmax=arr[i];
            }

        }
        
            cout<<currentmax<<endl;
        
        return 0;

}