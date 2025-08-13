//Recursion
//Time Complexity:O(logn)
//Space Complexity:O(1)
class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n==0 || n==1){
            return  n;
        }
        if(n%3!=0){
            return 0;
        }
        return isPowerOfThree(n/3);
    }
};