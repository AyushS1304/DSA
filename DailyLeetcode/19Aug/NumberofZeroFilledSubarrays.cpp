//Time Complexity=O(n)
//Space Complexity=O(1)
class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long cnt=0;
        long long streak=0;

        for(auto & num:nums){
            if(num==0){
                streak++;
                cnt+=streak;
            }
            else{
                streak=0;
            }
        }
        return cnt;
    }
};