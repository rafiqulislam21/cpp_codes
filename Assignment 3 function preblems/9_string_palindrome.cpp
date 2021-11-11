#include<iostream>
using namespace std;

bool checkSubString(string str1, string str2) {
   int len1 = str1.length();
    int len2 = str2.length();

    for (int i = 0; i <= len1 - len2; i++) {
        int j;
        for (j = 0; j < len2; j++){
            if (str2[i + j] != str2[j]){
                break;
            }
        }

        if (j == len2){
            return true;
        }
    }

    return false;
}

main() {
   string str1, str2;
   cout<<"Enter a string: ";
   getline(cin, str1);
   cout<<"Enter another string: ";
   getline(cin, str2);

   if(checkSubString(str1,str2)== true){
        cout<<"Substring"<<endl;
    }else{
        cout<<"Not Substring"<<endl;
    }
}

