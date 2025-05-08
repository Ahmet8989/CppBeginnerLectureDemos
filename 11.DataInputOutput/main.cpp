#include <iostream>
#include <string>
#include <limits>

int main()
{
    // std:: cout -> Printing data to the console (terminal) 
    // std::cin   -> Reading data from the terminal
    // std::cerr  -> Printing errors to the console 
    // std::clog  -> Printing log messages to the console 
    std::cerr << "std::cerr output : Something went wrong" << std::endl;
    std::clog << "std::clog output : This is log message" << std::endl;
    int age;
    std::string name;
    std::string fullName;
    std::string country;
    std::cout << "Please enter your name and age, seperated by spaces: " << std::endl;
    std::cin >> name >> age; //Input name and age (chaining)
    std::cout << "Hello " << name << "! You are " << age << " years old" << std::endl;
    // If we want to save the entered data in a single variable even if it was seperated by spaces
    std::cout << "Please type in your full name..: " << std::endl;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::getline(std::cin, fullName);
    std::cout << "Hello, " << fullName << std::endl;
    std::cout << "Where do you live?" << std::endl;
    std::cin >> country;
    std::cout << "I've heard great things about " << country << ". I'd like to go sometime." << std::endl;
    return 0;
}