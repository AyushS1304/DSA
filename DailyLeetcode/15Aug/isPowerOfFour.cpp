// Time Complexity: O(log n)
// Space Complexity: O(1)
class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n==0 || n==1){
            return  n;
        }
        if(n%4!=0){
            return 0;
        }
        return isPowerOfFour(n/4);
    }
};