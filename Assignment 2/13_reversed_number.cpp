#include<iostream>
using namespace std;

int main(){
    int remainder, reverseNumber = 0;
    int inputValue;

    cout<<"Enter a number: ";
    cin>>inputValue;

    while(inputValue != 0){
      remainder = inputValue%10;
      reverseNumber = reverseNumber*10+remainder;
      inputValue = inputValue/10;
    }
    cout<<"Reversed Number:"<<reverseNumber;

    return 0;
}






