//Time Complexity:O(m*m*n)
//Space Complexity:O(n)
class Solution {
public:
    int onedArray(vector<int>&vec){
        int count=0;
        int streak=0;
        for(auto v:vec){
            if(v==1){
                streak++;
                count+=streak;
            }
            else{
                streak=0;
            }
        }
        return count;
    }
    int numSubmat(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        int res=0;

        for(int sr=0;sr<m;sr++){
            vector<int>vec(n,1);
            for(int er=sr;er<m;er++){
                for(int col=0;col<n;col++){
                    vec[col]=vec[col]&mat[er][col];
                }
                res+=onedArray(vec);
            }
        }
        return res;
    }
};