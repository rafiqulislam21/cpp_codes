
#include<iostream>
using namespace std;

int main(){
    int n, noInput, pos = 0, neg = 0, zero = 0, odd = 0, even = 0;
    cout<<"Number of inputs: ";
    cin>>noInput;
    cout<<"Enter "<<noInput<<" numbers: ";

    for(int i = 1; i <= noInput; i++){
       cin>>n;

       if(n == 0){
        zero++;
       }
       if(n > 0){
        pos++;
       }
       if(n < 0){
        neg++;
       }
       if(n % 2 == 0){
        even++;
       }
       if(n % 2 != 0){
        odd++;
       }
    }

    cout<<"Positive: "<<pos<<endl;
    cout<<"Negative: "<<neg<<endl;
    cout<<"Zero: "<<zero<<endl;
    cout<<"Odd: "<<odd<<endl;
    cout<<"Even: "<<even<<endl;
}
