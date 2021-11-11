#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main() {
    int m, n;
    cout<<"Enter matrix row: ";
    cin>>m;
    cout<<"Enter matrix column: ";
    cin>>n;
    int A[m][n];
    int B[n][m];

    //A
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin>>A[i][j];
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
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            B[i][j] = A[j][i];
        }
    }
    cout<<"A(transpose) = B = "<<endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout<<B[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}


