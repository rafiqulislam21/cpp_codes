#include<iostream>
using namespace std;

bool checkPrime(int num){
    bool isPrime = true;

    for(int i=2; i<=num/2; i++){
        if(num%i == 0){
            isPrime = false;
            break;
        }
    }
    return isPrime;
}


int main() {

    int n;
    cout<<"Enter a number: ";
    cin>>n;

    if(checkPrime(n)== true){
        cout<<"Prime"<<endl;
    }else{
        cout<<"Not Prime"<<endl;
    }
    return 0;
}

