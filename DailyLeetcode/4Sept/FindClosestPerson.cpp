//Time Complexity:O(1)
//Space Complexity:O(1)
class Solution {
public:
    int findClosest(int x, int y, int z) {
        int dxz=abs(x-z);
        int dyz=abs(y-z);
        if(dyz==dxz)return 0;

        return dxz>dyz?2:1;
        
    }
};