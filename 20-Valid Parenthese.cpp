#include <stack>
#include <string>
using namespace std; 

class Solution {
public:
    bool isValid(string s) {
        //The function "invalid" check if the input string s contains valid  parenthese. A string is considered valided if 
        stack <char> st; 
        for(auto c: s){
            if (c == '(' || c == '{' || c == '['){
                st.push(c); 
            }
            else if (c == '}' && !st.empty() && st.top() == '{'){
                st.pop(); 
            }
            else if (c == ']' && !st.empty() && st.top() == '['){
                st.pop(); 
            }
            else if (c == ')' && !st.empty() && st.top() == '('){
                st.pop(); 
            }
            else{
                return false; 
            }
            
        }
        return st.empty(); 
    }
};