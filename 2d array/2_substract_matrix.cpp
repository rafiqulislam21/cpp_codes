#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main() {
    int m = 4, n = 3;
    int A[m][n];
    int B[m][n];
    int C[m][n];
    srand(time(0));
    //A
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            A[i][j] = rand() % 100;
        }
    }
    cout<<"A = "<<endl;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    //B
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            B[i][j] = rand() % 100;
        }
    }
    cout<<"B = "<<endl;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout<<B[i][j]<<" ";
        }
        cout<<endl;
    }
    //C = B - A
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            C[i][j] = B[i][j]-A[i][j];
        }
    }
    cout<<endl;
    cout<<"C = "<<endl;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

