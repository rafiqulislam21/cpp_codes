#include<iostream>
using namespace std;

int main(){
    int num, rem, sum = 0;
    cout<<"Enter a number: ";
    cin>>num;

    for(int i=num; i>0; i=i/10){
        rem = (i%10);
        sum = sum+(rem*rem*rem);
    }

    if(sum == num){
        cout<<"Armstrong number";
    }else{
        cout<<"Not Armstrong number";
    }

    return 0;
}


