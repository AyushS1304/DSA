//Time Complexity:O(1)
//Space Complexity:O(1)
class Solution {
public:
    int makeTheIntegerZero(int num1, int num2) {
        for(int k=1;k<=60;k++){
            long long num=(long long)num1-(long long)k*num2;
            if(num<0)break;
            if(num>=k && __builtin_popcountll(num)<=k)return k;
        }
        return -1;
        
    } 
};