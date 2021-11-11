#include<iostream>
using namespace std;


int don0(int salary){

    return 0;
}

int donA(int salary){
     float donation=(25000*0)+(salary-25000)*10/100;

    return donation;
}

int donB(int salary){
    float donation=(25000*0)+(25000*10/100)+((salary-50000)*15/100);

    return donation;
}

int donC(int salary){
    float donation=(25000*0)+(25000*10/100)+(50000*15/100)+((salary-100000)*20/100);
    return donation;
}

int donD(int salary){
    float donation = (salary*20/100);
    return donation;
}


int main(){
    int salary;
    cout<<"Enter the salary: ";
    cin>>salary;

    if(salary >=0 && salary <= 25000){
        cout<<don0(salary);
    }else if(salary >= 25001 && salary <= 50000){
        cout<<donA(salary);
    }else if(salary >=50001 && salary <= 100000){
        cout<<donB(salary);
    }else if(salary >=100001 && salary <= 200000){
        cout<<donC(salary);
    }else if(salary >=200001){
        cout<<donD(salary);
    }

    return 0;
}

