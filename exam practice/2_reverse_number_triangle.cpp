#include<iostream>
using namespace std;

/*
n = 3
0123
012
01
0
*/
int main(){
    int n;

    cout<<"Enter n: "<<endl;
    cin>>n;

    for(int i = 0; i <= n; i++){
        for(int j = i; j <= n; j++){
            cout<<j-i;
        }
        cout<<endl;
    }
    return 0;
}

