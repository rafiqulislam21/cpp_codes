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

bool checkPerfect(int num){
    int sum = 0;

    for(int i=1; i<num; i++){
        if(num%i == 0){
            sum = sum+i;
        }
    }

    if(sum == num){
        return true;
    }else{
        return false;
    }
}

bool checkPalindrome(int num){
    int rem, sym = 0;

    for(int i=num; i>0; i=i/10){
        rem = (i%10);
        sym = sym*10+rem;
    }

    if(sym == num){
        return true;
    }else{
        return false;
    }
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

    if(checkPerfect(n)== true){
        cout<<"Perfect"<<endl;
    }else{
        cout<<"Not Perfect"<<endl;
    }

    if(checkPalindrome(n)== true){
        cout<<"Palindrome"<<endl;
    }else{
        cout<<"Not Palindrome"<<endl;
    }

    return 0;
}

