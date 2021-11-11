#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main() {
    int r = 10, c = 10;
    int A[r][c];
    srand(time(0));

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            A[i][j] =  rand() % 10;
        }
    }
    cout<<endl;
    cout<<"Chess board"<<endl<<endl;
    for(int i = 0; i<r; i++){
        for(int j = 0; j < c; j++){
            if((i+j)%2 == 0)
				cout<<char(219);
			else
				cout<<" ";
        }
        cout<<endl;
    }

    return 0;
}
