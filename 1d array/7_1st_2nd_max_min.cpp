#include<iostream>
#include<cstdlib>
using namespace std;

int main() {

    int n = 11;

    float arr1[n];

    for(int i = 0; i < n; i++){
        arr1[i] = (float(rand())/float((RAND_MAX)) * 10.0); //genarate random float number between 0 to 100
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

	cout<<"1st Maximum Number: ";
	cout<<arr1[0]<<endl;
	cout<<"2nd Maximum Number: ";
	cout<<arr1[1]<<endl;

	cout<<"2nd Meadian Number: ";
	cout<<arr1[n/2]<<endl;

	cout<<"1st Minimum Number: ";
	cout<<arr1[n-1]<<endl;
	cout<<"2nd Minimum Number: ";
	cout<<arr1[n-2]<<endl;


    return 0;
}



