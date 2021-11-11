#include<iostream>
#include<cstdlib>
using namespace std;

bool  isPrime(int num){
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

    int n, primeCount = 0;

    cout<<"Enter array size: ";
    cin>>n;

    int arr[n];

    for(int i = 0; i < n; i++){
        arr[i] = rand() % 10;
    }

    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
        if(isPrime(arr[i]) == true){
            primeCount++;
        }
    }
    cout<<endl;
    cout<<"Total Prime number: "<<primeCount;

    return 0;
}





