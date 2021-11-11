#include<iostream>
using namespace std;

int main(){
    double cgpa, income;
    int scholarship = 0;
    bool isOrphan = false;

    cout<<"Enter your CGPA: ";
    cin>>cgpa;
    cout<<"Enter monthly salary of your family: ";
    cin>>income;
    cout<<"Is she/he orphan(1 = true/0 = false)? :";
    cin>>isOrphan;
    if(cgpa >= 3.00 && cgpa <= 3.50){
        if(isOrphan == 1){
            scholarship = 20;
        }else{
            if(income <= 40000){
                scholarship = 50;
            }else if(income >= 40001 && income <= 70000){
                scholarship = 30;
            }else if(income >= 70001 && income <= 100000){
                scholarship = 10;
            }else if(income > 100000){
                scholarship = 0;
            }
        }

    }else if(cgpa >= 3.50 && cgpa <= 3.90){
        if(isOrphan == 1){
            scholarship = 40;
        }else{
            if(income <= 40000){
                scholarship = 60;
            }else if(income >= 40001 && income <= 70000){
                scholarship = 40;
            }else if(income >= 70001 && income <= 100000){
                scholarship = 30;
            }else if(income > 100000){
                scholarship = 10;
            }
        }
    }else if(cgpa >= 3.91 && cgpa <= 4.00){
        scholarship = 100;
    }


    cout<<"Scholarship: "<<scholarship<<" %";

    return 0;
}
