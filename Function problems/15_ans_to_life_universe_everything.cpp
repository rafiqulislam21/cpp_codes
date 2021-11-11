#include <iostream>
using namespace std;

void lifeUniverseEverything(){
    int n;
    for(;;){
        cin>>n;
        if(n==42){
         break;
        }else{
         cout<<n<<endl;
        }
    }
}

int main(){

    lifeUniverseEverything();
    return 0;
}
