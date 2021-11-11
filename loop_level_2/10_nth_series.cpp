#include<iostream>
using namespace std;

int main(){

    int n, temp = 0, sum = 0;
    cout<<"Enter n: ";
    cin>>n;

    for(int i = 1; i <= n; i++){
        if(i == n){
            cout<<i+temp<<"=";
        }else{
            cout<<i+temp<<"+";
        }
        sum = sum+i+temp;
        temp = temp+i-1;
    }
    cout<<sum;
    return 0;
}
