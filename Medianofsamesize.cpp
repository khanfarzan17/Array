#include<bits/stdc++.h>
using namespace std;
int meridian(int arr1[],int arr2[],int m,int n){
    for(int i=0;i<m;i++){
        if(arr1[i]>arr2[0]){
            int temp=arr1[i];
            arr1[i]=arr2[0];
            arr2[0]=temp;
        }
        int j=0;
        while((j+1<n) && arr2[i]>arr2[j+1]) {
          int temp=arr2[i];
          arr2[i]=arr2[j+1];
          arr2[j+1]=temp;
          j++;
        }
    }
    sort(arr1,arr1+m);
    sort(arr2,arr2+n);
    return (arr1[n-1]+arr2[0])/2;
}
int main(){
    int arr1[]={1,12,15,26,38};
    int m=sizeof(arr1)/sizeof(arr1[0]);
    int arr2[]={2,13,17,30,45};
    int n=sizeof(arr2)/sizeof(arr2[0]);
    meridian(arr1,arr2,m,n);

    cout<<meridian(arr1,arr2,m,n)<<" ";

}