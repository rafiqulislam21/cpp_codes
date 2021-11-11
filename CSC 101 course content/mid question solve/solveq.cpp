#include<iostream>
using namespace std;

int main(){

int i,j;
for(i= 0; i <= 3; i = i +1){
for (j = 3-i ; j >= 0; j = j -1){
cout << " ";
}
for (j = 0 ; j <= i; j = j +1){
cout << j;
}
for (j = i ; j >= 0; j = j -1){
cout << j;
}
cout <<endl;
}

    return 0;
}
