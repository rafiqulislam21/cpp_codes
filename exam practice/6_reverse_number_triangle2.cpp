#include<iostream>
using namespace std;

/*
n = 3
3210
210
10
0
*/
int main(){
    int n;

    cout<<"Enter n: "<<endl;
    cin>>n;

    for(int i = 0; i <= n; i++){
        for(int j = i; j <= n; j++){
            cout<<n-(j-i)-i;
        }
        cout<<endl;
    }
    return 0;
}


