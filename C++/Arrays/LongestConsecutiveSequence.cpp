//Leetcode -128
//optimised Solution
//Time Complexity=O(n)
//Space Complexity=O(n)
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       int n=nums.size();
       if(n==0){ //edge case
        return 0;
       }
       int maxlength=1;//maxlength
       unordered_set<int>st; //avoid duplicates
       for(int num:nums){
        st.insert(num);
       } 
       for(auto it:st){
        if(st.find(it-1)==st.end()){ //if a numbers previous is not there use it as first element
            int x=it;//store the first element of sequence
            int cnt=1;//curr length
        while(st.find(x+1)!=st.end()){ //to get the length of sequence
            x=x+1;
            cnt++;
        }
        maxlength=max(maxlength,cnt);
        }
       }
       return maxlength;
    }
};