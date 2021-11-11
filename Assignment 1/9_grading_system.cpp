#include<iostream>
using namespace std;

int main() {
    int mark;
    string grade;

    cout<<"Enter Course Mark"<<endl;
    cin>>mark;

    if(mark >= 85 && mark <= 100){
        grade = "A";
    }else if(mark >= 80 && mark < 85){
        grade = "A-";
    }else if(mark >= 75 && mark < 80){
        grade = "B+";
    }else if(mark >= 70 && mark < 75){
        grade = "B";
    }else if(mark >= 65 && mark < 70){
        grade = "B-";
    }else if(mark >= 60 && mark < 65){
        grade = "C+";
    }else if(mark >= 55 && mark < 60){
        grade = "C";
    }else if(mark >= 50 && mark < 55){
        grade = "C-";
    }else if(mark >= 45 && mark < 50){
        grade = "D+";
    }else if(mark >= 40 && mark < 45){
        grade = "D";
    }else if(mark >= 0 && mark < 40){
        grade = "F";
    }

    cout<<grade<<endl;

    return 0;
}
