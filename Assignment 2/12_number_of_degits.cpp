#include<iostream>
using namespace std;

int main(){
    int totalDigit = 0;
    int inputValue;
    cout<<"Enter a number: ";
    cin>>inputValue;

    while(inputValue != 0){
        inputValue = inputValue/10;
        totalDigit++;
    }
    cout<<"Number of digits:"<<totalDigit;

    return 0;
}





