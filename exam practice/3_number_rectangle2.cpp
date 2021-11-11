#include<iostream>
using namespace std;

/*
n = 3
0000
1111
2222
3333
*/
int main(){
    int n;

    cout<<"Enter n: "<<endl;
    cin>>n;

    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= n; j++){
            cout<<i;
        }
        cout<<endl;
    }
    return 0;
}


