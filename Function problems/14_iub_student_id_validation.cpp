#include<iostream>
#include<string>
using namespace std;

bool iubIdValidation(string str) {
    bool isValid = false;

    if(str.length() == 7){
        for(int i=0; i<str.length(); i++){
            if(str[i] > '0' && str[i] < '9'){
                isValid = true;
            }else{
                isValid = false;
            }
        }
    }else{
        isValid = false;
    }

    return isValid;
}

main() {
   string str;
   cout<<"Enter a IUB Id: ";
   getline(cin, str);

   if(iubIdValidation(str) == true){
    cout<<"Valid ID";
   }else{
    cout<<"Invalid ID";
   }

}



