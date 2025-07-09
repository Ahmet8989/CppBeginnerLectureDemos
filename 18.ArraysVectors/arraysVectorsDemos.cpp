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

void arraysVectorsDemosA()
{
    // You can collect same type elements in array
    int scores[10];
    scores[0] = 5;
    scores[1] = 15;
    scores[2] = 25;
    scores[3] = 35;
    scores[4] = 45;
    scores[5] = 55;
    scores[6] = 65;
    scores[7] = 75;
    scores[8] = 85;
    scores[9] = 95;
    for(int i {}; i < 10; i++)
    {
        scores[i] = scores[i] * 3;
    }
    for(int i {}; i < 10; i++)
    {
        std::cout << "Scores[" << i << "]..: " << scores[i] << std::endl;
    }
}
void arraysVectorsDemosB()
{
    // Leaving some elements un-initialized
    double salaries[7] {13.7, 7.5, 13.4, 8.3, 9.5};
    for(int i {}; i < 7; i++)
    {
        std::cout << "Salaries[" << i << "]..: " << salaries[i] << std::endl;
    }
}
void arraysVectorsDemosC()
{
    // Constant arrays can't be modified
    const int numbers[5] {5, 6, 7, 8, 9};
    for(int i {}; i < 7; i++)
    {
        std::cout << "Numbers[" << i << "]..: " << numbers[i] << std::endl;
    }
}
void arraysVectorsDemosD(int numbers[], unsigned int collection_size)
{
    int unique_data [20];
    unsigned int unique_counter{};
   
    for(unsigned int i{}; i < collection_size; i++)
    {
        bool already_in{false};
       
        for(unsigned int j{};j < unique_counter; ++j){
            if(unique_data[j] == numbers[i])
            {
                
                already_in = true;
                break;
            }
        }
       
        if(!already_in){
            unique_data[unique_counter++] = numbers[i];
        }
    }
   
   std::cout << "The collection contains " << unique_counter << " unique numbers, they are : ";
   
   for(unsigned int i{};i < unique_counter ; ++i){
       std::cout << unique_data[i] << " ";
   }
}
void arraysVectorsDemosE()
{
    int scores[] {10, 12, 15, 13, 17, 18, 22, 23, 24};
    std::cout << "Size scores array : " << std::size(scores) << std::endl;
    for(size_t i {}; i < std::size(scores); i++)
    {
        std::cout << "Scores[" << i << "]..: " << scores[i] << std::endl;
    }
}
void arraysVectorsDemosF()
{
    char message[] {'H', 'E', 'L', 'L', 'O', '\0'};
    char message2[6] {'H', 'E', 'L', 'L', 'O'};
    char message3[] {"HELLO"};
    std::cout << "Message..: " << message << std::endl;
    std::cout << "Message..: " << message2 << std::endl;
    std::cout << "Message..: " << message3 << std::endl;
}
void arraysVectorsDemosG()
{
    int randomNumber = std::rand(); // generates a number between 0 and RAND_MAX
    std::cout << "Random number..: " << randomNumber << std::endl;

    randomNumber = std::rand();
    std::cout << "Random number..: " << randomNumber << std::endl;

    std::cout << "RAND_MAX equals..: " << RAND_MAX << std::endl;
}
void arraysVectorsDemosH()
{
    // Range [0~10] : what you % with controls the upper bound

    int randomNumber = std::rand() % 11; // will be between [0-10]
    std::cout << "Random number..: " << randomNumber << std::endl;

    randomNumber = (std::rand() % 15) + 3; // will be between [3-17]
    std::cout << "Random number (3-17)..: " << randomNumber << std::endl;

    std::srand(std::time(0));
    randomNumber = std::rand();
    std::cout << "Random (SEED) number..: " << randomNumber << std::endl;

    for(size_t i {}; i < 35; i++)
    {
        randomNumber = std::rand() % 11; // will be between [0-10]
        std::cout << "Random number..: " << randomNumber << std::endl;
    }
}
void arraysVectorsDemosI(int array_1[], int array_2[])
{
    //
    int conjunctionTotal {};
    int commonData[10];
    for(int i {}; i < 10; i++)
    {
        for(int j{}; j < 10; j++)
        {
            if(array_1[i] == array_2[j])
            {
                commonData[conjunctionTotal] = array_2[j];
                conjunctionTotal += 1;
                break;
            }
        }
    }
    if(conjunctionTotal == 0)
    {
        std::cout << "There are 0 common elements";
    }
    if(conjunctionTotal > 0)
    {
        std::cout << "There are " << conjunctionTotal << " common elements they are : ";
    }
    for(int i {}; i < conjunctionTotal; i++)
    {
        std::cout << commonData[i] << " ";
    }
}
void arraysVectorsDemosJ()
{
    int packages [4][4]; // Occupies 48 bytes in memory
    std::cout << "Size of packages..: " << sizeof(packages) << std::endl;
    // Packages contains 4 items, each of which contains 3 items.
    std::cout << "Element count in packages..: " << std::size(packages) << std::endl;
    packages [0][0] = 3;
    packages [0][1] = 5;
    packages [0][2] = 7;
    packages [0][3] = 9;
    packages [1][0] = 3;
    packages [1][1] = 5;
    packages [1][2] = 7;
    packages [1][3] = 9;
    packages [2][0] = 3;
    packages [2][1] = 5;
    packages [2][2] = 7;
    packages [2][3] = 9;
    packages [3][0] = 3;
    packages [3][1] = 5;
    packages [3][2] = 7;
    packages [3][3] = 9;

    
    for(size_t i {}; i < std::size(packages); i++)
    {
        for(size_t j {}; j < std::size(packages[i]); j++)
        {
            std::cout << "Item [" << i << "][" << j << "]..: " << packages[i][j] << " " << std::endl;
        }
        std::cout << std::endl;
    }
}
void arraysVectorsDemosK()
{
    int packages2 [4][3] {
        {4, 2, 3},
        {4, 5, 6},
        {5, 6, 7},
        {7, 8, 10}
    };
    for(size_t i {}; i < std::size(packages2); i++)
    {
        for(size_t j {}; j < std::size(packages2[i]); j++)
        {
            std::cout << "Item [" << i << "][" << j << "]..: " << packages2[i][j] << " " << std::endl;
        }
        std::cout << std::endl;
    }
}
void arraysVectorsDemosL()
{
    int houseBlock [7][5][3]
    {
        {
            {1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 14}, {13, 12, 15}
        },
        {
            {1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 14}, {13, 12, 15}
        },
        {
            {1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 14}, {13, 12, 15}
        },
        {
            {1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 14}, {13, 12, 15}
        },
        {
            {1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 14}, {13, 12, 15}
        },
        {
            {1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 14}, {13, 12, 15}
        },
        {
            {1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 14}, {13, 12, 15}
        }
    };
    for(size_t i {}; i < std::size(houseBlock); i++)
    {
        for(size_t j {}; j < std::size(houseBlock[i]); j++)
        {
            std::cout << "[";
            for(size_t k {}; std::size(houseBlock[i][j]); k++)
            {
                std::cout << houseBlock[i][j][k] << " ";
            }
            std::cout << "] ";
        }
        std::cout << std::endl;
        std::cout << std::endl;
    }
}
void arraysVectorsDemosM()
{
    char enteredOption {};
    while(enteredOption != 'n')
    {
        std::cout << "Welcome to the greatest calculator on earth!" << std::endl;
        std::srand(std::time(0));
        int randomNumberOne = std::rand() % 200;
        int randomNumberTwo = std::rand() % 200;
        int operatorPicker = std::rand() % 3;
        char operatorList[4] {'+', '-', '*'};
        std::cout << "What is the result of " << randomNumberOne << " " << operatorList[operatorPicker] << " " << randomNumberTwo << " : ";
        int enteredGuess {};
        int answerOne {};
        std::cin >> enteredGuess;
        if(operatorPicker == 0)
        {
            answerOne = randomNumberOne + randomNumberTwo;
        }
        else if(operatorPicker == 1)
        {
            answerOne = randomNumberOne - randomNumberTwo;
        }
        else if(operatorPicker == 2)
        {
            answerOne = randomNumberOne * randomNumberTwo;
        }
        else
        {
            std::cout << "Something is wrong" << std::endl;
        }
        if(answerOne == enteredGuess)
        {
            std::cout << "Congratulations! You got the result " << answerOne << " right!" << std::endl;
        }
        else
        {
            std::cout << "Naah! The correct result is : " << answerOne << std::endl;
        }
        std::cout << std::endl;
        std::cout << "Do you want me to try again ? (Y | N) : ";
        std::cin >> enteredOption;
    }
}
void arraysVectorsDemosN()
{
    // Vectors have dynamic size
    std::vector<char> vowels(5);
    std::vector<int> testScores(10);

    std::vector<char> vowels3{'a', 'e', 'i', 'o', 'u'};
    std::vector<int> testScores2 {100, 98, 89, 85, 93};
    std::cout << "Fifth score at the vector..: " << testScores2.at(4) << std::endl;

    std::cout << "Let's enter the sixth score to the vector..: " << std::endl;
    testScores2.push_back(97);
    // We can add new element to the vectors
    std::cout << "Let's see the sixth score to the vector..: " << testScores2.at(5) << std::endl;
    std::cout << "There are " << testScores2.size() << " scores in the vector" <<  std::endl;

    // First value vector size, every element in vector will be initialized according to second parameter 
    std::vector<double> hiTemperatures(365, 80.0); 

    std::vector <std::vector<int>> movieRating 
    {
        {4, 2, 3, 5},
        {7, 2, 3, 4},
        {8, 2, 3, 4},
        {5, 2, 3, 9}
    };
    std::cout << "This is one way to reach the item in the vector..: " << movieRating[0][0] <<  std::endl;
    std::cout << "This is another way to reach the item in the vector..: " << movieRating.at(0).at(0) <<  std::endl;
}
void arraysVectorsDemosO()
{
    std::vector<int> vector1 {};
    std::vector<int> vector2 {};
    vector1.push_back(10);
    vector1.push_back(20);
    std::cout << "Vector1 index 0..: " << vector1.at(0) << std::endl;
    std::cout << "Vector1 index 1..: " << vector1.at(1) << std::endl;
    std::cout << "Size of Vector1 equals..:" << vector1.size() << std::endl;
    vector2.push_back(100);
    vector2.push_back(200);
    std::cout << "Vector2 index 0..: " << vector2.at(0) << std::endl;
    std::cout << "Vector2 index 1..: " << vector2.at(1) << std::endl;
    std::cout << "Size of Vector2 equals..: " << vector2.size() << std::endl;
    std::vector<std::vector<int>> vector_2d {};
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);
    std::cout << "Vector2d index 0 0..: " << vector_2d.at(0).at(0) << std::endl;
    std::cout << "Vector2d index 0 1..: " << vector_2d.at(0).at(1) << std::endl;
    std::cout << "Vector2d index 1 0..: " << vector_2d.at(1).at(0) << std::endl;
    std::cout << "Vector2s index 1 1..: " << vector_2d.at(1).at(1) << std::endl;
    std::cout << "Change happening.. " << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    vector1.at(0) = 1000;
    std::cout << "Vector2d index 0 0..: " << vector_2d.at(0).at(0) << std::endl;
    std::cout << "Vector2d index 0 1..: " << vector_2d.at(0).at(1) << std::endl;
    std::cout << "Vector2d index 1 0..: " << vector_2d.at(1).at(0) << std::endl;
    std::cout << "Vector2s index 1 1..: " << vector_2d.at(1).at(1) << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "Vector1 index 0..: " << vector1.at(0) << std::endl;
    std::cout << "Vector1 index 1..: " << vector1.at(1) << std::endl;
    std::cout << "Size of Vector1 equals..:" << vector1.size() << std::endl;
}
