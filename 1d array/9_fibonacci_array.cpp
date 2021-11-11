#include<iostream>
#include<cstdlib>
using namespace std;

int main() {

    int n;

    cout<<"Enter array size: ";
    cin>>n;

    int arr[n];

    int n1 = 0, n2 = 1, next;
        arr[0] = n1;
        arr[1] = n2;
    for(int i = 2; i < n; i++){
            next = n1+n2;
            n1 = n2;
            n2 = next;

            arr[i] = next;

    }

    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}




