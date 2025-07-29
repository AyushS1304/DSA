//Optimal Solution
// Time Complexity: O(n)
// Space Complexity: O(1)
//algo used:Dutch National Flag Algorithm.
class Solution{
    public:
        void SortColors(vector<int>&nums){
            int n= nums.size();
            int left=0;
            int mid=0;
            int right=n-1;

            while(mid<=right){
                if(nums[mid]==0){
                    swap(nums[mid],nums[left]);
                    left++;
                    mid++;
                }
                else if(nums[mid]==1){
                    mid++;
                }
                else{
                    swap(nums[right] , nums[mid]);
                    right--;
                }
            }
        }
}