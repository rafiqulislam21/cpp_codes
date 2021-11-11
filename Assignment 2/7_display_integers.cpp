#include<iostream>
using namespace std;

int main(){

    int number1, number2;
    cout<<"Enter two number: ";
    cin>>number1>>number2;

    for(number1; number1 <= number2; number1++){
        if(number1 == number2){
            cout<<number1;
        }else{
            cout<<number1<<",";
        }
    }
    return 0;
}



