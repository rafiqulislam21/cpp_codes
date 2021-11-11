#include<iostream>
using namespace std;

int reverseNumber(int num){
    int rem, sym = 0;
    if(num == 0){
        return 0;
    }else{
        for(int i=num; i>0; i=i/10){
            rem = (i%10);
            sym = sym*10+rem;
        }
    }

    return sym;
}

int main() {

    int n;
    cout<<"Enter a number: ";
    cin>>n;

    cout<<"Reversed number = "<<reverseNumber(n);

    return 0;
}
