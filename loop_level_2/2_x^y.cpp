#include<iostream>
using namespace std;

int main(){
    int y;
    float x, result = 1;
    cout<<"Enter X: ";
    cin>>x;
    cout<<"Enter Y: ";
    cin>>y;

    if(y<0){
        cout<<"Y must be positive integer";
    }else{

        for(int i = 1; i <= y ; i++){
            result = result*x;
        }
        cout<<result;
    }

    return 0;
}

