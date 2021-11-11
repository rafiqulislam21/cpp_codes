#include<iostream>
#include<cstdlib>
#include<ctime>
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
    int r1 = 4, c1 = 3, totalPrime = 0;
    int A[r1][c1];
    srand(time(0));
    //A
    for(int i = 0; i < r1; i++){
        for(int j = 0; j < c1; j++){
            A[i][j] = rand() % 10;
        }
    }
    cout<<"A = "<<endl;
    for(int i = 0; i < r1; i++){
        for(int j = 0; j < c1; j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    for(int i = 0; i < r1; i++){
        for(int j = 0; j < c1; j++){
            if(isPrime(A[i][j]) == true){
                totalPrime++;
            }
        }
    }

    cout<<"Total prime number: "<<totalPrime<<endl;

    return 0;
}



