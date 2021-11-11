#include<iostream>
#include<iomanip>

using namespace std;

int main(){



    int product1_code, product1_number, product2_code, product2_number;

    float product1_price, product2_price, product1_paid, product2_paid, all_paid;

    cin>>product1_code>>product1_number>>product1_price;

    cin>>product2_code>>product2_number>>product2_price;



    product1_paid = product1_number * product1_price;

    product2_paid = product2_number * product2_price;

    all_paid = product1_paid + product2_paid ;



    cout<<"VALOR A PAGAR: R$ "<<fixed<<setprecision(2)<<all_paid<<endl;

}
