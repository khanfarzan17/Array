#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int even_count=0,odd_count=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            even_count++;
        }
        else{
            odd_count++;
        }
    }
    cout<<"even element"<<even_count<<"\n odd element"<<odd_count<<" ";
}
