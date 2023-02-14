#include <iostream>
using namespace std;

void main (){

    float weight, height, bmi;
    cout << "weight, height : ";
    cin >> weight >> height;
    bmi = weight / (height * height);

    if (bmi<10.5)
    cout <<"skinny" << endl;
    else if  (bmi > 20)
    cout << "fat" << endl;
    else 
    cout << "your bmi is " << endl;

    system ("pause>0");
}