//Optimal Solution
//Time Complexity: O(n)
//Space Complexity: O(n)
class Solution {
    public boolean isValid(String s) {
        if(s.length()==0){
            return false;
        }
        Stack<Character> st =new Stack<>();
        for(int i=0;i<s.length();i++){
            if(s.charAt(i)=='(' || s.charAt(i)=='{' || s.charAt(i)=='['){
                st.push(s.charAt(i));
            }
            else if(!st.empty()&&((
                st.peek()== '('&& s.charAt(i)==')' || st.peek()== '{'&& s.charAt(i)=='}' || st.peek()== '['&& s.charAt(i)==']')
            )){
                st.pop();
            }
            else{
                return false;
            }
        }
        return st.empty();       
    }
}