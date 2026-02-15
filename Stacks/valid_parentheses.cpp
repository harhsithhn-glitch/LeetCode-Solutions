// Problem: Valid Parentheses
// Platform: LeetCode
// Difficulty: Easy
// Approach: Stack
// Time Complexity: O(n)
// Space Complexity: O(n)
#include <stack>
#include <string>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for(char c : s) {

            // If opening bracket → push
            if(c == '(' || c == '{' || c == '[') {
                st.push(c);
            } 
            else {
                // If closing bracket and stack is empty → invalid
                if(st.empty()) return false;

                char top = st.top();

                // Check matching pair
                if( (c == ')' && top == '(') ||
                    (c == '}' && top == '{') ||
                    (c == ']' && top == '[') ) {
                    st.pop();
                } 
                else {
                    return false;
                }
            }
        }

        // If stack empty → valid
        return st.empty();
    }
};
