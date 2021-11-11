#include<iostream>
using namespace std;

void rightTriangle(int row){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < i; j++){
            if(i%2==0){
                cout<<"#";
            }else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
}




int main(){

    int row;
    cout<<"Enter number of row:"<<endl;
    cin>>row;
    rightTriangle(row);
    return 0;
}
