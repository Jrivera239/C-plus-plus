#include <iostream>
#include <string>


int main (){
    std::cout <<"Hellow C++" << std::endl;

    int age {21};
    std::cout << "age : " << age << std::endl;
    std::cerr << "error message : something here " << std::endl;
    std::clog << " log message " << std::endl;

int age1;
// from #include <string> //
    std::string name;

    std:: cout <<" HOLA AGE HERE : " << std::endl;
    
    std::cin >> age1;
    std::cin >> name;

    std::cout << " Hello " << name << "you are" << age1 <<  "years old mamaye!" << std::endl;
    std::cerr << "comment error here" << std::endl;
    std::clog << " console log here" << std:endl;

    return 0;
}









