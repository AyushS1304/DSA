//Optimal Solution
//Time Complexity: O(n)
//Space Complexity: O(n)
class Solution {
public:
    bool isValid(string s) {
        stack<char> st; // stack
        for (auto it : s) {
            if (it == '(' || it == '[' || it == '{') {
                st.push(it);
            } else {
                if (st.empty()) {
                    return false;
                }
                char el = st.top();
                st.pop();
                if (it != ')' && el == '(' || it != ']' && el == '[' ||
                    it != '}' && el == '{') {
                    return false;
                }
            }
        }
        return st.empty(); // important
    }
};