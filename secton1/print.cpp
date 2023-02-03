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
/*
    std:: cout <<" HOLA AGE HERE : " << std::endl;
    
    std::cin << age1 << "age here" ;
    std::cin << name << "name here" ;

    std::cout << " Hello " << name << "you are" << age1 <<  "years old mamaye!" << std::endl;
    std::cerr << "comment error here" << std::endl;
    std::clog << " console log here" << std::endl;
*/
    return 0;
}




int planets() {
  
double weight;
int x;

std::cout << "Enter your current earth weight: " ;
std::cin >> weight;

std::cout << "\nI have information for he following planets:\n";
std::cout << " 1. Venus   2. Mars    3. Jupiter \n";
std::cout << " \n4. Saturn  5. Uranus  6. Neptune\n";
std::cout << "which planet are you visiting from";
std::cin >> x;

if (x==1) {
  weight = weight* 0.78;
} else if (x==2) {
  weight = weight * 0.39;
} else if (x==3) {
  weight = weight * 2.65;
} else if (x==4) {
  weight = weight * 1.17;
} else if (x==5) {
  weight = weight * 1.05;
} else if (x==6) {
  weight = weight * 1.23;
}
  
  std::cout <<"\nYour weight: " <<weight << "\n";
}







