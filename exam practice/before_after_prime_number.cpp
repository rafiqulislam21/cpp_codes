#include<iostream>
using namespace std;

int chkPrime(int number){
    bool isPrime = true;
    for(int i=2; i<=number/2; i++){
        if(number%i == 0){
            //cout<<i;
            isPrime = false;
            break;
        }
    }

    if(isPrime == true){
        return -1;
    }else{
        return 1;
    }
}

int findNextPrime(int n){
    int nextPrime = n;
    bool found = false;

    while (!found){
        nextPrime++;
        if (chkPrime(nextPrime) == -1)
            found = true;
    }

    return nextPrime;
}

int findPreviousPrime(int n){
    int nextPrime = n;
    bool found = false;

    while (!found){
        nextPrime--;
        if (chkPrime(nextPrime) == -1)
            found = true;
    }

    return nextPrime;
}

int main(){

    int num;
    cout<<"Enter a number: ";
    cin>>num;

    if(chkPrime(num) == -1){
        cout<<num<<" is a prime number";
    }else if(chkPrime(num) == 1){
        cout<<"Previous prime number: "<<findPreviousPrime(num)<<endl;
        cout<<"Next prime number: "<<findNextPrime(num)<<endl;
        //cout<<num<<" is not a prime number";

    }



    return 0;
}

