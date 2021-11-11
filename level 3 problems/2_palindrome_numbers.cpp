#include<iostream>
using namespace std;

int main() {

    int num1, num2;
    int temp,tempVal;
    int i, rem, reverse_num;
    cout<<"Enter two intigers:";
    cin>>num1>>num2;

    if (num1 > num2){
      tempVal = num1;
      num1 = num2;
      num2 = tempVal;
   }

   for(i=num1;i<=num2;i++){
      temp=i;
      reverse_num=0;
      while(temp){
         rem=temp%10;
         temp=temp/10;
         reverse_num=reverse_num*10+rem;
      }
      if(i==reverse_num)
         cout<<i<<" ";
   }

   cout <<endl;

    return 0;
}

