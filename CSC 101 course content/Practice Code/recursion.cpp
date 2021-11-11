#include <iostream>
using namespace std;

int fib(int n){
  if(n<=1)
	return n;
  return fib(n-1)+ fib(n-2);
}

int main(){
    int i=0;
  cout<<fib(5)<<endl;
  while(i < 5) {
  cout << " " << fib(i);
      i++;}
  return 0;
}
