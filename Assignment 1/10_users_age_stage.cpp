#include<iostream>
using namespace std;

int main() {
    int age;
    string stage;

    cout<<"Enter Age:"<<endl;
    cin>>age;

    if(age < 3){
        stage = "Infancy";
    }else if(age >= 3 && age < 12){
        stage = "Childhood";
    }else if(age >= 12 && age < 20){
        stage = "Adolescence";
    }else if(age >= 20 && age < 40){
        stage = "Young adulthood";
    }else if(age >= 40 && age < 65){
        stage = "Mature adulthood";
    }else if(age >= 65){
        stage = "Late adulthood";
    }

    cout<<stage<<endl;

    return 0;
}
