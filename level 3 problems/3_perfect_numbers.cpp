#include<iostream>
using namespace std;

int main() {

    int i, j, num1, num2, sum, tempVal;
    cout<<"Enter two intigers:";
    cin>>num1>>num2;

    if (num1 > num2){
      tempVal = num1;
      num1 = num2;
      num2 = tempVal;
   }

   for(i=num1;i<=num2;i++){
      sum=0;
      for(j=1; j<i; j++){
            if(i % j == 0){
                sum += j;
            }
        }
        if(sum == i){
            cout<<i<<" ";
        }
   }

   cout <<endl;

    return 0;
}


