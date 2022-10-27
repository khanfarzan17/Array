//nested if//
#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    
    if(x==y){
        cout<<"both are same";
        
    }
    else{
        if(x>y){
            cout<<"x is greater than y";
        }
        else{
            cout<<"y is greater than x";
            
        }
    }
    return 0;
    
}
