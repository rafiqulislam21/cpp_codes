#include <iostream>
using namespace std;

int main(){

    char character;

    cout<<"Enter a character: "<<endl;
    cin>>character;

    if(int(character) >= 97 && int(character) <= 122){
        cout<<"Lowercase letter"<<endl;
    }else if(int(character) >= 65 && int(character) <= 90){
        cout<<"Uppercase letter"<<endl;
    }else if(int(character) >= 48 && int(character) <= 57){
        cout<<"Digit"<<endl;
    }else{
        cout<<"Symbol"<<endl;
    }

    return 0;
}
