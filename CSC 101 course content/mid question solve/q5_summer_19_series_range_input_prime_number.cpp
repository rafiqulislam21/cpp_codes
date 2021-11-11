#include<iostream>
using namespace std;

int main() {

    int num1, num2;
    int temp, flag, sum = 0;
    cout<<"Enter the left range x:";
    cin>>num1;
    cout<<"Enter the right range y:";
    cin>>num2;

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
      if (flag == 0){
        sum = sum+i;
        cout <<i<<"+";
      }

   }
   cout<<" = "<<sum;
   cout <<endl;

    return 0;
}
