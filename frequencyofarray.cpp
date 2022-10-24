#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<=n;i++){
        cin>>arr[i];
    }
    int ma=0;//decalre int max //
    for(int i=0;i<=n;i++){
        ma=max(ma,arr[i]);

    }
    int freq[ma+1]={0};//decalare frequency including index element value//
    for(int i=0;i<=n;i++){
     freq[arr[i]]++;//incrementing frequency from index value 1//
    }
    for(int i=0;i<=n;i++){
        if(freq[i]!=0){//pinting value which are not having 0 frequency//
            cout<<i<<"->"<<freq[i]<<endl;
    
    }}
}

