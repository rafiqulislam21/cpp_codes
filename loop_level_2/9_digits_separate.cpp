#include<iostream>
using namespace std;

int main(){
    int num, rem, sym = 0;
    cout<<"Enter a number: ";
    cin>>num;

    if(num == 0){
        cout<<"0"<<endl;
    }else{
        for(int i=num; i>0; i=i/10){
            rem = (i%10);
            sym = sym*10+rem;
        }

        for(int j=sym; j>0; j=j/10){
            rem = (j%10);
            cout<<rem<<endl;
        }
    }

    return 0;
}




