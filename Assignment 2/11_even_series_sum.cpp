#include<iostream>
using namespace std;

int main(){
    int sum = 0;

    for(int i = 1; i <= 1024; i++){
        if(i%2==0){
            sum = sum+i;
            if(i == 1024 ){
                cout<<i;
            }else{
                cout<<i<<"+";
            }
        }
    }
    cout<<"="<<sum;
    return 0;
}




