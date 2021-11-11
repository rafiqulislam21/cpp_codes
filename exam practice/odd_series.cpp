#include<iostream>
using namespace std;

int main(){
//1 + 3 + 5 + 7 +...................
    int n;
    float sum = 0;
    cout<<"Enter n: ";
    cin>>n;

    for(int i = 1; i <= n; i = i+2){
        if(i==1){
            cout<<i;
            sum = sum+i;
        }else{
            cout<<" + "<<i;
            sum = sum + i;
        }
    }

    cout<<" = "<<sum<<endl;

    return 0;
}



