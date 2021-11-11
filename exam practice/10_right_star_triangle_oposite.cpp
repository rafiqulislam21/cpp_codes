#include<iostream>
using namespace std;

/*
n = 3

  *
 **
***


*/
int main(){
    int n;

    cout<<"Enter n: "<<endl;
    cin>>n;

    for(int i = 0; i < n; i++){
        for(int j = i; j < n-1; j++){
            cout<<" ";
        }
        for(int j = 0; j <= i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}





