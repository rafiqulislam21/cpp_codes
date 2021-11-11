#include<iostream>
#include<string>
using namespace std;

string upperCaseConverter(string str) {

  /*  for(int i=0; str[i]!='\0'; i++){
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
	}
*/
    for(int i=0; i<str.length(); i++){
        str[i] = toupper(str[i]);
    }

    return str;
}

main() {
   string str;
   cout<<"Enter a string: ";
   getline(cin, str);
   cout<<"Uppercase string: "<<upperCaseConverter(str)<<endl;
}


