#include<iostream>

using namespace std;

int main(){
    int num;
    int positive = 0, negative = 0, even = 0, odd = 0;
    cout<<"Enter 25 integers: ";
    for(int i=0; i<25; i++){
        cin>>num;
        if(num>0){
            positive++;
        }
        if(num<0){
            negative++;
        }
        if(num%2==0){
            even++;
        }
        if(num%2!=0){
            odd++;
        }
    }

    cout<<"Positive number = "<<positive<<endl;
    cout<<"Negative number = "<<negative<<endl;
    cout<<"Even number = "<<even<<endl;
    cout<<"Odd number = "<<odd<<endl;


    return 0;
}
