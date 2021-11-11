#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main() {
    int m = 5, n = 3;
    int arr[m][n];
    srand(time(0));

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            arr[i][j] = ((rand() % 30) + 20);
        }
    }

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
