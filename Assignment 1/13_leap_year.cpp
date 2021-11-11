#include<iostream>
using namespace std;

int main(){

    int inputYear;

    cout<<"Enter Year:"<<endl;
    cin>>inputYear;

    if(inputYear % 4 == 0 ){
        if(inputYear % 100 == 0){
            if(inputYear % 400 == 0){
                cout<<"A leap year"<<endl;
            }else{
                cout<<"Not a leap year 1"<<endl;
            }
        }else{
            cout<<"A leap year"<<endl;
        }
    }else{
        cout<<"Not a leap year"<<endl;
    }

    return 0;
}
