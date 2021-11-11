#include <iostream>
using namespace std;

int main()
{
    float TP, TN, FP, FN;
    float ACC, F1, TPR, TNR;

    cout << "Please Enter True Positives (TP): ";
    cin>>TP;
    cout << "Please Enter True Negatives (TN): ";
    cin>>TN;
    cout << "Please Enter False Positive (FP): ";
    cin>>FP;
    cout << "Please Enter False Negative (FN): ";
    cin>>FN;

    ACC = (float)(TP+TN)/(TP+TN+FP+FN);
    F1 = (float)(2*TP)/(2*TP+FP+FN);
    TPR = (float)(TP)/(TP+FN);
    TNR = (float)(TN)/(TN+FP);

    cout<<"ACC =  "<<ACC<<endl;
    cout<<"F1 = "<<F1<<endl;
    cout<<"TPR = "<<TPR<<endl;
    cout<<"TNR = "<<TNR<<endl;

    return 0;
}

