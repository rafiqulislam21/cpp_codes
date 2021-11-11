#include<iostream>
using namespace std;

int getHcf(int num1, int num2){
    int hcf;

    if(num1 > num2){
        int temp = num2;
        num2 = num1;
        num1 = temp;
    }

    for(int i = 1; i <= num2; i++){
        if(num1%i == 0 && num2%i == 0){
            hcf = i;
        }
    }

    return hcf;
}

int main() {

    int n1, n2;
    cout<<"Enter a number: ";
    cin>>n1;
    cout<<"Enter another number: ";
    cin>>n2;

    cout<<"HCF = "<<getHcf(n1,n2);

    return 0;
}
