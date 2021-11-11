#include<iostream>
#include<cmath>
using namespace std;

int main(){
//1 + 1/3^2 + 1/5^3 + 1/7^4 +...................
    int n, power = 1;
    float sum = 0;
    cout<<"Enter n: ";
    cin>>n;

    for(int i = 1; i <= n; i = i+2){
        if(i==1){
            cout<<i;
            sum = sum+i;
        }else{
            cout<<" + "<<1<<"/"<<i<<"^"<<power;
            sum = sum + ((float)1/pow(i,power));
        }

        power++;
    }

    cout<<" = "<<sum<<endl;

    return 0;
}



