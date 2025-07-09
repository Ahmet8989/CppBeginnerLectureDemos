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

void testControlFlowDemos()
{
    int numberOne {55};
    int numberTwo {60};
    bool red {false};
    bool green {true};
    bool yellow{false};
    bool police_stop {false};
    
    bool result = (numberOne < numberTwo);
    std::cout << std::boolalpha << "Result equals..: " << result << std::endl;

    if (result) {
        std::cout << numberOne << " is less than " << numberTwo << std::endl;
    }
    if (!(result)) {
        std::cout << numberOne << " is NOT less than " << numberTwo << std::endl;
    }
    if (result) {
        std::cout << numberOne << " is less than " << numberTwo << std::endl;
    } else {
        std::cout << numberOne << " is less than " << numberTwo << std::endl;
    }

    if(green){
        if(police_stop){
            std::cout << "STOP" << std::endl;
        }
        else {
            std::cout << "GO" << std::endl;
        }
    }

    if(green && !(police_stop)){
        std::cout << "GO" << std::endl;
    }
    else {
            std::cout << "STOP" << std::endl;
    }
}
void testControlFlowDemosB()
{
    const int Pen {10};
    const int Marker {20};
    const int Eraser {30};
    const int Rectangle {40};
    const int Circle {50};
    const int Ellipse {60};

    int tool {Ellipse};

    if (tool == Pen) {
        std::cout << "Active tool is pen.." << std::endl;
    }
    else if (tool == Marker) {
        std::cout << "Active tool is marker.." << std::endl;
    }
    else if (tool == Eraser) {
        std::cout << "Active tool is eraser.." << std::endl;
    }
    else if (tool == Rectangle) {
        std::cout << "Active tool is rectangle.." << std::endl;
    }
    else if (tool == Circle) {
        std::cout << "Active tool is circle.." << std::endl;
    }
    else if (tool == Ellipse) {
        std::cout << "Active tool is ellipse.." << std::endl;
    }
}
void testControlFlowDemosC()
{
    const int Pen {10};
    const int Marker {20};
    const int Eraser {30};
    const int Rectangle {40};
    const int Circle {50};
    const int Ellipse {60};

    int tool {Ellipse};

    switch (tool) {
        case Pen: {
            std::cout << "Active tool is pen.." << std::endl;
        }
        break;
        case Marker: {
            std::cout << "Active tool is marker.." << std::endl;
        }
        break;
        case Eraser: {
            std::cout << "Active tool is eraser.." << std::endl;
        }
        break;
        case Rectangle: {
            std::cout << "Active tool is rectangle.." << std::endl;
        }
        break;
        case Circle: {
            std::cout << "Active tool is circle.." << std::endl;
        }
        break;
        case Ellipse: {
            std::cout << "Active tool is ellipse.." << std::endl;
        }
        break;
        default: {
            std::cout << "Can't match any tools.." << std::endl;
        }
    }
}
void testControlFlowDemosD()
{
    // Short Circuit Evaluations
    bool a {true};
    bool b {true};
    bool c {true};
    bool d {false};

    bool p {false};
    bool q {false};
    bool r {false};
    bool m {true};

    // AND : If one of the operand is 0, the result is 0.
    std::cout << "AND short circuit..: " << std::endl;
    bool result = a && b && c && d;
    std::cout << "Result..: " << std::boolalpha << result << std::endl;

    // OR : If one of the operand is 1, the result is 1.
    std::cout << "OR short circuit..: " << std::endl;
    result = p || q || r || m;
    std::cout << "Result..: " << std::boolalpha << result << std::endl;
}
void testControlFlowDemosE()
{
    // Ternary Operators
    // result = (condition) ? optionOne : optionTwo;
    int max {};
    int a {35};
    int b {20};

    max = (a > b) ? a : b;
    std::cout << "Max number..: " << max << std::endl;
}
void testControlFlowDemosF()
{
    // (If constexpr) -> It will be done in compile time
    constexpr bool conditionOne {false};
    if constexpr (conditionOne){
        std::cout << "Condition is true.." << std::endl;
    } else{
        std::cout << "Condition is false.." << std::endl;
    }
}
void testControlFlowDemosG()
{
    // If with initializer
    // You can't reach the speed variable outside from the if block
    bool go {false};
    if(int speed {10}; go)
    {
        std::cout << "Speed..: " << speed << std::endl;
        if (speed > 5)
        {
            std::cout << "Slow down!" << std::endl;
        } else {
            std::cout << "All good!" << std::endl;
        }
        
    }else {
        std::cout << "Speed..: " << speed << std::endl;
        std::cout << "STOP..." << speed << std::endl;
    }
}
void testControlFlowDemosH()
{
    //Switch with initializer
    const int Pen {10};
    const int Marker {20};
    const int Eraser {30};
    const int Rectangle {40};
    const int Circle {50};
    const int Ellipse {60};

    int tool {Eraser};

    switch (double strength {3.56}; tool)
    {
        case Pen: {
            std::cout << "Active tool is pen.. Strength..: " <<  strength << std::endl;
        }
        break;
        case Marker: {
            std::cout << "Active tool is marker.. Strength..: " << strength << std::endl;
        }
        break;
        case Eraser: {
            std::cout << "Active tool is eraser.. Strength..: " << strength << std::endl;
        }
        break;
        case Rectangle: {
            std::cout << "Active tool is rectangle.. Strength..: " << strength << std::endl;
        }
        break;
        case Circle: {
            std::cout << "Active tool is circle.. Strength..: " << strength << std::endl;
        }
        break;
        case Ellipse: {
            std::cout << "Active tool is ellipse.. Strength..: " << strength << std::endl;
        }
        break;
        default: {
            std::cout << "Can't match any tools.. Strength..: " << strength << std::endl;
        }
    }

}
void testControlFlowDemosI()
{
    std::cout << "Please type in an integer value..: " << std::endl;
    int enteredValue;
    std::cin >> enteredValue;
    std::cout << std::endl;
    if(enteredValue % 2 == 0)
    {
        std::cout << enteredValue << " is even." << std::endl;
    } else {
        std::cout << enteredValue << " is odd." << std::endl;
    }
}
void testControlFlowDemosJ()
{
    std::cout << "Please type in your age..: " << std::endl;
    int enteredValue;
    std::cin >> enteredValue;
    if(enteredValue < 21)
    {
        std::cout << "Sorry, you are too young for treatment." << std::endl;
    } 
    else if (enteredValue < 39)
    {
        std::cout << "Sorry, you are too old for treatment." << std::endl;
    }
    else 
    {
        std::cout << "You are eligible for treatment." << std::endl;
    }
}
void testControlFlowDemosK()
{
    std::cout << "Which day is today [1 : Monday,...,  7 : Sunday]..: " << std::endl;
    int today;
    std::cin >> today;
    if((today< 1 )|| (today > 7))
    {
        std::cout << today << " is not a valid day." << std::endl;
    }
    else if(today == 1){
        std::cout << "Today is Monday." ;
    }else if(today == 2){
        std::cout << "Today is Tuesday.";
    }else if(today == 3){
        std::cout << "Today is Wednesday.";
    }else if(today == 4){
        std::cout << "Today is Thursday.";
    }else if(today == 5){
        std::cout << "Today is Friday." ;
    }else if(today == 6){
        std::cout << "Today is Saturday." ;
    }else{
        std::cout << "Today is Sunday.";
    }
}
void testControlFlowDemosL()
{
    std::cout << "Which day is today [1 : Monday,...,  7 : Sunday] : " << std::endl;
    int today, passed_days;
    std::cin >> today;

    if((today< 1 )|| (today > 7)){
        std::cout << today << " is not a valid day." << std::endl;
    }

    std::cout << "How many days have passed up to today : " << std::endl;
    std::cin >> passed_days;

    if(today == 1){
        std::cout << "Today is Monday" << std::endl;
    }else if(today == 2){
        std::cout << "Today is Tuesday" << std::endl;
    }else if(today == 3){
        std::cout << "Today is Wednesday" << std::endl;
    }else if(today == 4){
        std::cout << "Today is Thursday" << std::endl;
    }else if(today == 5){
        std::cout << "Today is Friday" << std::endl;
    }else if(today == 6){
        std::cout << "Today is Saturday" << std::endl;
    }else{
        std::cout << "Today is Sunday" << std::endl;
    }

   int remainder_days = (passed_days %7);
  
   int searched_day = today - remainder_days;

   if(searched_day < 0){
       std::cout << "You did not enter valid number." << std::endl;
   }

    //We then print the day in the past
   std::cout << "If we went " << passed_days << " days in the past we would hit a ";
    if(searched_day == 1){
        std::cout << "Monday" << std::endl;
    }else if(searched_day == 2){
        std::cout << "Tuesday" << std::endl;
    }else if(searched_day == 3){
        std::cout << "Wednesday" << std::endl;
    }else if(searched_day == 4){
        std::cout << "Thursday" << std::endl;
    }else if(searched_day == 5){
        std::cout << "Friday" << std::endl;
    }else if(searched_day == 6){
        std::cout << "Saturday" << std::endl;
    }else{
        std::cout << "Sunday" << std::endl;
    }
}
void testControlFlowDemosM()
{
    std::cout << "Please type in x value..: " << std::endl;
    double x;
    std::cin >> x;
    std::cout << "Please type in y value..: " << std:: endl;
    double y;
    std::cin >> y;
    if (((x < 10) && (x > -10)) && ((y < 5) && (y > -5)))
    {
        std::cout << "You are in the rectangle" << std::endl;
    } else 
    {
        std::cout << "You are not in the rectangle" << std::endl;
    }
}
