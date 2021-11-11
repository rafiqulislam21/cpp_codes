#include<iostream>
using namespace std;

int main(){
    int num, sum = 0;
    cout<<"Enter a number: ";
    cin>>num;

    for(int i=1; i<num; i++){
        if(num%i == 0){
            sum = sum+i;
        }
    }

    if(sum == num){
        cout<<"Perfect";
    }else{
        cout<<"Not Perfect";
    }

    return 0;
}

