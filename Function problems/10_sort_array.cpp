#include<iostream>
using namespace std;

void sortArray(int arr[], int arrSize){

    int temp, n=arrSize;

    for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]>arr[j]){
				temp  =arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}

    cout<<"sorted Array: ";
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main() {
    //int arrSize = 11;
    int arr[11] = {43,22,4,5,33,2,3,5,32,23,44};
    int arrSize = sizeof(arr)/sizeof(arr[0]);

    cout<<"Unsorted array: ";

    for(int i = 0; i < arrSize; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    sortArray(arr,arrSize);

    return 0;
}
