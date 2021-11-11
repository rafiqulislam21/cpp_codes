#include<iostream>
#include<cstdlib>
using namespace std;

int main() {
    int arr[25];
    int startNum, endNum;

    cout<<"Enter start number: ";
    cin>>startNum;
    cout<<"Enter end number: ";
    cin>>endNum;

    for(int i = 0; i < 25; i++){
        arr[i] = rand() % (endNum-1) + startNum;
    }

    for(int i = 0; i < 25; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}

