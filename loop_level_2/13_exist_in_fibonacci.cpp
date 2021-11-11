#include<iostream>
using namespace std;

int main(){

    int n, n1 = 0, n2 = 1, next;
    bool exist = true;
    cout<<"Enter n: ";
    cin>>n;

    for(int i = 1; i <= 1000; i++){
        if(n==1){
            cout<<"1st term of Fibonacci sequence";
        }
        if(n==2){
            cout<<"2nd term of Fibonacci sequence";
        }else{
            next = n1+n2;
            n1 = n2;
            n2 = next;
            if(n==next){
                cout<<i+2<<"th term of Fibonacci sequence";
                exist = true;
                break;
            }else{
                exist = false;
            }

        }
    }

    if(exist == false){
        cout<<"Does not exist in the Fibonacci sequence";
    }
    return 0;
}



