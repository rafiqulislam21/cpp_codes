#include<iostream>
using namespace std;

int main(){

    float number1, number2, number3;
    float largestNumber, smallestNumber;

    cout<<"Enter three numbers:"<<endl;
    cin>>number1>>number2>>number3;

//find largest number
    if(number1 >= number2 && number1 >= number3){
        largestNumber = number1;
    }else{
        if(number2 >= number3){
            largestNumber = number2;
        }else{
            largestNumber = number3;
        }
    }

//find smallest number
    if(number1 <= number2 && number1 <= number3){
        smallestNumber = number1;
    }else{
        if(number2 <= number3){
            smallestNumber = number2;
        }else{
            smallestNumber = number3;
        }
    }

    cout<<"Largest:"<<largestNumber<<endl;
    cout<<"Smallest:"<<smallestNumber<<endl;


    return 0;
}
