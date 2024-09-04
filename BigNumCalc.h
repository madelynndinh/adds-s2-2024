#ifndef BIGNUMCALC_H
#define BIGNUMCALC_H
#include "LinkedList.h"
#include <iostream>
#include <list>
class bigNumCalc
{
    public:
    bigNumCalc(){};
    ~bigNumCalc(){};
    std::list<int> buildBigNum(std::string numString);
    std::list<int> add(std::list<int> num1, std::list<int> num2);
    std::list<int> sub(std::list<int> num1, std::list<int> num2);
    std::list<int> mul(std::list<int> num1, std::list<int> num2);
};


#endif