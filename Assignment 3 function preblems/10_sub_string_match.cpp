#include<iostream>
using namespace std;

bool checkPalindrome(string str) {
    string reversedStr = "";
    for(int i = str.length()-1; i >= 0; i--){
        reversedStr = reversedStr+str[i];
    }

    if(str == reversedStr){
        return true;
    }else{
        return false;
    }



}

main() {
   string str;
   cout<<"Enter a string: ";
   getline(cin, str);

   if(checkPalindrome(str)== true){
        cout<<"Palindrome"<<endl;
    }else{
        cout<<"Not Palindrome"<<endl;
    }
}

