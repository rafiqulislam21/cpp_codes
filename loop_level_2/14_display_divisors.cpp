#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    for(int i = 1; i <= n; i++){
        if(i==n){
            if(n%i == 0){
                cout<<i;
            }
        }else{
            if(n%i == 0){
                cout<<i<<",";
            }
        }
    }
}
