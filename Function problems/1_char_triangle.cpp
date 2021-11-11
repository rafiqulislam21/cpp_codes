#include<iostream>
using namespace std;

void charTriangle(int num, char letter){
    for(int i = 1; i <= num; i++){
        for(int j = 1; j <= i; j++){
            cout<<letter<<" ";
        }
        cout<<endl;
    }
}

int main() {

    int n;
    char l;

    cout<<"Enter triangle size:";
    cin>>n;
    cout<<"Enter character:";
    cin>>l;

    charTriangle(n,l);

    return 0;
}
