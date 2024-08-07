#include "Reverser.h"

#include <string>
Reverser::Reverser() {};
Reverser::~Reverser() {};
int Reverser::reverseDigitHelper(int value, int& reversed) {
  // base case;
  if (value == 0) {
    return reversed;
  }
  // recursive call

  int number = value % 10;
  reversed = reversed * 10 + number;

  value = value / 10;

  reversed = reverseDigitHelper(value, reversed);
  return reversed;
}

int Reverser::reverseDigit(int value) {
  int reversed = 0;
  reversed = reverseDigitHelper(value, reversed);
  return reversed;
};

int Reverser::reverseDigit(int value, int reversed = 0) {
  //check valid input
  if (value < 0) {
	  return -1;
  }
  // base case;
  if (value == 0) {
    return reversed;
  }

  // recursive call
  int number = value % 10;
  reversed = reversed * 10 + number;

  value = value / 10;

  reversed = reverseDigit(value, reversed);
  return reversed;
};

string Reverser::reverseStringHelper(string characters,
                                     std::string reversed = "") {
  int index = characters.length() - 1;

  // base case;
  if (characters.length() == 0) {
    return reversed;
  }

  // recursive call
  string character;
  character = characters[index];
  reversed = reversed.append(character);
  characters = characters.substr(0, index);
  index--;
  reversed = reverseStringHelper(characters, reversed);
  return reversed;
}

string Reverser::reverseString(string characters) {
  string reversed = "";
  reversed = reverseStringHelper(characters, reversed);
  return reversed;
};