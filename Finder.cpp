#include "Finder.h"

    using namespace std;

    vector<int> Finder::findSubstrings(string s1, string s2) {
    //get the size of s1 and s2
        size_t n1 = s1.size();
        size_t n2 = s2.size();
    // set default result
        vector<int> result(n2,-1);

        for(size_t i = 0; i < n2; i++) {
            //get the start position
            size_t startPos;
            if(i == 0) {
                startPos = 0;
            } else {//start position is the last found position
                startPos = result[i-1];
            }
            size_t found = s1.find(s2.substr(0, i+1), startPos);
            if (found != string::npos) {
                result[i] = found;
                //result.push_back(found);
            } else {
                //result.push_back(-1);
                break;
            }
        }
        return result;
    }

   