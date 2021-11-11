#include <iostream>
using namespace std;

int main(){

    float a, b, c;

    cout<<"Enter Triangle side lengths: "<<endl;
    cin>>a>>b>>c;

    //find largest side of triangle
    if(a >= b && a >= c){
        //checks if it is right triangle (a^2 = b^2 + c^2)
        if(a*a == (b*b+c*c)){
            cout<<"Right triangle"<<endl;
        }else{
            cout<<"Not a right triangle"<<endl;
        }
    }else{
        if(b >= c){
            //checks if it is right triangle (a^2 = b^2 + c^2)
            if(b*b == (a*a+c*c)){
                cout<<"Right triangle"<<endl;
            }else{
                cout<<"Not a right triangle"<<endl;
            }
        }else{
            //checks if it is right triangle (a^2 = b^2 + c^2)
            if(c*c == (b*b+a*a)){
                cout<<"Right triangle"<<endl;
            }else{
                cout<<"Not a right triangle"<<endl;
            }
        }
    }

    return 0;
}


