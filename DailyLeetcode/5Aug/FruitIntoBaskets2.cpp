//Time complexity=O(n^2)
//Space complexity=O(1)
class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int n=fruits.size();
        int cnt=0;
        for(auto fruit:fruits){
            int unset=1;
            for(int i=0;i<n;i++){
                if(fruit<=baskets[i]){
                    baskets[i]=0; //make that zero
                    unset=0; // and also don't count it again
                    break;
                }
            }
            cnt+=unset;//add to the cnt if it is not placed
        }
        return cnt;
        
    }
};