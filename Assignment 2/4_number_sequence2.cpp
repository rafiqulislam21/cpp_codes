#include<iostream>
using namespace std;

int main(){

    for(float i = 2; i <= 4; i = i+0.25){
        if(i == 4){
            cout<<i;
        }else{
            cout<<i<<",";
        }
    }
    return 0;
}

