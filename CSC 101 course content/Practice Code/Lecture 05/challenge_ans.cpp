/*
#include <iostream>
using namespace std;

string modify(string s){
    string output="";
    for(int i=0;i<s.size();i++){

        if((s[i]>=65 && s[i]<=90)||(s[i]>=97 && s[i]<=122)){
            output+=s[i];
        }
    }
    return output;
}

int main()
{
    cout<<modify("ABLD777788")<<endl;
    cout<<modify("12345XYZ")<<endl;
    cout<<modify("Zsdfhoas9(^&(Y OH797hjhl")<<endl;
    return 0;
}
*/

/*


#include <iostream>
using namespace std;

int main () {
   int i;
   cout<<"Enter the value"<<endl;
   cin>>i;
   if( i>=0 )
   {
   if (i>=0 && i<=100)
   {
    if (i<50)
        cout<<"The value of i "<<i<<" is less than 50"<<endl;
    else
        cout<<"The value of i "<<i<<" is in between 50-100"<<endl;
   }
      if (i>=300 && i<=400)
   {
    if (i<350)
        cout<<"The value of i "<<i<<" is less than 350"<<endl;
    else
        cout<<"The value of i "<<i<<" is in between 350-400"<<endl;
   }
   }
   else
    cout<<"It is a negetive number"<<endl;

   return 0;
}

*/



#include <iostream>
using namespace std;
int main()
{
int a,b,c;

cout << "Enter value of A : ";
cin >> a;

cout << "Enter value of B : ";
cin >> b;

cout << "\nEnter value of C : ";
cin >> c;

if (a>b)
{
    if (a>c)
    cout << "\n\nA is Greatest";
    else
    cout << "\n\nC is Greatest";

}


else
{
    if (b>c)
    cout << "\n\nB is Greatest";
    else
    cout << "\n\nC is Greatest";
}
return 0;
}











