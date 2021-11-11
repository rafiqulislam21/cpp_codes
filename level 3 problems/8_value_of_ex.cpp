#include<iostream>
using namespace std;

int main() {
    int i, n;
    float x, sum=1, t=1;

    cout<<" Enter the value for x : ";
    cin>>x;

    cout<<" Enter the value for n : ";
    cin>>n;

    if(x<=10){
        for(i=1;i<=n;i++){
        t=t*x/i;
        sum=sum+t;
    }

    cout<<" e^"<<x<<" = "<<sum;
    }else{
    cout<<"n can not be greater than 10";

    }

    return 0;
}




