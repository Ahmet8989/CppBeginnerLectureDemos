#include <iostream>
#include "myUtils.h"
#include <iomanip>
#include <typeinfo>
#include <ios>
#include <limits>
#include <cmath>

void testDataConversionDemos()
{
    double x {45.6};
    double y {34.6};

    int sumOne = x + y;
    int sumTwo = static_cast<int>(x) + static_cast<int>(y);

    std::cout << "First sum then cast equals..: " << sumOne << std::endl;
    std::cout << "First cast then sum equals..: " << sumTwo <<std::endl; 
}
void testDataConversionDemosB()
{
    unsigned char char_var {55};
    unsigned char valueOne {134};
    unsigned char valueTwo {135};

    char_var = valueOne + valueTwo;
    std::cout << "Overflow example (134 + 135) equals..: " << static_cast<int>(char_var) << std::endl;
}
void testDataConversionDemosC()
{
    unsigned char char_var {55};
    unsigned char valueOne {134};
    unsigned char valueTwo {135};

    char_var = valueOne - valueTwo;
    std::cout << "Underflow example (134 + 135) equals..: " << static_cast<int>(char_var) << std::endl;
}