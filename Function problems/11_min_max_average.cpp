#include<iostream>
using namespace std;

void minMax(int arr[], int n, int *minVal, int *maxVal, double *avg) {
    //int size = (*(&arr+1) - arr)-3;
    int sum = 0;
    for(int i=0;i<n;i++){
    //find max
        if(*maxVal>arr[i]){
            *maxVal = *maxVal;
        }else{
            *maxVal = arr[i];
        }
    //dind min
        if(*minVal<arr[i]){
            *minVal = *minVal;
        }else{
            *minVal = arr[i];
        }

        sum = sum+arr[i];
	}

	*avg = (double)sum/n;
}
main() {
   int arr[] = {2,1,66,34,23,60,4,3,5,4};
   int arrSize = sizeof(arr)/sizeof(arr[0]);
   int minVal = arr[0], maxVal = arr[0];
   double avg = 0;

   minMax(arr, arrSize, &minVal, &maxVal, &avg);

   cout<<"Maximum = "<<maxVal<<endl;
   cout<<"Minimun = "<<minVal<<endl;
   cout<<"Average = "<<avg<<endl;
}
