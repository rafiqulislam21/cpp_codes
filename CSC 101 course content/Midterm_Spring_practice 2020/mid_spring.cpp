#include <iostream>
using namespace std;
int main()
{
    //string str = "DDAC";
    char checkD = 'D';
    int countD = 0;
    int strcount = 0;
    char str[100];
    cout << "Enter a string: ";
    cin.get(str, 100);
    for (int i = 0; str[i]; i++) // This means if the conduction for the for statement get a null ’\0’ it will terminate the source
    {
        strcount=strcount+1;
    }
    for (int i = 0; i < strcount; i++)
    {
        if (str[i] == checkD)
        {
            countD= countD+1;
        }
    }
    cout << "Number of D: " << countD<<endl;
    cout <<"String size :"<<strcount<<endl;
    return 0;
}


/*

#include <iostream>
using namespace std;
int palindrome(int n);
int main()
{
     int num;
     int x;
     cout << "Enter a positive number: ";
     cin >> num;
     x = palindrome(num);
     cout << " The reverse of the number is: " << x << endl;
}

 int palindrome(int num1)
 {
     int n,digit, rev = 0;
     n = num1;
       do
     {
         digit = num1 % 10;
         rev = (rev * 10) + digit;
         num1 = num1 / 10;
     } while (num1 != 0);
     //return rev;
     //cout << " The reverse of the number is: " << rev << endl;

     if (n == rev)
         cout << " The number is a palindrome.";
     else
         cout << " The number is not a palindrome.";
return rev;
 }
*/





/*
#include <iostream>
using namespace std;

int main() {
	int sum = 0;
	for (int i = 0; i <= 3; ++i)
        {
			cout << i << "+";
			sum = sum + i;
		}
		cout << "\b" << "=";
		cout << sum << endl;
	cout << "Total sum of elements: " << sum << endl;
	return 0;
}

*/

//x^1-x^2+x^3-x^4......
/*
#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	double result = 0;
	int x;
	cout <<"Enter a Num"<<endl;
	cin>>x;
	for(int i=0; i<=3; ++i)
	{
		result = result + pow(-1.0, i) * (pow(x,i+1.0));
	}
	cout <<result;
	return 0;
}
*/


//Reverse number
/*
#include <iostream>
#include <sstream>
using namespace std;
int main()
{
  int x=0;
  int reverseNumber=0;
  cout<<"Enter a number: ";
  cin >> x;

  while(x!=0)
  {
    reverseNumber = reverseNumber*10 + x%10;
    x = x/10;
  }
  cout<<"Reverse number:" <<reverseNumber<<endl;
  return 0;

}
*/



//Prime number
/*
#include <iostream>
using namespace std;
int main(){
  //Checking for prime = 2 to 100
  for(int i=2; i<100; ++i){
    bool numIsPrime = true;

    //Checking whether number upto prime is divisible
    for(int j=2; j<i; ++j){

      //If it is divisible...
      if(i % j == 0){
        //...number is not prime
        numIsPrime = false;
      }
    }
    //If number is not divisible
    if(numIsPrime == true){
      cout<<i<<endl;
    }
  }
  return 0;

}
*/

//Fibonacchi series

/*
#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	double result = 0;
	int x;
	cout <<"Enter a Num"<<endl;
	cin>>x;
	for(int i=0; i<=3; ++i)
	{
		result = result + pow(-1.0, i) * (pow(x,i+1.0));
	}
	cout <<result;
	return 0;
}
*/


