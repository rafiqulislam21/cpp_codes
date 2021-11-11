#include<iostream>
using namespace std;

int sumOfDigit(int num){
    int sum = 0,rem;
    if(num == 0){
        return 0;
    }else{
        for(int i=num; i>0; i=i/10){
            rem = (i%10);
            sum = sum+rem;
        }
    }

    return sum;
}

int main() {

    int n;
    cout<<"Enter a number: ";
    cin>>n;

    cout<<"Sum of Digits = "<<sumOfDigit(n);

    return 0;
}



