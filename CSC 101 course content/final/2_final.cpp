#include<iostream>
using namespace std;

void counter(char B[], int sizeofArr, char ch){
    //count
    int count = 0;

    for (int i = 0; i < sizeofArr; i++){
         bool appears = false;
         for (int j = 0; j < i; j++){
              if (B[j] == B[i]){
                  appears = true;
                  break;
              }
         }

         if (!appears){
              if(B[i] == ch)
                count++;
         }
    }

    cout<<"counter "<<ch<<count<<" times"<<endl;
}

float getMaxChar(){
    int row;
    int column;

    cout<<"Row Size: ";
    cin>>row;

    cout<<"Col Size: ";
    cin>>column;

    char Arr[row][column];

    cout<<"Enter the elements: "<<endl;


    for(int i = 0; i < row; i++){
            cout<<"For row "<<i+1<<": "<<endl;
        for(int j = 0; j < column; j++){
            cin>>Arr[i][j];
        }
        cout<<endl<<endl;
    }
    cout<<endl<<endl<<endl;


    char B[row*column];
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            B[i*column+j] =  Arr[i][j];
        }
    }


    for(int i = 0; i < row*column; i++){
        counter(B, row*column, B[i] );
    }


    return 0;
}




int main(){

    getMaxChar();

    return 0;
}

