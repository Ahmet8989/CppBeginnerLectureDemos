#include <iostream>
#include "myUtils.h"
#include <iomanip>
#include <typeinfo>
#include <ios>
#include <limits>
#include <cmath>
#include <bitset>

void testBitwiseOperatorsDemos()
{
    unsigned short int dataOne {0b11111110};
    std::cout << "Data (dec)..: " << std::dec << dataOne << std::endl;
    std::cout << "Data (oct)..: " << std::oct << dataOne << std::endl;
    std::cout << "Data (hex)..: " << std::hex << std::showbase << dataOne << std::endl;
    std::cout << "Data (bin)..: " << std::bitset<16>(dataOne) << std::endl;
}
void testBitwiseOperatorsDemosB()
{
    // Shifting right divides by 2^n
    // Shifting left multiplies by 2^n
    // This rule breaks if you throw off 1's either to the right or to the left

    unsigned short int valueOne {0xff0u};
    std::cout << "Size of short int..: " << sizeof(short int) << std::endl;
    std::cout << "Value..: " << std::bitset<16>(valueOne) << ", dec " << valueOne << std::endl;
    std::cout << std::endl;
    std::cout << "Shifting right >>>>>" << std::endl;

    // Shift right 1 bit position
    valueOne = static_cast<unsigned short int>(valueOne >> 1);
    std::cout << "Value : " << std::bitset<16>(valueOne) << ", dec " << valueOne << " (After shift 1 bit position right" << std::endl;

    // Shift left 1 bit position
    std::cout << std::endl;
    std::cout << "Shifting left 1 position" << std::endl;
    valueOne = static_cast<unsigned short int>(valueOne << 1);
    std::cout << "Value : " << std::bitset<16>(valueOne) << ", dec " << valueOne << " (After shift 1 bit position left" << std::endl;

    // Shift left 4 bit position
    std::cout << std::endl;
    std::cout << "Shifting left 4 position" << std::endl;
    valueOne = static_cast<unsigned short int>(valueOne << 4);
    std::cout << "Value : " << std::bitset<16>(valueOne) << ", dec " << valueOne << " (After shift 4 bit position left" << std::endl;
}
void testBitwiseOperatorsDemosC()
{
    // BITWISE AND
    const int COLUMN_WIDTH {25};
    unsigned char valueOne {0x3}; // 0000 0011
    unsigned char valueTwo {0x5}; // 0000 0101

    std::cout << std::setw(COLUMN_WIDTH) << "ValueOne..: " << std::setw(COLUMN_WIDTH) << std::bitset<8>(valueOne) << std::endl;
    std::cout << std::setw(COLUMN_WIDTH) << "ValueTwo..: " << std::setw(COLUMN_WIDTH) << std::bitset<8>(valueTwo) << std::endl;

    // AND -> 0000 0001
    std::cout << std::endl;
    std::cout << "Bitwise AND..: " << std::endl;
    std::cout << std::setw(COLUMN_WIDTH) << "ValueOne & ValueTwo..: " << std::setw(COLUMN_WIDTH) 
              << std::bitset<8>(valueOne & valueTwo) << std::endl;
    std::cout << std::endl;

}
void testBitwiseOperatorsDemosD()
{
    // BITWISE OR
    const int COLUMN_WIDTH {25};
    unsigned char valueOne {0x3}; // 0000 0011
    unsigned char valueTwo {0x5}; // 0000 0101

    std::cout << std::setw(COLUMN_WIDTH) << "ValueOne..: " << std::setw(COLUMN_WIDTH) << std::bitset<8>(valueOne) << std::endl;
    std::cout << std::setw(COLUMN_WIDTH) << "ValueTwo..: " << std::setw(COLUMN_WIDTH) << std::bitset<8>(valueTwo) << std::endl;

    // OR -> 0000 0111
    std::cout << std::endl;
    std::cout << "Bitwise OR..: " << std::endl;
    std::cout << std::setw(COLUMN_WIDTH) << "ValueOne & ValueTwo..: " << std::setw(COLUMN_WIDTH) 
              << std::bitset<8>(valueOne | valueTwo) << std::endl;
    std::cout << std::endl;

}
void testBitwiseOperatorsDemosE()
{
    // BITWISE NOT
    const int COLUMN_WIDTH {25};
    unsigned char valueOne {0x3}; // 0000 0011
    unsigned char valueTwo {0x5}; // 0000 0101

    std::cout << std::setw(COLUMN_WIDTH) << "ValueOne..: " << std::setw(COLUMN_WIDTH) << std::bitset<8>(valueOne) << std::endl;
    std::cout << std::setw(COLUMN_WIDTH) << "ValueTwo..: " << std::setw(COLUMN_WIDTH) << std::bitset<8>(valueTwo) << std::endl;

    // NOT 
    std::cout << std::endl;
    std::cout << "Bitwise NOT..: " << std::endl;
    std::cout << std::setw(COLUMN_WIDTH) << "~ValueOne..: " << std::setw(COLUMN_WIDTH) 
              << std::bitset<8>(~valueOne) << std::endl;
    std::cout << std::setw(COLUMN_WIDTH) << "~ValueTwo..: " << std::setw(COLUMN_WIDTH) 
              << std::bitset<8>(~valueTwo) << std::endl;
    std::cout << std::setw(COLUMN_WIDTH) << "~01011001..: " << std::setw(COLUMN_WIDTH) 
              << std::bitset<8>(~0b01011001) << std::endl;
    std::cout << std::setw(COLUMN_WIDTH) << "~~01011001..: " << std::setw(COLUMN_WIDTH) 
              << std::bitset<8>(~0x59) << std::endl;
    std::cout << std::endl;
}
void testBitwiseOperatorsDemosF()
{
    // BITWISE XOR
    const int COLUMN_WIDTH {25};
    unsigned char valueOne {0x3}; // 0000 0011
    unsigned char valueTwo {0x5}; // 0000 0101

    std::cout << std::setw(COLUMN_WIDTH) << "ValueOne..: " << std::setw(COLUMN_WIDTH) << std::bitset<8>(valueOne) << std::endl;
    std::cout << std::setw(COLUMN_WIDTH) << "ValueTwo..: " << std::setw(COLUMN_WIDTH) << std::bitset<8>(valueTwo) << std::endl;

    // XOR -> 0000 0110
    std::cout << std::endl;
    std::cout << "Bitwise   XOR..: " << std::endl;
    std::cout << std::setw(COLUMN_WIDTH) << "ValueOne ^ ValueTwo..: " << std::setw(COLUMN_WIDTH) 
              << std::bitset<8>(valueOne ^ valueTwo) << std::endl;
    std::cout << std::endl;
}
void testBitwiseOperatorsDemosG()
{
    // COMPUND BITWISE AND ASSIGNMENT OPERATORS -> <<=, >>=, &=, |=, ^=
    const int COLUMN_WIDTH {25};
    unsigned char valueOne {0b00110100}; // 0000 0011

    std::cout << std::endl;
    std::cout << std::setw(COLUMN_WIDTH) << "Initial value..: " << std::setw(COLUMN_WIDTH) << std::bitset<8>(valueOne) << std::endl;
    
    // 
    std::cout << std::endl;
    std::cout << "Shift left 3 bit positions..: " << std::endl;
    valueOne <<= 3;
    std::cout << std::setw(COLUMN_WIDTH) << "New value..: " << std::setw(COLUMN_WIDTH) 
              << std::bitset<8>(valueOne) << std::endl;
    std::cout << std::endl;

    std::cout << std::endl;
    std::cout << "Shift right 3 bit positions..: " << std::endl;
    valueOne >>= 3;
    std::cout << std::setw(COLUMN_WIDTH) << "New value..: " << std::setw(COLUMN_WIDTH) 
              << std::bitset<8>(valueOne) << std::endl;
    std::cout << std::endl;

}
void testBitwiseOperatorsDemosH()
{
    // BIT MASKS
    // Highlight position fot bit of interest with a 1
    // Masks other positions with 0
    // SET BIT POSITION(S)
    // RESET BIT POSITIONS(S)
    // CHECK BIT POSION(S)
    // TOGGLE BIT POSITION(S)
    const unsigned char mask_bit_0 {0b00000001}; // Bit 0
    const unsigned char mask_bit_1 {0b00000010}; // Bit 1
    const unsigned char mask_bit_2 {0b00000100}; // Bit 2
    const unsigned char mask_bit_3 {0b00001000}; // Bit 3
    const unsigned char mask_bit_4 {0b00010000}; // Bit 4
    const unsigned char mask_bit_5 {0b00100000}; // Bit 5
    const unsigned char mask_bit_6 {0b01000000}; // Bit 6
    const unsigned char mask_bit_7 {0b10000000}; // Bit 7
}
void testBitwiseOperatorsDemosI()
{
    const unsigned char mask_bit_0 {0b00000001}; // Bit 0
    const unsigned char mask_bit_1 {0b00000010}; // Bit 1
    const unsigned char mask_bit_2 {0b00000100}; // Bit 2
    const unsigned char mask_bit_3 {0b00001000}; // Bit 3
    const unsigned char mask_bit_4 {0b00010000}; // Bit 4
    const unsigned char mask_bit_5 {0b00100000}; // Bit 5
    const unsigned char mask_bit_6 {0b01000000}; // Bit 6
    const unsigned char mask_bit_7 {0b10000000}; // Bit 7

    // SET BIT POSITION(S)
    
    unsigned char variableOne {0b00000000}; // Starts off all bits off
    const int COLUMN_WIDTH {25};
    std::cout << std::setw(COLUMN_WIDTH) << "Variable..: " << std::setw(COLUMN_WIDTH) 
              << std::bitset<8>(variableOne) << std::endl;

    // SETTING BITS 
    // Setting : |= with mask of the bit

    // Set bit 1
    std::cout << "Setting bit in position 1..: " << std::endl;
    variableOne |= mask_bit_1;
    std::cout << std::setw(COLUMN_WIDTH) << "Variable..: " << std::setw(COLUMN_WIDTH) 
              << std::bitset<8>(variableOne) << std::endl;

    // Set bit 5
    std::cout << "Setting bit in position 5..: " << std::endl;
    variableOne |= mask_bit_5;
    std::cout << std::setw(COLUMN_WIDTH) << "Variable..: " << std::setw(COLUMN_WIDTH) 
              << std::bitset<8>(variableOne) << std::endl;

    // Set all bits
    std::cout << "Setting all bits..: " << std::endl;
    variableOne |= (mask_bit_0 | mask_bit_1 | mask_bit_2 | mask_bit_3 | 
                    mask_bit_4 | mask_bit_5 | mask_bit_6 | mask_bit_7);
    std::cout << std::setw(COLUMN_WIDTH) << "Variable..: " << std::setw(COLUMN_WIDTH) 
              << std::bitset<8>(variableOne) << std::endl;
}
void testBitwiseOperatorsDemosJ()
{
    const unsigned char mask_bit_0 {0b00000001}; // Bit 0
    const unsigned char mask_bit_1 {0b00000010}; // Bit 1
    const unsigned char mask_bit_2 {0b00000100}; // Bit 2
    const unsigned char mask_bit_3 {0b00001000}; // Bit 3
    const unsigned char mask_bit_4 {0b00010000}; // Bit 4
    const unsigned char mask_bit_5 {0b00100000}; // Bit 5
    const unsigned char mask_bit_6 {0b01000000}; // Bit 6
    const unsigned char mask_bit_7 {0b10000000}; // Bit 7

    // RESET BIT POSITION(S)
    
    unsigned char variableOne {0b11111111}; 
    const int COLUMN_WIDTH {25};
    std::cout << std::setw(COLUMN_WIDTH) << "Variable..: " << std::setw(COLUMN_WIDTH) 
              << std::bitset<8>(variableOne) << std::endl;

    // RESETTING BITS : Set to 0 
    // RESetting : &= (~mask)

    // Reset bit 1
    std::cout << "Resetting bit in position 1..: " << std::endl;
    variableOne &= (~mask_bit_1);
    std::cout << std::setw(COLUMN_WIDTH) << "Variable..: " << std::setw(COLUMN_WIDTH) 
              << std::bitset<8>(variableOne) << std::endl;

    // Reset bit 5
    std::cout << "Resetting bit in position 5..: " << std::endl;
    variableOne &= (~mask_bit_5);
    std::cout << std::setw(COLUMN_WIDTH) << "Variable..: " << std::setw(COLUMN_WIDTH) 
              << std::bitset<8>(variableOne) << std::endl;

    // Reset bits at pos 0, 2, 4, 6
    std::cout << "Reset bits at position 0, 2, 4, 6..: " << std::endl;
    variableOne &= (~(mask_bit_0 | mask_bit_2 | mask_bit_4 | mask_bit_6));
    std::cout << std::setw(COLUMN_WIDTH) << "Variable..: " << std::setw(COLUMN_WIDTH) 
              << std::bitset<8>(variableOne) << std::endl;
}
void testBitwiseOperatorsDemosK()
{
    const unsigned char mask_bit_0 {0b00000001}; // Bit 0
    const unsigned char mask_bit_1 {0b00000010}; // Bit 1
    const unsigned char mask_bit_2 {0b00000100}; // Bit 2
    const unsigned char mask_bit_3 {0b00001000}; // Bit 3
    const unsigned char mask_bit_4 {0b00010000}; // Bit 4
    const unsigned char mask_bit_5 {0b00100000}; // Bit 5
    const unsigned char mask_bit_6 {0b01000000}; // Bit 6
    const unsigned char mask_bit_7 {0b10000000}; // Bit 7

    unsigned char variableOne {0b10101010}; 
    const int COLUMN_WIDTH {25};
    std::cout << std::setw(COLUMN_WIDTH) << "Variable..: " << std::setw(COLUMN_WIDTH) 
              << std::bitset<8>(variableOne) << std::endl;

    //Check state of a bit
    std::cout << std::endl;
    std::cout << "Checking the state of each bit position (on / off)" << std::endl;
    std::cout << "Bit0 is " << ((variableOne & mask_bit_0) >> 0) << std::endl;
    std::cout << "Bit1 is " << ((variableOne & mask_bit_1) >> 1) << std::endl;
    std::cout << "Bit2 is " << ((variableOne & mask_bit_2) >> 2) << std::endl;
    std::cout << "Bit3 is " << ((variableOne & mask_bit_3) >> 3) << std::endl;
    std::cout << "Bit4 is " << ((variableOne & mask_bit_4) >> 4) << std::endl;
    std::cout << "Bit5 is " << ((variableOne & mask_bit_5) >> 5) << std::endl;
    std::cout << "Bit6 is " << ((variableOne & mask_bit_6) >> 6) << std::endl;
    std::cout << "Bit7 is " << ((variableOne & mask_bit_7) >> 7) << std::endl;
}
void testBitwiseOperatorsDemosM()
{
    const unsigned char mask_bit_0 {0b00000001}; // Bit 0
    const unsigned char mask_bit_1 {0b00000010}; // Bit 1
    const unsigned char mask_bit_2 {0b00000100}; // Bit 2
    const unsigned char mask_bit_3 {0b00001000}; // Bit 3
    const unsigned char mask_bit_4 {0b00010000}; // Bit 4
    const unsigned char mask_bit_5 {0b00100000}; // Bit 5
    const unsigned char mask_bit_6 {0b01000000}; // Bit 6
    const unsigned char mask_bit_7 {0b10000000}; // Bit 7

    unsigned char variableOne {0b10101001}; 
    const int COLUMN_WIDTH {25};
    std::cout << std::setw(COLUMN_WIDTH) << "Variable..: " << std::setw(COLUMN_WIDTH) 
              << std::bitset<8>(variableOne) << std::endl;

    //Toggle state of a bit 0
    std::cout << std::endl;
    std::cout << "Toggle bit 0..: " << std::endl;
    variableOne ^= mask_bit_0;
    std::cout << std::setw(COLUMN_WIDTH) << "Variable..: " << std::setw(COLUMN_WIDTH) 
              << std::bitset<8>(variableOne) << std::endl;

    //Toggle state of a bit 1
    std::cout << std::endl;
    std::cout << "Toggle bit 1..: " << std::endl;
    variableOne ^= mask_bit_1;
    std::cout << std::setw(COLUMN_WIDTH) << "Variable..: " << std::setw(COLUMN_WIDTH) 
              << std::bitset<8>(variableOne) << std::endl;

    //Toggle state of a bit 2
    std::cout << std::endl;
    std::cout << "Toggle bit 2..: " << std::endl;
    variableOne ^= mask_bit_2;
    std::cout << std::setw(COLUMN_WIDTH) << "Variable..: " << std::setw(COLUMN_WIDTH) 
              << std::bitset<8>(variableOne) << std::endl;

    //Toggle state of a bit 3
    std::cout << std::endl;
    std::cout << "Toggle bit 3..: " << std::endl;
    variableOne ^= mask_bit_3;
    std::cout << std::setw(COLUMN_WIDTH) << "Variable..: " << std::setw(COLUMN_WIDTH) 
              << std::bitset<8>(variableOne) << std::endl;

    //Toggle state of a bit 4
    std::cout << std::endl;
    std::cout << "Toggle bit 4..: " << std::endl;
    variableOne ^= mask_bit_4;
    std::cout << std::setw(COLUMN_WIDTH) << "Variable..: " << std::setw(COLUMN_WIDTH) 
              << std::bitset<8>(variableOne) << std::endl;

    //Toggle state of a bit 5
    std::cout << std::endl;
    std::cout << "Toggle bit 5..: " << std::endl;
    variableOne ^= mask_bit_5;
    std::cout << std::setw(COLUMN_WIDTH) << "Variable..: " << std::setw(COLUMN_WIDTH) 
              << std::bitset<8>(variableOne) << std::endl;

    //Toggle state of a bit 6
    std::cout << std::endl;
    std::cout << "Toggle bit 6..: " << std::endl;
    variableOne ^= mask_bit_6;
    std::cout << std::setw(COLUMN_WIDTH) << "Variable..: " << std::setw(COLUMN_WIDTH) 
              << std::bitset<8>(variableOne) << std::endl;

    //Toggle state of a bit 7
    std::cout << std::endl;
    std::cout << "Toggle bit 7..: " << std::endl;
    variableOne ^= mask_bit_7;
    std::cout << std::setw(COLUMN_WIDTH) << "Variable..: " << std::setw(COLUMN_WIDTH) 
              << std::bitset<8>(variableOne) << std::endl;
}
void use_options_v0(bool flag0, bool flag1, bool flag2, bool flag3, bool flag4, bool flag5, bool flag6, bool flag7)
{
    std::cout << "Flag0 is..: " << flag0 << ", do something with it." << std::endl;
    std::cout << "Flag1 is..: " << flag1 << ", do something with it." << std::endl;
    std::cout << "Flag2 is..: " << flag2 << ", do something with it." << std::endl;
    std::cout << "Flag3 is..: " << flag3 << ", do something with it." << std::endl;
    std::cout << "Flag4 is..: " << flag4 << ", do something with it." << std::endl;
    std::cout << "Flag5 is..: " << flag5 << ", do something with it." << std::endl;
    std::cout << "Flag6 is..: " << flag6 << ", do something with it." << std::endl;
    std::cout << "Flag7 is..: " << flag7 << ", do something with it." << std::endl;
}
void use_options_v1(unsigned char flags)
{
    const unsigned char mask_bit_0 {0b00000001}; // Bit 0
    const unsigned char mask_bit_1 {0b00000010}; // Bit 1
    const unsigned char mask_bit_2 {0b00000100}; // Bit 2
    const unsigned char mask_bit_3 {0b00001000}; // Bit 3
    const unsigned char mask_bit_4 {0b00010000}; // Bit 4
    const unsigned char mask_bit_5 {0b00100000}; // Bit 5
    const unsigned char mask_bit_6 {0b01000000}; // Bit 6
    const unsigned char mask_bit_7 {0b10000000}; // Bit 7 

    std::cout << "Flag0 is..: " << ((flags & mask_bit_0) >> 0) << ", do something with it." << std::endl;
    std::cout << "Flag1 is..: " << ((flags & mask_bit_1) >> 1) << ", do something with it." << std::endl;
    std::cout << "Flag2 is..: " << ((flags & mask_bit_2) >> 2) << ", do something with it." << std::endl;
    std::cout << "Flag3 is..: " << ((flags & mask_bit_3) >> 3) << ", do something with it." << std::endl;
    std::cout << "Flag4 is..: " << ((flags & mask_bit_4) >> 4) << ", do something with it." << std::endl;
    std::cout << "Flag5 is..: " << ((flags & mask_bit_5) >> 5) << ", do something with it." << std::endl;
    std::cout << "Flag6 is..: " << ((flags & mask_bit_6) >> 6) << ", do something with it." << std::endl;
    std::cout << "Flag7 is..: " << ((flags & mask_bit_7) >> 7) << ", do something with it." << std::endl;
}
void testBitwiseOperatorsDemosN()
{
    const unsigned int red_mask {0xFF000000};
    const unsigned int green_mask {0x00FF0000};
    const unsigned int blue_mask {0x0000FF00};
    const unsigned int alpha_mask {0x000000FF};

    unsigned int my_color {0xAABCDE00};

    // We shift to make sure the color byte of interest is in the lower index byte position so that
    // we can interpret that as an integer, which will be between 0 - 255. 

    // Set some format options
    std::cout << std::hex << std::showbase << std::endl;


    std::cout << "Red is..: " << ((my_color & red_mask) >> 24) << std::endl;
    std::cout << "Green is..: " << ((my_color & green_mask) >> 16) << std::endl;
    std::cout << "Blue is..: " << ((my_color & blue_mask) >> 8) << std::endl;
    std::cout << "Alpha is..: " << ((my_color & alpha_mask) >> 0) << std::endl;
}