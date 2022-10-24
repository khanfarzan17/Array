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
    int currentmin=arr[0];
    for(int i=0;i<=n;i++){
        if(arr[i]>currentmax){

            currentmax=arr[i];
        }
        else if (arr[i]<currentmin)
        {
            currentmin=arr[i];
        }
    }
    for(int i=0;i<=n;i++){
        cout<<currentmax<<endl;
        cout<<currentmin<<endl;

    }
    return 0;
}