#include<iostream>
using namespace std;

/*
n = 3

*
##
***


*/
int main(){
    int n;

    cout<<"Enter n: "<<endl;
    cin>>n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            if(i%2==0){
                cout<<"*";
            }else{
                cout<<"#";
            }
        }
        cout<<endl;
    }
    return 0;
}





