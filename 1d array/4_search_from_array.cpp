#include<iostream>
#include<cstdlib>
using namespace std;

int main() {

    int n, totalFound = 0, searchNum;

    cout<<"Enter array size: ";
    cin>>n;

    int arr[n];

    for(int i = 0; i < n; i++){
        arr[i] = rand() % 100;
    }

    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"Enter a number you want to search: ";
    cin>>searchNum;
    cout<<endl;

    cout<<"Number found at index no : ";
    for(int i = 0; i < n; i++){
        if(arr[i] == searchNum){
            totalFound++;
            cout<<i<<" ";
        }
    }
    cout<<endl;
    cout<<"Total found = "<<totalFound;

    return 0;
}


