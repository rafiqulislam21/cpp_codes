#include<iostream>
using namespace std;

int getLcm(int num1, int num2){
    int lcm;

    if(num1 > num2){
        lcm = num1;
    }else{
        lcm = num2;
    }

    while(true){
        if(lcm%num1 == 0 && lcm%num2 == 0){
           return lcm;
           break;
        }else{
            lcm++;
        }
    }

    return lcm;
}

int main() {

    int n1, n2;
    cout<<"Enter a number: ";
    cin>>n1;
    cout<<"Enter another number: ";
    cin>>n2;

    cout<<"LCM = "<<getLcm(n1,n2);

    return 0;
}

