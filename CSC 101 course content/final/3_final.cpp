#include<iostream>
#include<cstring>
using namespace std;
char Sort(string myStri, int n)
{
   int i, j;
   for (i = 0; i < n-1; i++)
       for (j = 0; j < n-i-1; j++)

           if (myStri[j] > myStri[j+1]){
                 char tempVal = myStri[j+1];


                 myStri[j+1] = myStri[j];
                 myStri[j] = tempVal;
             }
        for(int i=n;i>=0;i--){
            cout<<myStri[i];
        }
}
int main (){
    string str;

    cout<<"Enter the string ";

    getline(cin, str);
    int lengthVal = str.length();


    Sort(str,lengthVal);

    return 0;
}
