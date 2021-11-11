#include<iostream>
#include<stdlib.h>
using namespace std;

int main() {
    int arr[100];

    for(int i = 0; i < 100; i++){
        arr[i] = rand()%100;
    }

    int maxNum = arr[0];
    int minNum = arr[0];

    for(int i = 0; i < 100; i++){
        cout<<arr[i]<<" ";
        if(arr[i] > maxNum){
            maxNum = arr[i];
        }
        if(arr[i] < minNum){
            minNum = arr[i];
        }
    }
    cout<<endl;
    cout<<"Largest Number: "<<maxNum<<endl;
    cout<<"Smallest Number: "<<minNum;


    return 0;
}

