#include <stdio.h>
#include <string.h>


int stringLength(char str[]) {
   int len = 0;
   while(str[len] != '\0'){
        len++;
   }

   return len-1;
}


int main(){
    char str[80];
    int flag = 0;

    //printf("Enter a string:");
    fgets(str, 80, stdin);

    //convert normal string to Uppaer case and replace white spaces, ',' '.' etc-----------
    int i = 0, j = 0;
	while (str[i] != '\0'){
        //checking if string element is white spaces, ',' '.' or other special character which we will ignore otherwise we will increase hte index number to skip that value
		if(str[i] >= ' ' && str[i] <= '/'){
            //do nothing just ignore ' ' ',' '.' etc
		}else{
		    //checking if the string element is between 'a' and 'z'
		    if(str[i] >= 'a' && str[i] <= 'z'){
		        //convert lowecase letter to uppercase letter
                str[j++] = (char)((int)str[i]-32);
            }else{
                //if string element is already a uppercase letter then just putting same value
                str[j++] = str[i];
            }
		}
		i++;
	}
	str[j] = '\0';

    //printf("updated----- %s", str);

    //getting string length from our custom made function
    int length = stringLength(str);

    //checking if the uppercase string is palindrome or not
    for(int i=0; i<length/2; i++){
        if(str[i] != str[length-i-1]){
            flag = 1;
            break;
        }
    }


    if (flag) {
        printf("not a palindrome");
    }else {
        printf("palindrome");
    }
    return 0;
}
