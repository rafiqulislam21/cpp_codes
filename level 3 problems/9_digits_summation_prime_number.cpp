#include<iostream>
using namespace std;

int main() {
    int num1 = 10, num2 = 1000;
    int lastDigit;
    bool isPrime = true;

    for(int i = num1; i <= num2; i++){
        int sumOfDigit = 0;
        int inputValue = i;
        while(inputValue != 0){
            lastDigit = inputValue%10;
            sumOfDigit = sumOfDigit + lastDigit;
            inputValue = inputValue/10;
        }

        for(int j = 2; j <= sumOfDigit / 2; ++j){
            if(sumOfDigit % j == 0){
                isPrime = false;
                break;
            }else{
                isPrime = true;
            }
        }

        if(isPrime == true){
            cout<<sumOfDigit<<" ";
        }

    }

    return 0;
}





