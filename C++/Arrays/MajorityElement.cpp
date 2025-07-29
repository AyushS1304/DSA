//Optimal Solution
// Time Complexity: O(n)
// Space Complexity: O(1)
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n =nums.size();
        int cnt=0; //cnt to get the major element
        int el; //major ele
        for(int i=0;i<n;i++){
            if(cnt==0){
                cnt=1;
                el=nums[i];

            }
            else if(el==nums[i]){
                cnt++;
            }
            else{
                cnt--;
            }

        }
        int cnt1=0;
        for(int i=0;i<n;i++){
            if(el==nums[i]){
                cnt1++;
            }
        }
        if(cnt1>(n/2)){ //check for major ele
            return el;
        }
        return -1;




    }
};