#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    int arr[n];

    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    cout<<"Array forward: ";
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    cout<<"Array backward: ";
    for(int i = n-1; i >= 0; i--){
        cout<<arr[i]<<" ";
    }

    return 0;
}
