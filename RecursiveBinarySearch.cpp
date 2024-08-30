#include "RecursiveBinarySearch.h"

#include <iostream>

using namespace std;

bool RecursiveBinarySearch::searchHelper(std::vector<int> array, int start,
                                         int end, int target) {
  if (start > end) {
    return false;
  }
  int mid = start + ((end - start) / 2);
  if (array.at(mid) == target) {
    return true;
  } else if (array.at(mid) > target) {
    return searchHelper(array, start, mid - 1, target);
  } else {
    return searchHelper(array, mid + 1, end, target);
  }
};

bool RecursiveBinarySearch::search(std::vector<int> array, int target) {
  return searchHelper(array, 0, array.size() - 1, target);
}