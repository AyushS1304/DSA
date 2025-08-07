// leetcode 560
//prefix sum
//Time Complexity=O(n)
//Space Complexity=O(n)
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>mp; //make map to store sum and its frequency
        int presum=0;
        int cnt=0;
        for(int i=0;i<n;i++){
            presum+=nums[i]; //prefix sum

            if(presum==k){ //if presum direct = k inc cnt
                cnt++;
            }

            int req=presum-k; //else like in 2 sum take req 
            cnt=cnt+mp[req]; //search req in mp and add its cnt
            mp[presum]++; //add presum cnt
        }
        return cnt;

        
    }
};