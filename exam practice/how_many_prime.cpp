#include<iostream>
using namespace std;

int main() {

    int num1, num2;
    int temp, flag;
    cout<<"Enter two intigers:";
    cin>>num1>>num2;

    if (num1 > num2){
      temp = num1;
      num1 = num2;
      num2 = temp;
   }

   cout << "\nPrime numbers between " << num1 << " and " << num2 << " are:" << endl;
   for (int i = num1 + 1; i < num2; ++i){
      flag = 0;
      for (int j = 2; j <= i/2; ++j){
         if (i % j == 0){
            flag = 1;
            break;
         }
      }
      if (flag == 0)
         cout <<"*"<<" ";
   }
   cout <<endl;

    return 0;
}

