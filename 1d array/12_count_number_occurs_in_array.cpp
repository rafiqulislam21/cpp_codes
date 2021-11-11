#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
    int n;
    cout<<"Enter a array size: ";
    cin>>n;

    int arr[n];
    for(int i = 0; i < n; i++){
        arr[i] = rand() %10;
    }
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    int seen[n];
    for(int i = 0; i < n; i++)
        seen[i] = 0;
    for(int i = 0; i < n; i++){
        if(seen[i] == 0){
            int counter = 0;
        for(int j = 0; j < n; j++){
            if(arr[i] == arr[j]){
                counter++;
                seen[j] = 1;
            }
        }
        cout<<endl;
        cout<<arr[i]<<" Occurs = "<<counter<<" times";
        }
    }
    return 0;
}
