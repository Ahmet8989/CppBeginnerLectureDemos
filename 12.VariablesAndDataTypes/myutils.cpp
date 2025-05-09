#include <iostream>
#include "myutils.h"
#include <iomanip>
#include <typeinfo>

void testNumberSystems()
{
    int numberOne = 15;          // Decimal 
    int numberTwo = 017;         // Octal 
    int numberThree = 0x0f;      // Hexadecimal 
    int numberFour = 0b00001111; // Binary - C++14

    std::cout << "Number 1 is (Decimal - 15)..: " << numberOne << std::endl;
    std::cout << "Number 2 is (Octal - 017)..: " << numberTwo << std::endl;
    std::cout << "Number 3 is (Hexadecimal - 0x0f)..: " << numberThree << std::endl;
    std::cout << "Number 4 is (Binary - 0b00001111)..: " << numberFour << std::endl;
}
void addSeperator()
{
    std::cout << "\n================================\n" << std::endl;
}
void testDecimalsAndIntegers()
{
    // Braced Initialization -> typename variable_name {initializer_value};
    int elephant_count; // Warning: Variable may contain random garbage value 
    int lion_count{}; // Initializes to zero 
    int dog_count {10}; // Initializes to 10
    int cat_count {15}; // Initializes to 15
    int domesticated_animals {dog_count + cat_count}; // Can use expression as initializer
    // int bad_initialization {doesnt_exist_one + doesnt_exist_two}; -> Won't compile, the expression in the braces uses undeclared variables
    // int narrowing_conversion {2.7}; ->  2.7 is of type double, with a wider range than int (Error or warning)

    std::cout << "Elephant count is..: " << elephant_count << std::endl;
    std::cout << "Lion count is..: " << lion_count << std::endl;
    std::cout << "Dog count is..: " << dog_count << std::endl;
    std::cout << "Cat count is..: " << cat_count << std::endl;
    std::cout << "Domesticated animal count is..: " << domesticated_animals << std::endl;

    // Functional Initialization -> int apple_count (5);
    // Assignment Initialization -> int truck_count = 7;
    std::cout << "Size of (int), (sizeof()) equals..: " << sizeof(int) <<  " bytes." << std::endl;
}
void testIntegerModifiers()
{
    std::cout << "Size of (short) type variable..: " << sizeof(short) << " bytes.\n" << std::endl;
    std::cout << "Size of (short int) type variable..: " << sizeof(short int) << " bytes.\n" << std::endl;
    std::cout << "Size of (signed short) type variable..: " << sizeof(signed short) << " bytes.\n" << std::endl;
    std::cout << "Size of (signed short int) type variable..: " << sizeof(signed short int) << " bytes.\n" << std::endl;
    std::cout << "Size of (unsigned short int) type variable..: " << sizeof(unsigned short int) << " bytes.\n" << std::endl;
    std::cout << "*****\n\n\n" << std::endl;
    std::cout << "Size of (int) type variable..: " << sizeof(int) << " bytes.\n" << std::endl;
    std::cout << "Size of (signed) type variable..: " << sizeof(signed) << " bytes.\n" << std::endl;
    std::cout << "Size of (signed int) type variable..: " << sizeof(signed int) << " bytes.\n" << std::endl;
    std::cout << "Size of (unsigned int) type variable..: " << sizeof(unsigned int) << " bytes.\n" << std::endl;
    std::cout << "*****\n\n\n" << std::endl;
    std::cout << "Size of (long) type variable..: " << sizeof(long) << " bytes.\n" << std::endl;
    std::cout << "Size of (long int) type variable..: " << sizeof(long int) << " bytes.\n" << std::endl;
    std::cout << "Size of (signed long) type variable..: " << sizeof(signed long) << " bytes.\n" << std::endl;
    std::cout << "Size of (signed long int) type variable..: " << sizeof(signed long int) << " bytes.\n" << std::endl;
    std::cout << "Size of (unsigned long int) type variable..: " << sizeof(unsigned long int) << " bytes.\n" << std::endl;
    std::cout << "*****\n\n\n" << std::endl;
    std::cout << "Size of (long long) type variable..: " << sizeof(long long) << " bytes.\n" << std::endl;
    std::cout << "Size of (long long int) type variable..: " << sizeof(long long int) << " bytes.\n" << std::endl;
    std::cout << "Size of (signed long long) type variable..: " << sizeof(signed long long) << " bytes.\n" << std::endl;
    std::cout << "Size of (signed long long int) type variable..: " << sizeof(signed long long int) << " bytes.\n" << std::endl;
    std::cout << "Size of (unsigned long long int) type variable..: " << sizeof(unsigned long long int) << " bytes.\n" << std::endl;
}
void testFractionalNumbers()
{
    float numberOne  {5.4564564f};
    double numberTwo {5.456456456456456};
    long double numberThree {5.456456456456456456456L};
    double numberFour  {5.9230023e8};
    double numberFive  {5.9230023e-8};
    std::cout << std::fixed << std::setprecision(4) << "Number one (float variable)..: " << numberOne << "\n" << std::endl;
    std::cout << std::fixed << std::setprecision(7) << "Number two (double variable)..: " << numberTwo << "\n" << std::endl;
    std::cout << std::fixed << std::setprecision(14) << "Number threee (long double variable)..: " << numberThree << "\n"<< std::endl;
    std::cout << std::fixed << std::setprecision(10) << "Number four (double variable)..: " << numberFour << "\n" << std::endl;
    std::cout << std::fixed << std::setprecision(10) << "Number five (double variable)..: " << numberFive << "\n" << std::endl;
    std::cout << "*****\n\n\n" << std::endl;
    std::cout << "Size of (float) type variable..: " << sizeof(float) << " bytes.\n" << std::endl;
    std::cout << "Size of (double) type variable..: " << sizeof(double) << " bytes.\n" << std::endl;
    std::cout << "Size of (long double) type variable..: " << sizeof(long double) << " bytes.\n" << std::endl;
}
void testBooleans()
{
    bool red_light = false;
    bool green_light = true; 
    if(green_light)
    {
        std::cout << "Goooo!\n" << std::endl;
    }
    if (!red_light)
    {
        std::cout << "Goooo!\n" << std::endl;
    }
    std::cout << "Situation of green light is..: " << green_light << "!\n" << std::endl;
    std::cout << std::boolalpha << "Situation of green light is..: " << green_light << "!\n" << std::endl;
    // std::boolalpha -> forces the output format to true or false
    std::cout << "Size of a (bool) variable equals..: " << sizeof(bool) << " byte.\n" << std::endl;
}
void testCharactesAndTexts()
{
    char charOne {'a'};
    char charTwo {'r'};
    char charThree {'r'};
    char charFour {'o'};
    char charFive {'w'};
    char charSix {65};

    std::cout << "Character One is..: " << charOne << "!\n" << std::endl;
    std::cout << "Character Two is..: " << charTwo << "!\n" << std::endl;
    std::cout << "Character Three is..:" << charThree << "!\n" << std::endl;
    std::cout << "Character Four is..: " << charFour << "!\n" << std::endl;
    std::cout << "Character Five is..: " << charFive << "!\n" << std::endl;
    std::cout << "Character Six is..: " << charSix << "! (even though we write 65)\n" << std::endl;
}
void testAuto()
{
    auto variableOne {13};
    auto variableTwo {13.0};
    auto variableThree {13.0f};
    auto variableFour {13.0l};
    auto variableFive {'e'};
    auto variableSix {13u};
    auto variableSeven {13ul};
    auto variableEight {13ll};

    std::cout << "Variable one: " << variableOne << ", type: " << typeid(variableOne).name() << "\n" << std::endl;
    std::cout << "Variable two: " << variableTwo << ", type: " << typeid(variableTwo).name() << "\n" << std::endl;
    std::cout << "Variable three: " << variableThree << ", type: " << typeid(variableThree).name() << "\n" << std::endl;
    std::cout << "Variable four: " << variableFour << ", type: " << typeid(variableFour).name() << "\n" << std::endl;
    std::cout << "Variable five: " << variableFive << ", type: " << typeid(variableFive).name() << "\n" << std::endl;
    std::cout << "Variable six: " << variableSix << ", type: " << typeid(variableSix).name() << "\n" << std::endl;
    std::cout << "Variable seven: " << variableSeven << ", type: " << typeid(variableSeven).name() << "\n" << std::endl;
    std::cout << "Variable eight: " << variableEight << ", type: " << typeid(variableEight).name() << "\n" << std::endl;
    std::cout << "*****\n\n\n" << std::endl;
    std::cout << "Variable one: " << variableOne << ", size: " << sizeof(variableOne)<< "\n" << std::endl;
    std::cout << "Variable two: " << variableTwo << ", type: " << sizeof(variableTwo) << "\n" << std::endl;
    std::cout << "Variable three: " << variableThree << ", type: " << sizeof(variableThree) << "\n" << std::endl;
    std::cout << "Variable four: " << variableOne << ", size: " << sizeof(variableFour)<< "\n" << std::endl;
    std::cout << "Variable five: " << variableOne << ", size: " << sizeof(variableFive)<< "\n" << std::endl;
    std::cout << "Variable six: " << variableOne << ", size: " << sizeof(variableSix)<< "\n" << std::endl;
    std::cout << "Variable seven: " << variableOne << ", size: " << sizeof(variableSeven)<< "\n" << std::endl;
    std::cout << "Variable eight: " << variableOne << ", size: " << sizeof(variableEight)<< "\n" << std::endl;
}
