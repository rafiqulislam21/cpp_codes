#include<iostream>
using namespace std;

float volume(float r){
    float result;
    result = ((float)4/3)*(3.1416)*r*r*r;

    return result;
}

int main() {

    float r;

    cout<<"Enter sphere's radius:";
    cin>>r;

    cout<<"Sphere's volume = "<<volume(r);

    return 0;
}

