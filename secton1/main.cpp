#include <iostream>
/*
int main() {
// note to self, compile time error are gramatical error such as missing a (;) at the end or a ( () )  for example
    std::cout << "Hello Mundo!" << std::endl;

    return 0;
}
*/

/*
int addNumbers (int first_number, int second_number){
    int sum = first_number + second_number;
    return sum;
}

int main (int argc, char *argv)
{
    int firstNumber = 11;
    int secondNumber = 58;

    int sum = firstNumber + secondNumber;

    sum = addNumbers (firstNumber,secondNumber);

    sum = addNumbers(34,7);

    std:: cout << "The sum of the two numbers is : " << sum <<std:: endl;
    std:: cout << "The sum of the two numbers is : " << addNumbers (32,12) << std::endl;
    return 0;
}
*/

int addNumbers ( int first_param, int second_param){

    int result = first_param + second_param;
    return result;
}




    int main (){
    int first_number {6};
    int second_number {9};

    std::cout <<"first number : " <<first_number << std::endl;
    std::cout <<"second number : " <<second_number <<std::endl;

    int sum = first_number + second_number;
    std::cout << " sum : " << sum << std::endl;

    sum = addNumbers(25,9);



    return 0;
}

































