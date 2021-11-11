#include<iostream>
using namespace std;

int main(){

    int n, posSum = 0, negSum = 0;
    cout<<"Enter n: ";
    cin>>n;

    for(int i = 1; i <= n; i++){
        if(i==n){
            if(i%2!=0){
                negSum = negSum+i;
                cout<<i<<"=";
            }else{
                posSum = posSum+i;
                cout<<-i<<"=";
            }
        }else{
            if(i%2!=0){
                negSum = negSum+i;
                cout<<i<<"";
            }else{
                posSum = posSum+i;
                cout<<-i<<"+";
            }
        }
    }
    cout<<negSum-posSum;
    return 0;
}

