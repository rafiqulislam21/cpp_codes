#include <iostream>
using namespace std;

int main()
{
    int arraySize;
    cout << "Enter length: ";
    cin>>arraySize;
    char str[arraySize];
    int a = 0, c = 0, g = 0, t = 0;

    cout << "Enter the Nucleic acid sequence: ";
    cin >> str;

    for(int i = 0; i<sizeof(str); i++){

        if(str[i] == 'A'){
            a++;
        }else if(str[i] == 'C'){
            c++;
        }else if(str[i] == 'G'){
            g++;
        }else if(str[i] == 'T'){
            t++;
        }
    }

    cout<<"A: "<<((float)a/sizeof(str))*100<<" %"<<endl;
    cout<<"C: "<<((float)c/sizeof(str))*100<<" %"<<endl;
    cout<<"G: "<<((float)g/sizeof(str))*100<<" %"<<endl;
    cout<<"T: "<<((float)t/sizeof(str))*100<<" %"<<endl;

    return 0;
}
