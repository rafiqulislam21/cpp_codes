#include<iostream>
#include<cstdlib>
using namespace std;

int main() {

    int n;
    bool isAscending = false;
    bool isDecscending = false;

    cout<<"Enter array size: ";
    cin>>n;

    float arr[n];

    cout<<"Enter array elements: ";
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
		if(arr[i] < arr[i+1]){
            isAscending = true;
		}else{
            isDecscending = false;
            break;
		}
	}

    for(int i=0;i<n;i++){
		if(arr[i] > arr[i+1]){
            isDecscending = true;
		}else{
            isDecscending = false;
            break;
		}
	}



    if(isAscending == true){
        cout<<"Array sorted in ascending order";
    }else if(isDecscending == true){
        cout<<"Array sorted in Decending order";
    }else{
        cout<<"Array not sorted";
    }

    return 0;
}




