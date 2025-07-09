#include <iostream>
#include "myUtils.h"
#include <iomanip>
#include <typeinfo>
#include <ios>
#include <limits>
#include <cmath>
#include <bitset>
#include <ctime>
#include <vector>

void loopsDemosA()
{
    for(size_t i {}; i < 10; i++)
    {
        // size_t -> not a type, just a type alias for some unsigned int representations
        std::cout << "I love C++." << std::endl;
    }
}
void loopsDemosB()
{
    for(size_t i {}, x {5}, y {23}; y > 15; i++, x += 5, y -= 1)
    {
        // size_t -> not a type, just a type alias for some unsigned int representations
        std::cout << "i..: " << i <<", x..: " << x << ", y..: " << y << std::endl;
    }
}
void loopsDemosC()
{
    // Comma operator combines two or more expressions into a single expression
    int increment {5};
    int numberOne {10};
    int numberTwo {20};
    int numberThree {25};
    int result = (numberOne *= ++increment, numberTwo -= ++increment, numberThree += ++increment);
    std::cout << "Number One..: " << numberOne << std::endl;
    std::cout << "Number Two..: " << numberTwo << std::endl;
    std::cout << "Number Three..: " << numberThree << std::endl;
    std::cout << "Increment..: " << increment << std::endl;
    std::cout << "Result..: " << result << std::endl;
}
void loopsDemosD()
{
    int bagOfValues [] {1, 2, 3, 4, 5, 6, 7, 8,9, 10};
    for(int value : bagOfValues)
    {
        std::cout << "Value..: " << value << std::endl;
    }
}
void loopsDemosE()
{
    const unsigned int COUNT {10};
    unsigned int i {};
    while (i < COUNT)
    {
        std::cout << "I love C++ " << (i+1) << ". iteration." << std::endl;
        i++;
    }
}
void loopsDemosF()
{
    const unsigned int COUNT {10};
    unsigned int i {11};
    do{
        std::cout << "I love C++ " << std::endl;
        i++;
    } while(i < COUNT);
}
void loopsDemosG()
{
    char operation;
    double operandOne;
    double operandTwo;
    bool endCalculation {false};

    std::cout << "Welcome to the Calculator!" << std::endl;
    while(!endCalculation)
    {

        // DO SOME CALCULATION

        std::cout << "Continue ? (Y | N) : ";
        char goOn;
        std::cin >> goOn;

        endCalculation = ((goOn == 'Y') || (goOn == 'y')) ? false : true;

    }
}
void loopsDemosH()
{
    const size_t COUNT {5};
    for(size_t i {COUNT}; i > 0; i--)
    {
        std::cout << "i : " << i << std::endl;
    }
}
void loopsDemosI()
{
    const size_t ROWS {13};
    const size_t COLS {3};
    for(size_t row {0}; row <= ROWS; row++)
    {
        for (size_t col {}; col <= COLS; col++)
        {
            std::cout << " Row : " << std::setw(3) << row << " Col : " << std::setw(3) << col;
        }
        std::cout << std::endl;
    }
}
void loopsDemosJ()
{
    for(int i {0}; i < 15; i++)
    {
        if(i == 5)
        {
            continue;
        } 
        else if (i == 10)
        {
            break;
        }
        else 
        {
            std::cout << "Value..: " << i <<std::endl;
        }
    }
}
void loopsDemosK()
{
    int multiplierOne {6};
    for(int multiplierTwo {5}; int value : {1, 2, 3, 4, 5, 6, 7, 8, 9, 10})
    {
        std::cout << "New value..: " << (multiplierOne * value * multiplierTwo) << std::endl;
    }
}
void loopsDemosL()
{
    std::cout << "Enter a year..: ";
    unsigned int enteredYear {};
    std::cin >> enteredYear;

    std::cout << "Enter the first day of the year [1:Monday, ... 7: Sunday]..: ";
    unsigned int enteredFirstDay {};
    std::cin >> enteredFirstDay;

    std::cout << std::endl;
    std::cout << "Calender for " << enteredYear << std::endl;

    int numberOfDaysInAMonth = 0;
    unsigned int startingPoint {enteredFirstDay};
    unsigned int dayCounter {};
    unsigned int dateWidth {6};

    // Display calendar for each month
    for(int month = 1; month <= 12; month++)
    {
        // Print the title and get number of days in a month
        switch(month)
        {
            case 1:
                numberOfDaysInAMonth = 31;
                std::cout << "--January " << enteredYear << " --" << std::endl;
            break;
            case 2:
                if((enteredYear % 400 == 0) || ((enteredYear % 4 == 0) && (enteredYear % 100 != 0)))
                    numberOfDaysInAMonth = 29;
                else
                    numberOfDaysInAMonth = 28;
                std::cout << "--February " << enteredYear << " --" << std::endl;
            break;
            case 3:
                numberOfDaysInAMonth = 31;
                std::cout << "--March " << enteredYear << " --" << std::endl;
            break;
            case 4:
                numberOfDaysInAMonth = 30;
                std::cout << "--April " << enteredYear << " --" << std::endl;
            break;
            case 5:
                numberOfDaysInAMonth = 31;
                std::cout << "--May " << enteredYear << " --" << std::endl;
            break;
            case 6:
                numberOfDaysInAMonth = 30;
                std::cout << "--June " << enteredYear << " --" << std::endl;
            break;
            case 7:
                numberOfDaysInAMonth = 31;
                std::cout << "--July " << enteredYear << " --" << std::endl;
            break;
            case 8:
                numberOfDaysInAMonth = 31;
                std::cout << "--Augst " << enteredYear << " --" << std::endl;
            break;
            case 9:
                numberOfDaysInAMonth = 30;
                std::cout << "--September " << enteredYear << " --" << std::endl;
            break;
            case 10:
                numberOfDaysInAMonth = 31;
                std::cout << "--October " << enteredYear << " --" << std::endl;
            break;
            case 11:
                numberOfDaysInAMonth = 30;
                std::cout << "--November " << enteredYear << " --" << std::endl;
            break;
            case 12:
                numberOfDaysInAMonth = 31;
                std::cout << "--December " << enteredYear << " --" << std::endl;
            break;
        }

        //Print day header. Make sure each date takes up date_width characters
        std::cout<< std::setw(dateWidth) << "Mon" 
                 << std::setw(dateWidth) << "Tue" 
                 << std::setw(dateWidth) << "Wed" 
                 << std::setw(dateWidth) << "Thu"
                 << std::setw(dateWidth) << "Fri"
                 << std::setw(dateWidth) << "Sat"
                 << std::setw(dateWidth) << "Sun" << std::endl;

        //Print empty day slots in calendar
        for(unsigned int j{1};j < startingPoint; ++j)
        {
            std::cout << std::setw(dateWidth) <<  "";
            ++dayCounter;
            if(dayCounter == 7)
            {
                std::cout << std::endl; // Move to the next week
                dayCounter = 0;
            }
        }

        //Print actual days in the calendar
        for(unsigned int i{1} ; i <= numberOfDaysInAMonth; ++i)
        {
            std::cout << std::setw(dateWidth) << i;
            ++dayCounter;

            if(dayCounter == 7)
            {
                std::cout << std::endl;
                dayCounter = 0;
            }
        }

        //Do the set up for the next month
        startingPoint = dayCounter + 1;
        dayCounter = 0;
        std::cout <<  "\n\n";
    }
}
