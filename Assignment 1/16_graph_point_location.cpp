#include <iostream>
using namespace std;

int main(){

    float x, y;

    cout<<"Enter (x,y): "<<endl;
    cin>>x>>y;

    if(x == 0 && y == 0){
        cout<<"Origin"<<endl;
    }else if(y == 0){
        cout<<"X-axis"<<endl;
    }else if(x == 0){
        cout<<"Y-axis"<<endl;
    }else if(x > 0 && y > 0){
        cout<<"1st quadrant"<<endl;
    }else if(x < 0 && y > 0){
        cout<<"2nd quadrant"<<endl;
    }else if(x < 0 && y < 0){
        cout<<"3rd quadrant"<<endl;
    }else if(x > 0 && y < 0){
        cout<<"4th quadrant"<<endl;
    }

    return 0;
}

