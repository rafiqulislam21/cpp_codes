#include<iostream>
#include<cmath>
using namespace std;

int main() {
    double sum = 0;

   for(int i = 1;i <= 10; i++){
        sum = sum+pow(i,i);
   }

   cout<<"Sum, S = "<<sum;
   cout <<endl;

    return 0;
}


