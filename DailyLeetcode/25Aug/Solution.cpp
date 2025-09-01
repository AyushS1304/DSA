//Time Complexity:O(m*n)
//Space Complexity:O(n)
class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        map<int,vector<int>>mp;
        int m=mat.size();
        int n=mat[0].size();

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                mp[i+j].push_back(mat[i][j]);
            }
        }
        vector<int>res;
        bool flip=true;
        for(auto it:mp){
            if(flip){
                reverse(it.second.begin(),it.second.end());
            }
            for(auto num:it.second){
                res.push_back(num);
            }
            flip=!flip;
            
        }
        return res;
    }
};