#include <iostream>
#include <cmath>
using namespace std;

int main(){

    float a, b, c;
    float discriminant, x1, x2, real, imaginary;

    cout<<"Enter a, b, c: "<<endl;
    cin>>a>>b>>c;

//eq: ax^2 + bx + c = 0
//discriminant = b^2 - 4*a*c

    discriminant = b*b - 4*a*c;

    if(discriminant > 0){
        x1 = (-b + sqrt(discriminant)) / (2*a);
        x2 = (-b - sqrt(discriminant)) / (2*a);

        cout<<"X = "<<x1<<endl;
        cout<<"X = "<<x2<<endl;
    }else if(discriminant == 0){
        x1 = (-b + sqrt(discriminant)) / (2*a);
        cout<<"X = "<<x1<<endl;
    }else{
        real = (float) -b/(2*a);
        imaginary = sqrt(-discriminant)/(2*a);

        cout<<"X = "<<real<<" + "<<imaginary<<"i"<<endl;
        cout<<"X = "<<real<<" + "<<imaginary<<"i"<<endl;
    }

    return 0;
}
