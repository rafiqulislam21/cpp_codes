#include<iostream>
using namespace std;

int main() {
    double n,i,sum=0,h=1;
    n = 10;
    for(i = 1; i <= n; i++){
        if(i==1){
           cout<<i<<"! ";
        }else{
           cout<<" + "<<i<<"!";
        }

        h=h*i;
        sum=sum+h;
    }
    cout<<" = "<<sum;
    return 0;
}



