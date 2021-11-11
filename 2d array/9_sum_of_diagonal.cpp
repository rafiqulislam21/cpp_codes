#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main() {
    int r1 = 5, c1 = 5, sum1 = 0, sum2 = 0;
    int A[r1][c1];
    srand(time(0));

    for(int i = 0; i < r1; i++){
        for(int j = 0; j < c1; j++){
            A[i][j] =  rand() % 100;
        }
    }
    cout<<endl;
    cout<<"A = "<<endl;
    for(int i = 0; i<r1; i++){
        for(int j = 0; j < c1; j++){
            cout<<A[i][j]<<" ";
            if(i==j){
                sum1 += A[i][j];
            }
            if(i==c1-j-1){
                sum2 += A[i][j];
            }
        }
        cout<<endl;
    }

    cout<<"First diagonal = "<<sum1<<endl;
    cout<<"Second diagonal = "<<sum2<<endl;

    return 0;
}
