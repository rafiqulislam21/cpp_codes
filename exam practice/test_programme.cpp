#include <iostream>
using namespace std;

class TestClass {
public:
    void test(){
    cout<<"welome "<<endl;
}

int sum(int num1, int num2){
    return num1+num2;
}


};


void showText(string text){
    cout<<"welome "<<text<<endl;
}

int sum3(int num1, int num2){
    return num1+num2;
}

int main(){
    TestClass obj;

    obj.test();
    cout<<obj.sum(4,5);

    return 0;
}
