#include<iostream>
using namespace std;

int main(){

    int number, sum = 0;
    float average = 0;
    cout<<"Enter ten number: ";

    for(int i = 1; i <= 10; i++){
        cin>>number;
        sum = sum + number;
    }

    average = (float)sum/10;

    cout<<"Average: "<<average;
    return 0;
}

