#include<iostream>
using namespace std;

/*
n = 3
3210
3210
3210
3210
*/
int main(){
    int n;

    cout<<"Enter n: "<<endl;
    cin>>n;

    for(int i = n; i >= 0; i--){
        for(int j = n; j >= 0; j--){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}



