#include<iostream>

using namespace std;

int main(){
    int n;

    cout<<"Enter Size of triangle: ";
    //code works fine for n = 20
    cin>>n;

    for(int i = n; i >= 1; i--){
        for(int j = n; j >= n-i+1; j--){
            switch(j) {
            case 0: cout <<"zero "; break;
            case 1: cout <<"one "; break;
            case 2: cout <<"two ";break;
            case 3: cout <<"three ";break;
            case 4: cout <<"four ";break;
            case 5: cout <<"five ";break;
            case 6: cout <<"six ";break;
            case 7: cout <<"seven ";break;
            case 8: cout <<"eight ";break;
            case 9: cout <<"nine ";break;
            case 10: cout <<"ten ";break;
            case 11: cout <<"eleven "; break;
            case 12: cout <<"twelve ";break;
            case 13: cout <<"thirteen ";break;
            case 14: cout <<"fourteen ";break;
            case 15: cout <<"fifteen ";break;
            case 16: cout <<"sixteen ";break;
            case 17: cout <<"seventeen ";break;
            case 18: cout <<"eighteen ";break;
            case 19: cout <<"nineteen ";break;
            case 20: cout <<"twenty ";break;
        }
        }
        cout<<endl;
    }
    return 0;
}

