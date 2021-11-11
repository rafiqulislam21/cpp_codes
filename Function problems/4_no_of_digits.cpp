#include<iostream>
using namespace std;

int digitCounter(int num){
    int counter = 0,rem;
    if(num == 0){
        return 1;
    }else{
        for(int i=num; i>0; i=i/10){
            rem = (i%10);
            counter++;
        }
    }

    return counter;
}

int main() {

    int n;
    cout<<"Enter a number: ";
    cin>>n;

    cout<<"Total Digits = "<<digitCounter(n);

    return 0;
}


