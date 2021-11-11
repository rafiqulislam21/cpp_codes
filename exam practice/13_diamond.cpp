#include<iostream>
using namespace std;

/*
n = 3

  *
 ***
*****
 ***
  *


*/
int main(){
    int n;

    cout<<"Enter n: "<<endl;
    cin>>n;

    int i,j,r;

   for(i=0;i<=n;i++)
   {
     for(j=1;j<=n-i;j++)
     cout<<" ";
     for(j=1;j<=2*i-1;j++)
       cout<<"*";
     cout<<endl;
   }
   for(i=n-1;i>=1;i--)
   {
     for(j=1;j<=n-i;j++)
     cout<<" ";
     for(j=1;j<=2*i-1;j++)
       cout<<"*";
     cout<<endl;;
   }

    return 0;
}





