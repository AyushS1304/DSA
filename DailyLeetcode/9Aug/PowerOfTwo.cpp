//Bit manipulation
//Time Complexity:O(1)
//Space Complexity:O(1)
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0){
            return false;
        }
        return (n&(n-1))==0;
    }
};

//Recursion
//Time Complexity:O(logn)
//Space Complexity:O(1)
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==0 || n==1){
            return n;
        }
        if(n%2!=0){
            return false;
        }
        return isPowerOfTwo(n/2);
    }
};