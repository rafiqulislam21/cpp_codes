#include<iostream>
using namespace std;

int main(){
    int n, factorial = 1;
    cout<<"Enter a number to calculate factorial: ";
    cin>>n;

    for(int i = 1; i <= n ; i++){
        factorial = factorial*i;
    }

    cout<<n<<"! = "<<factorial;

    return 0;
}
