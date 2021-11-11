#include<iostream>
#include<cstdlib>
using namespace std;

int main() {

    int n, totalFound = 0, searchNum;

    cout<<"Enter array size: ";
    cin>>n;

    float arr1[n];
    float arr2[n];

    for(int i = 0; i < n; i++){
        arr1[i] = (float(rand())/float((RAND_MAX)) * 100.0); //genarate random float number between 0 to 100
    }

    for(int i = 0; i < n; i++){
        arr2[i] = (float(rand())/float((RAND_MAX)) * 100.0); //genarate random float number between 0 to 100
    }

    cout<<"First array before sorting: ";
    for(int i = 0; i < n; i++){
        cout<<arr1[i]<<" ";
    }
    //first array sort
    float temp;

    for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr1[i]<arr1[j]){
				temp  =arr1[i];
				arr1[i]=arr1[j];
				arr1[j]=temp;
			}
		}
	}
	cout<<endl<<endl;
	cout<<"First array After sorting(descending order): ";
    for(int i = 0; i < n; i++){
        cout<<arr1[i]<<" ";
    }

    cout<<endl<<endl<<endl;
    cout<<"Second array before sorting: ";
    for(int i = 0; i < n; i++){
        cout<<arr2[i]<<" ";
    }

     //first array sort
    float temp2;

    for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr2[i]>arr2[j]){
				temp  =arr2[i];
				arr2[i]=arr2[j];
				arr2[j]=temp;
			}
		}
	}


    cout<<endl<<endl;
    cout<<"Second array after sorting(ascending order): ";
    for(int i = 0; i < n; i++){
        cout<<arr2[i]<<" ";
    }

    return 0;
}



