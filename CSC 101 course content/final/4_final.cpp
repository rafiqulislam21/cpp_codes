#include<iostream>
#include<cmath>
using namespace std;


float percentageFun(float &n1, float &n2){
    float percentage = 0;

    if(n1 > n2){
      float temp = 0;
      temp = n1;
      n1 = n2;
      n2 = temp;
    }

    percentage = (100/n2) * n1;


    return percentage;
}


int main(){
    float n1, n2;
    cout<<"Enter the first positive number: ";
    cin>>n1;
    cout<<"Enter the second positive number: ";
    cin>>n2;

    cout<<n1<<" is "<<percentageFun(n1,n2)<<" % of "<<n2;


    return 0;
}

