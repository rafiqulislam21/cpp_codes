#include<iostream>
using namespace std;

void sequence(int startNum, int endNum){
    int result = 0;
    bool flag;
    int counter = 0;

    if(startNum < endNum){
        for(int i = startNum; i <= endNum; i++){

            flag = false;
            for(int j = 2; j <= i/2; j++){
                if(i%j == 0){
                    flag = true;
                    break;
                }
            }
            if(flag == false){
                    counter++;
                    result = result + i;
                    if(counter==1){
                        cout<<i;
                    }else{
                        cout<<"+"<<i;
                    }
                }
        }
        cout<<"="<<result;
    }

    /*
    for(int i = startNum; i <= endNum; i++){
        result = result+i;
        if(i < endNum){
            cout<<i<<"+";
        }else if(i == endNum){
            cout<<i<<"="<<result;
        }
    }
    */
}




int main(){

    int startNum, endNum;
    //string input;
    //getline(cin, input);
    //cout<<input;
    cout<<"Enter start and end number:"<<endl;
    cin>>startNum>>endNum;
    sequence(startNum,endNum);

    return 0;
}
