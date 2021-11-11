#include<iostream>
using namespace std;

int main(){

    for(int i = (int)'a'; i <= (int)'z'; i++){
        if(i == (int)'z'){
            cout<<(char)i;
        }else{
            cout<<(char)i<<",";
        }
    }
    return 0;
}


