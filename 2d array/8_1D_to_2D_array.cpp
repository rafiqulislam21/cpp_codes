#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main() {
    int r1 = 10, c1 = 2;
    int A[r1];
    int B[r1/2][c1];

    srand(time(0));

    //A
    for(int i = 0; i < r1; i++){
        A[i] = rand() % 100;
    }
    cout<<"A(1d) = "<<endl;
    for(int i = 0; i < r1; i++){
        cout<<A[i]<<"  ";
    }
    cout<<endl;


    for(int i = 0; i < r1/2; i++){
        for(int j = 0; j < c1; j++){
            B[i][j] =  A[j%c1+i*c1];
        }
    }
    cout<<endl;
    cout<<"B(2d) = "<<endl;
    for(int i = 0; i<r1/2; i++){
        for(int j = 0; j < c1; j++){
            cout<<B[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}





