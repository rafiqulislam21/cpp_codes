#include<iostream>
using namespace std;

int main(){
    int num, rem, sym = 0;
    cout<<"Enter a number: ";
    cin>>num;

    for(int i=num; i>0; i=i/10){
        rem = (i%10);
        sym = sym*10+rem;
    }

    if(sym == num){
        cout<<"Symmetric";
    }else{
        cout<<"Not Symmetric";
    }

    return 0;
}



