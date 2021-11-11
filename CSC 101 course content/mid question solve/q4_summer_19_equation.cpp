#include<iostream>
using namespace std;

int main(){

    float x, y;
    float average = 0;
    cout<<"Enter the value of independent variable x: ";
    cin>>x;

    if(x<0){
        y = 2-x;
    }else if(x>=0 && x <20){
        y = x*x-10;
    }else if(x>=20){
        y = (float)(1/x)+5;
    }
    cout<<"Y = "<<y;

    return 0;
}


