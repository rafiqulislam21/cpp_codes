#include<iostream>
using namespace std;

int main(){
    int row;
    cout<<"Enter number of row of your triangle: ";
    cin>>row;

    for(int i = 0; i <= row; i++){
        for(int j = 0; j < i; j++){
            if(i%2==0){
                cout<<"#";
            }else{
                cout<<"*";
            }
        }
        cout<<endl;
    }

    return 0;
}

