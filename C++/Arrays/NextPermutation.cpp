//Leetcode -31
//using stl
//Time Complexity=O(n)
//Space Complexity=O(1)
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        next_permutation(nums.begin(),nums.end());//using stl directly
    }
};

//Loop solution inplace
//Time Complexity=O(n)
//Space Complexity=O(1)
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int ind=-1;
// we will start from the second last
// element and see that which element is
// greater and store index and break
        for(int i=n-2;i>=0;i--){
            if(nums[i+1]>nums[i]){
                ind=i;
                break;
            }
        }
//             if we don't get the index so simply
// reverse the whole array as then it means array is sorted in descending order will get ans
if(ind==-1){
    reverse(nums.begin(),nums.end());
    return;
}
// when we get the index will start from
// last index and check with the element
// on stored index and if its less will swap
// and break

for(int i=n-1;i>=0;i--){
    if(nums[ind]<nums[i]){
        swap(nums[i],nums[ind]);
        // -after alll this will reverse the array from
// begin+ind+1 to end
        reverse(nums.begin()+ind+1,nums.end());
        break;
    }
} 
}
};