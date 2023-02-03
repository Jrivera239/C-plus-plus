#include <iostream>

int main (){

int elephant_count;
int apple_count{};
int lion_count{10};
int dog_count {12};
int orange_count{55};
int fruit_count (apple_count + orange_count);
int domesticated_animals {dog_count + orange_count };
double  numbers = 2.2; //gives exact number //
int  numbers1 = 2.2; //gives you the whole number not nearest //



std:: cout << "apples: " << apple_count << std::endl;
std:: cout << "lions: " <<lion_count << std::endl;
std:: cout << "dogs and oranges: " <<  orange_count + dog_count  << std::endl;
std:: cout << "fragment numbers using 'double':" << numbers << std::endl;
std:: cout << "fragment numbers using 'int':" << numbers1 << std::endl;

// int use about 4 byts //




return 0 ;
}