#include<iostream>
#include<cstdlib>
using namespace std;

int main() {

    int n = 20, evenCount = 0, oddCount = 0;

    int arr[n];
    int evenArray[n];
    int oddArray[n];

    for(int i = 0; i < n; i++){
        arr[i] = rand() % 100; //genarate random float number between 0 to 100
    }

    cout<<"Original array: ";
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
        if(arr[i]%2 == 0){
            evenArray[evenCount++] = arr[i];
        }else{
            oddArray[oddCount++] = arr[i];
        }
    }
    cout<<endl;
    cout<<"Even array:";
    for(int i = 0; i < evenCount ; i++){
        cout<<evenArray[i]<<" ";
    }

    cout<<endl;
    cout<<"Odd array:";
    for(int i = 0; i < oddCount ; i++){
        cout<<oddArray[i]<<" ";
    }


    return 0;
}




