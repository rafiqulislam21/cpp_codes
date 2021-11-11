#include<iostream>
using namespace std;

/*
n = 3
0123
0123
0123
0123
*/
int main(){
    int n;

    cout<<"Enter n: "<<endl;
    cin>>n;

    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= n; j++){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}
