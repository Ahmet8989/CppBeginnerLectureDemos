#include <iostream>
#include "myUtils.h"
#include <iomanip>
#include <typeinfo>
#include <ios>
#include <limits>
#include <cmath>

void testBasicOperations()
{
    // Precedence: which operation to do first 
    // Associativity: which direction or which order 
    // and -> &&, or -> ||, not -> !
    int numberOne = 30;
    int numberTwo = 50;

    int sumOne = numberOne + numberTwo;
    int diffOne = numberOne - numberTwo ;
    int productOne = numberOne * numberTwo;
    int quotientOne = numberOne / numberTwo;
    int modulusOne = numberOne % numberTwo;

    std::cout << "The sum one equals the..: " << sumOne << std::endl;
    std::cout << "The difference one equals the..: " << diffOne << std::endl;
    std::cout << "The product one equals the..: " << productOne << std::endl;
    std::cout << "The quotient one equals the..: " << quotientOne << std::endl;
    std::cout << "The modulus one equals the..: " << modulusOne << std::endl;
}
void testBasicOperationsB()
{
    int value {5};
    std::cout << "New incremented value equals..: " << value++ << std::endl;
    std::cout << "New incremented value equals..: " << ++value << std::endl;
}
void testBasicOperationsC()
{
    int newValueA {10};
    int newValueB {7};

    newValueA += newValueB;
    std::cout << "New value equals..: " << newValueA << std::endl;
    newValueA -= newValueB;
    std::cout << "New value equals..: " << newValueA << std::endl;
    newValueA *= newValueB;
    std::cout << "New value equals..: " << newValueA << std::endl;
    newValueA /= newValueB;
    std::cout << "New value equals..: " << newValueA << std::endl;
    newValueA %= newValueB;
    std::cout << "New value equals..: " << newValueA << std::endl;
}
void testBasicOperationsD()
{
    // Output Formatting 
    // std::endl     -> print new line character
    // std::flush    -> causes immediate sending of data to the device connected to the stream
    // std::setw()   -> it determines witdh of the data to be printed 
    // std::right    -> right justified
    // std::internal -> internal justified
    // std::setfill('*') -> fill the spaces with specified character
    // std::boolalpha -> forces to print the screen true or false
    // std::showpos -> if number is positive (+) character printed
    // std::noshowpos      -> disable the std::showpos
    // std::dec, std::hex, std::oct -> they show yhe numbers in different bases
    // std::showbase       -> show the base of the number
    // std::setprecision() -> set the floating point number precision
    // #include <limits>
    // std::numeric_limits<short>::max()    -> shows the possible maximum value of intended type
    // std::numeric_limits<short>::min()    -> shows the possible minimum value of intended type
    // std::numeric_limits<short>::lowest() -> shows the possible lowest value of intended type
    
}
void testBasicOperationsE()
{
    // #include <cmath>
    // Integral types less than 4 bytes in size don't support arithmatic operations
    // Such as (char, short int)
    std::cout << std::floor(4.7) << std::endl;
    std::cout << std::ceil(4.3) << std::endl;
    std::cout << std::abs(-4.7) << std::endl;
    std::cout << std::round(4.987654) << std::endl;
    std::cout << std::sin(45) << std::endl;
    std::cout << std::cos(45) << std::endl;
    std::cout << std::tan(45) << std::endl;
    std::cout << std::exp(4) << std::endl; // e to the power of 4
    std::cout << std::pow(4, 3) << std::endl;
    std::cout << std::log(54.59) << std::endl; // log function in base e
    std::cout << std::log10(10000) << std::endl; // log function in base 10
    std::cout << std::sqrt(64) << std::endl;
}
void testBasicOperationsF()
{
    double celsiusDegree {0};
    double fahrenheitDegree {0};
    std::cin >> celsiusDegree;
    fahrenheitDegree = ((9.0 / 5) * celsiusDegree) + 32;
    std::cout << celsiusDegree << " Celsius is " << fahrenheitDegree << " Fahrenheit." << std::endl;
}
void testBasicOperationsG()
{
    std::cout << "Welcome to box calculator. Please type in length, width, height information..: " << std::endl;
    double length {0};
    double width {0};
    double height {0};
    std::cout << "Length..: ";
    std::cin>> length;
    std::cout << "Width..: ";
    std::cin>> width;
    std::cout << "Height..: ";
    std::cin>> height;

    double base_area = length * width;
    double volume = height * base_area;

    std::cout << "The base area is..: " << base_area << std::endl;
    std::cout << "The volume is..: " << volume << std::endl;
}