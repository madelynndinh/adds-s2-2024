#include "Finder.h"
#include <iostream>

using namespace std;

int main() {
    string s1 = "baab";
    string s2 = "ab";
    Finder f;
    vector<int> result = f.findSubstrings(s1, s2);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}