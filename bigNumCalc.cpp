#include "BigNumCalc.h"
#include <iostream>
using namespace std;
std::list<int> BigNumCalc::buildBigNum(std::string numString) {
  std::list<int> result;
  for (int i = 0; i < numString.length(); i++) {
    result.push_front(numString[i] - '0');
  }
  return result;
}

std::list<int> BigNumCalc::add(std::list<int> num1, std::list<int> num2) {
  std::list<int> result;
  int carry = 0;
  std::list<int>::iterator it1 = num1.begin();
  std::list<int>::iterator it2 = num2.begin();
  int i = 0;
  while (it1 != num1.end() || it2 != num2.end()) {
    //std::cout << "round : " << i++ << std::endl;
    int sum = carry;
    if (it1 != num1.end()) {
      sum += *it1;
      //std::cout << "sum: " << sum << " *it1: " << *it1 << std::endl;
      it1++;
    }
    if (it2 != num2.end()) {
      sum += *it2;
      //std::cout << "sum: " << sum << " *it2: " << *it2 << std::endl;
      it2++;
    }
    result.push_front(sum % 10);
    // std::cout << "result sum: " << sum % 10 << std::endl;
    // std::cout << "carry: " << carry << std::endl;
    carry = sum / 10;
    // std::cout << "carry: " << carry << std::endl;
    // std::cout << "---" << std::endl;
  }
  if (carry != 0) {
    //std::cout << "result carry: " << carry << std::endl;
    result.push_front(carry);
  }
  return result;
}

std::list<int> BigNumCalc::sub(std::list<int> num1, std::list<int> num2) {
  std::list<int> result;
  bool borrow = false;
  std::list<int>::iterator it1 = num1.begin();
  std::list<int>::iterator it2 = num2.begin();
  int i = 0;
  while (it1 != num1.end() || it2 != num2.end()) {
    //std::cout << "round : " << i++ << std::endl;
    int digit1;
    int digit2;
    if (it1 != num1.end()) {
      digit1 = *it1;
      it1++;
    } else {
      digit1 = 0;
    }

    if (it2 != num2.end()) {
      digit2 = *it2;
      it2++;
    } else {
      digit2 = 0;
    }

    // check borrow
    if (borrow) {
      digit1 -= 1;
      borrow = false;
    }

    // calc sub
    int diff = digit1 - digit2;

    if (diff < 0) {
      borrow = true;
      diff += 10;  // borrow from next digit
    }

    result.push_front(diff);
    // std::cout << "result diff: " << diff << std::endl;
    // std::cout << "borrow: " << borrow << std::endl;
    // std::cout << "---" << std::endl;
  }

  while (result.size() > 1 && result.front() == 0) {
    result.pop_front();
  }

  return result;
}

std::list<int> BigNumCalc::mul(std::list<int> num1, std::list<int> num2) {
  std::list<int> result = {0};
  int shift = 0;

  for (auto it1 = num1.begin(); it1 != num1.end(); it1++) {
    // std::cout << "it1: " << *it1 << std::endl;
    std::list<int> temp;  // holde current partial product
    for (int i = 0; i < shift; i++) {
      temp.push_back(0);  // adding zeros based on position
    }

    int carry = 0;
    for (auto it2 = num2.begin(); it2 != num2.end(); it2++) {
      int product = (*it2) * (*it1) + carry;
    //   std::cout << "it2: " << *it2 << std::endl;
    //   std::cout << "product: " << product << std::endl;
      temp.push_back(product % 10);
    //std::cout << "temp product: " << product % 10<< std::endl;

      carry = product / 10;
    //std::cout << "carry product: " << product/ 10 << std::endl;

    }
    if (carry > 0) {
      temp.push_back(carry);
      
}
    list<int>::iterator it;
    // std::cout<<"result: "<<std::endl;
    // for (it = result.begin(); it != result.end(); ++it)
    //     cout  << *it;
    // cout << '\n';
    result = add(result, temp);
    // std::cout<<"temp: "<<std::endl;
    // for (it = temp.begin(); it != temp.end(); ++it)
    //     cout  << *it;
    // cout << '\n';
    // std::cout<<"result: "<<std::endl;
    // for (it = result.begin(); it != result.end(); ++it)
    //     cout  << *it;
    // cout << '\n';

    shift++;  // move to next position
  };

  // remove leading zeros
  while (result.size() > 1 && result.front() == 0) {
    result.pop_front();
  }

  return result;
}