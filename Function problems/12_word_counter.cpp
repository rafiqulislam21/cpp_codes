#include<iostream>
using namespace std;

int wordCounter(string str) {
    int counter = 0;
    for(int i = 0; i < str.length(); i++){
        if(str[i] == ' '){
            counter++;
        }
    }

    return counter;
}

main() {
   string str;
   cout<<"Enter a string: ";
   getline(cin, str);

   cout<<"Total word = "<<wordCounter(str)+1<<endl;
}

