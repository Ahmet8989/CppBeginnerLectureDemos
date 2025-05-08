#include <iostream>

int addNumbers(int numberA, int numberB);

int main()
{
    int numberOne {3};  // Statement
    int numberSeven {5};
    int sumOne = numberOne + numberSeven;
    int SumSeven = addNumbers(23, 34);
    std::cout << "First total equals: " << sumOne << std::endl;
    std::cout << "The other sum equals: " << SumSeven << std::endl; 
    return 0;
}

int addNumbers(int numberA, int numberB)
{
    int result = numberA + numberB;
    return result;
}