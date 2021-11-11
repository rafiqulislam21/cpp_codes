#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main() {
    int r1 = 15, c1 = 10;
    float A[r1][c1];
    float total, average;

    srand(time(0));

    //A
    for(int i = 0; i < r1; i++){
        for(int j = 0; j < c1; j++){
            A[i][j] = (float(rand())/float((RAND_MAX)) * 100.0);
        }
    }
    cout<<"A = "<<endl;
    for(int i = 0; i < r1; i++){
        for(int j = 0; j < c1; j++){
            cout<<A[i][j]<<"  ";
        }
        cout<<endl;
        cout<<endl;
    }
    cout<<endl;
    average = 0;
    for(int i = 0; i < r1; i++){
        total = 0;
        for(int j = 0; j < c1; j++){
            total = total + A[i][j];
        }
        average = (float)total/c1;
        cout<<"Average of row "<<i<<" = "<<average;
        cout<<endl;
        cout<<endl;
    }

    return 0;
}




