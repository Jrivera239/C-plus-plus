#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;


int main  () {

    const int minValue = 1;
    const short maxValue = 6;

    srand(time(0));
    short first = (rand()%(maxValue - minValue +1)) + minValue;
      short second = (rand()%(maxValue - minValue +1)) + minValue;
      cout << first << " , " <<second;
}

/*

int main () {
    //we can use this get a random number generator
  long elapsedSeconds = time(0);//today
    srand(4);
    int number = rand() % 80;
    cout << number;
    return 0;

}
*/


/*
    cout << "enter radius: ";
    double radius;
    cin >> radius;
    const double pi = 3.14;
    double area = pi * pow(radius,3,2);
    cout << area;
    return 0 ;
}*/

/*

int number = 1.4;
double price = 22.22;
float interestRate = 3.45f;
long fileSize = 90000L;
char letter = 'a';
bool isValid = false;

cout << number;
*/




