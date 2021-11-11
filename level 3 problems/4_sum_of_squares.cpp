#include<iostream>
using namespace std;

int main() {
    int sum = 0;

   for(int i = 1;i <= 100; i +=2){
        sum = sum+(i*i);
   }

   cout<<"Sum of first 100 odd numbers = "<<sum;
   cout <<endl;

    return 0;
}

