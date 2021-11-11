#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main() {
    int r1 = 5, c1 = 7;
    int A[r1][c1];
    int B[r1*c1];

    srand(time(0));

    //A
    for(int i = 0; i < r1; i++){
        for(int j = 0; j < c1; j++){
            A[i][j] = rand() % 100;
        }
    }
    cout<<"A(2d) = "<<endl;
    for(int i = 0; i < r1; i++){
        for(int j = 0; j < c1; j++){
            cout<<A[i][j]<<"  ";
        }
        cout<<endl;
    }
    cout<<endl;


    for(int i = 0; i < r1; i++){
        for(int j = 0; j < c1; j++){
            B[i*c1+j] =  A[i][j];
        }
    }
    cout<<endl;
    cout<<"B(1d) = "<<endl;
    for(int i = 0; i<r1*c1; i++){
        cout<<B[i]<<" ";
    }

    return 0;
}





