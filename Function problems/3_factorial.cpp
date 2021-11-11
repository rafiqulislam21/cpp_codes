#include<iostream>
using namespace std;

int factorial(int n){
    int result = 1;

    for(int i = 1; i <= n ; i++){
        result = result*i;
    }

    return result;
}

int main() {

    int n;
    cout<<"Enter a number to calculate factorial: ";
    cin>>n;

    cout<<n<<"! = "<<factorial(n);

    return 0;
}

