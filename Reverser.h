#ifndef REVERSER_H
#define REVERSER_H

#include <iostream>

using namespace std;

class Reverser
{
public:
    Reverser();
    ~Reverser();
    int reverseDigit(int value);
    string reverseString(string characters);
    int reverseDigitHelper(int value, int& reversed); 
    int reverseDigit(int value, int reversed);
    string reverseString(string characters,std::string reversed);
string reverseStringHelper(string characters, std::string reversed);

};

#endif