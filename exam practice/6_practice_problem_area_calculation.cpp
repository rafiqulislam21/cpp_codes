#include<iostream>
using namespace std;

int main(){
    int choice;
    float radius, result = 0;

    cout<<"Radius : ";
    cin>>radius;
    cout<<"Choice : ";
    cin>>choice;

    if(choice == 1){
        result = 4*3.142*radius*radius;
        cout<<"Surface area of sphere is "<<result<<endl;
    }else if(choice == 2){
        result = (float)4/3*(3.142*radius*radius*radius);
        cout<<"Volume of sphere is "<<result<<endl;
    }else if(choice == 3){
        result = 4*3.142*radius*radius;
        cout<<"Surface area of sphere is "<<result<<endl;
        result = (float)4/3*(3.142*radius*radius*radius);
        cout<<"Volume of sphere is "<<result<<endl;
    }else{
        cout<<"Wrong choice ";
    }


    return 0;

}
