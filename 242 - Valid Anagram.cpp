#include <string>
using namespace std; 
#include <algorithm>

class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end()); 
        sort(t.begin(), t.end()); 
        return s==t; 
    }
};