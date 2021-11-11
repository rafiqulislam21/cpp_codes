#include<iostream>
using namespace std;

/*

n = 3
***
 **
  *



*/
int main(){
    int n;

    cout<<"Enter n: "<<endl;
    cin>>n;

    for(int i = 0; i < n; i++){
         for(int j = 0; j < i; j++){
           cout<<" ";
        }
        for(int k = i; k < n; k++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}



