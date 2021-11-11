#include<iostream>
#include <cmath>
using namespace std;

int main(){
    double AB = 4, BD = 8, ADsq, AD, S, ACD, ABCD;
    //AD^2(aquare of AD)
    ADsq = (AB*AB)+(BD*BD);

    AD = sqrt(ADsq);

    S = (AB+BD+AD)/2;
    //area of ACD triangle
    ACD = sqrt(S*(S-AB)*(S-BD)*(S-AD));
    //area of rectangle
    ABCD = AB*BD;


    //if triangle is half of rectangle then rectangle is valid otherwise invalid
    if(ACD == 0.5*ABCD){
        cout<<"Rectangle is valid."<<endl;
    }else{
        cout<<"Rectangle is not valid."<<endl;
    }

    return 0;
}
