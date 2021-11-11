#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main() {
    int r1 = 4, c1 = 3, r2 = 3, c2 = 2;
    int A[r1][c1];
    int B[r2][c2];
    int C[r1][c2];
    srand(time(0));
    //A
    for(int i = 0; i < r1; i++){
        for(int j = 0; j < c1; j++){
            A[i][j] = rand() % 10;
        }
    }
    cout<<"A = "<<endl;
    for(int i = 0; i < r1; i++){
        for(int j = 0; j < c1; j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    //B
    for(int i = 0; i < r1; i++){
        for(int j = 0; j < c1; j++){
            B[i][j] = rand() % 10;
        }
    }
    cout<<"B = "<<endl;
    for(int i = 0; i < r2; i++){
        for(int j = 0; j < c2; j++){
            cout<<B[i][j]<<" ";
        }
        cout<<endl;
    }
    //C = B - A
    for(int i = 0; i < r1; i++){
        for(int j = 0; j < c2; j++){
            C[i][j] = 0;
            for (int k = 0; k < r2; k++){
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    cout<<endl;
    cout<<"C = "<<endl;
    for(int i = 0; i < r1; i++){
        for(int j = 0; j < c2; j++){
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}


